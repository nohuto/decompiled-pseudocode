/*
 * XREFs of KeUnmaskInterrupt @ 0x140125B4C
 * Callers:
 *     IopUnmaskInterrupt @ 0x140125ADC (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x14012DE50 (KiIsInterruptTypeSecondary.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1401D5DF8 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  char IsInterruptTypeSecondary; // al
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  LOBYTE(v7) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v7);
      _m_prefetchw((const void *)(v8 + 104));
      if ( (_InterlockedAnd((volatile signed __int32 *)(v8 + 104), 0xFFFFFFFE) & 1) == 0 )
        return 295LL;
      LOBYTE(v7) = v7 + 1;
      if ( (unsigned __int8)v7 >= a2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( *(_DWORD *)(a3 + 8) )
    {
      return 0LL;
    }
    else
    {
      if ( IsInterruptTypeSecondary != 0 )
        result = KiUnmaskSecondaryInterruptInternal(
                   *(unsigned int *)(*(_QWORD *)a1 + 88LL),
                   *(unsigned int *)(a3 + 64),
                   v7);
      else
        result = off_1402F2488();
      if ( (_DWORD)result == 296 )
        return 0LL;
    }
  }
  return result;
}
