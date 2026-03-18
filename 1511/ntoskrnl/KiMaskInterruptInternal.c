/*
 * XREFs of KiMaskInterruptInternal @ 0x140115E04
 * Callers:
 *     KeMaskInterrupt @ 0x140115CE8 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x1401C7B3C (KiMaskInterruptDpc.c)
 * Callees:
 *     xHalVectorToIDTEntry @ 0x1400F46D4 (xHalVectorToIDTEntry.c)
 */

__int64 __fastcall KiMaskInterruptInternal(char a1)
{
  _DWORD *v1; // r8
  _QWORD *v3; // r8
  _QWORD *v4; // rax

  v1 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_1402D2688(a1)];
  if ( !v1 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)())v1 + 10) == KiChainedDispatch )
  {
    v3 = v1 + 2;
    v4 = v3;
    while ( (v4[12] & 1) != 0 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 == v3 )
        return off_1402D27E0();
    }
  }
  else if ( (v1[26] & 1) != 0 )
  {
    return off_1402D27E0();
  }
  return 296LL;
}
