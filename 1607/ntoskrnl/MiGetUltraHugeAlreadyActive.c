/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x140140D60
 * Callers:
 *     MiGetLargePageToZero @ 0x14008A680 (MiGetLargePageToZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB08 (RtlFindClearBitsAndSet.c)
 *     MiDecrementHugeContext @ 0x140140E7C (MiDecrementHugeContext.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2)
{
  unsigned int **p_Buffer; // rbx
  __int64 v4; // r15
  ULONG ClearBitsAndSet; // eax
  __int16 v6; // bp
  __int64 v7; // rdi
  struct _RTL_BITMAP **v9; // r15
  struct _RTL_BITMAP *i; // r14
  ULONG v11; // eax

  p_Buffer = *(unsigned int ***)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 144);
  if ( p_Buffer )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
    v6 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      v7 = (__int64)p_Buffer[21];
      MiLockPageAtDpcInline(v7);
      if ( !*((_BYTE *)p_Buffer + 68) && *((_DWORD *)p_Buffer + 48) != 512 )
      {
LABEL_5:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_WORD *)(a2 + 104) = v6;
        return p_Buffer;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiDecrementHugeContext(a2);
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  v9 = (struct _RTL_BITMAP **)(v4 + 48);
  for ( i = *v9; i != (struct _RTL_BITMAP *)v9; i = *(struct _RTL_BITMAP **)&i->SizeOfBitMap )
  {
    p_Buffer = &i[-5].Buffer;
    v11 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v6 = v11;
    if ( v11 != -1 )
    {
      v7 = (__int64)p_Buffer[21];
      MiLockPageAtDpcInline(v7);
      if ( !*((_BYTE *)p_Buffer + 68) && *((_DWORD *)p_Buffer + 48) != 512 )
      {
        ++*((_DWORD *)p_Buffer + 47);
        *(_QWORD *)(a2 + 112) = p_Buffer;
        goto LABEL_5;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
