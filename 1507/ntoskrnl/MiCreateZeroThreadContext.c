/*
 * XREFs of MiCreateZeroThreadContext @ 0x140123730
 * Callers:
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     MiZeroPfn @ 0x140156414 (MiZeroPfn.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreateZeroThreadContext(__int16 *a1, __int64 a2, int a3)
{
  _QWORD *PoolWithTag; // rbx
  unsigned __int64 v8; // r8
  __int64 Page; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rax

  if ( !a2 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20206D4Du);
  if ( !PoolWithTag )
    return 0LL;
  if ( !(unsigned int)MiAcquireNonPagedResources(a1, 513LL) )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  if ( a1 == MiSystemPartition )
  {
    PoolWithTag[1] = -1LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = a2;
    Page = MiGetPage((__int64)a1, *(_DWORD *)(a2 + 56), 0xAu);
    v10 = Page;
    if ( Page == -1 )
    {
LABEL_8:
      ExFreePoolWithTag(PoolWithTag, 0);
      MiReleaseNonPagedResources((__int64)a1, 0x201uLL);
      return 0LL;
    }
    v11 = 48 * Page - 0x58000000000LL;
    MiFinalizePageAttribute(v11, 1LL, 0);
    if ( *(_QWORD *)(v11 + 16) )
      MiZeroPfn(v11);
    *(_QWORD *)(v11 + 16) = MiMakeDemandZeroPte(4LL);
    PoolWithTag[3] = v10;
    *((_BYTE *)PoolWithTag + 32) = 1;
  }
  else
  {
    *((_BYTE *)PoolWithTag + 32) = 0;
    v12 = MiReservePtes((__int64)&qword_14034FC70, 0x200u, v8);
    if ( !v12 )
      goto LABEL_8;
    PoolWithTag[5] = v12;
    *((_DWORD *)PoolWithTag + 12) = a3;
  }
  return PoolWithTag;
}
