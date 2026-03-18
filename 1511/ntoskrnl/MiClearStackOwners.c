/*
 * XREFs of MiClearStackOwners @ 0x14002D2EC
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  int v3; // esi
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v4 = a1 - 144;
    v5 = 18;
  }
  else
  {
    v4 = a1 - 8LL * (unsigned __int8)byte_1402FF138;
    v5 = (unsigned __int8)byte_1402FF138;
  }
  v6 = v4 + 8LL * (unsigned int)(v5 + 1);
  v7 = v4 + 8;
  while ( v7 < v6 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v7);
    v8 = v11;
    if ( (v11 & 1) != 0 )
    {
      v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v11) - 0x58000000000LL;
      MiLockPageAtDpcInline(v9);
      if ( v8 == MI_READ_PTE_LOCK_FREE(v7) )
      {
        if ( v3 == -1 )
        {
          v3 = (unsigned __int8)HIBYTE(*(_QWORD *)(v9 + 40)) >> 2;
        }
        else if ( v3 != (unsigned __int8)HIBYTE(*(_QWORD *)(v9 + 40)) >> 2 )
        {
          v2 = 0;
        }
        *(_QWORD *)v9 = 0LL;
        v7 += 8LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v7 += 8LL;
    }
  }
  return v2;
}
