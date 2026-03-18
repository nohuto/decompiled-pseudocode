/*
 * XREFs of MiCreateZeroThreadContext @ 0x1401318FC
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     MiZeroPfn @ 0x140131BE0 (MiZeroPfn.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiCreateZeroThreadContext(int *a1, __int64 a2, int a3)
{
  _QWORD *PoolWithTag; // rbx
  unsigned __int64 v7; // r8
  __int64 Page; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  ULONG_PTR v12; // rax

  if ( a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20206D4Du);
    if ( PoolWithTag )
    {
      if ( a3 == 1 && !(unsigned int)MiAcquireNonPagedResources(a1, 0x201uLL) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        PoolWithTag[6] = 0LL;
        PoolWithTag[4] = a2;
        if ( a1 == MiSystemPartition )
        {
          *PoolWithTag = -1LL;
          PoolWithTag[1] = 0LL;
          Page = MiGetPage((__int64)a1, *(_DWORD *)(a2 + 64), 0xAu);
          v9 = Page;
          if ( Page != -1 )
          {
            v10 = 48 * Page - 0x58000000000LL;
            MiFinalizePageAttribute(v10, 1LL, 0);
            if ( *(_QWORD *)(v10 + 16) )
              MiZeroPfn(v10);
            *(_QWORD *)(v10 + 16) = 128LL;
            PoolWithTag[2] = v9;
            *((_BYTE *)PoolWithTag + 24) = 1;
            return PoolWithTag;
          }
        }
        else
        {
          *((_BYTE *)PoolWithTag + 24) = 0;
          v12 = MiReservePtes((__int64)&qword_1402FF7B0, 0x200u, v7);
          if ( v12 )
          {
            PoolWithTag[5] = v12;
            return PoolWithTag;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( a3 == 1 )
          MiReleaseNonPagedResources((__int64)a1, 0x201uLL);
      }
    }
  }
  return 0LL;
}
