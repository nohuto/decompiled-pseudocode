/*
 * XREFs of MiClearStackOwners @ 0x1400EFD5C
 * Callers:
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // r15d
  int v3; // esi
  unsigned __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  _BYTE v11[16]; // [rsp+70h] [rbp+70h] BYREF

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v4 = a1 - 144;
    v5 = 18;
  }
  else
  {
    v4 = a1 - 8LL * (unsigned __int8)byte_140327580;
    v5 = (unsigned __int8)byte_140327580;
  }
  v6 = v4 + 8LL * (unsigned int)(v5 + 1);
LABEL_5:
  v4 += 8LL;
  while ( v4 < v6 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(v4);
    *(_QWORD *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) = v7;
    v8 = v7;
    if ( (v7 & 1) == 0 )
      goto LABEL_5;
    v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    if ( v8 == MI_READ_PTE_LOCK_FREE(v4) )
    {
      if ( v3 == -1 )
      {
        v3 = (unsigned __int8)HIBYTE(*(_QWORD *)(v9 + 40)) >> 2;
      }
      else if ( v3 != ((*(_QWORD *)(v9 + 40) >> 58) & 0x3F) )
      {
        v2 = 0;
      }
      *(_QWORD *)v9 = 0LL;
      v4 += 8LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v2;
}
