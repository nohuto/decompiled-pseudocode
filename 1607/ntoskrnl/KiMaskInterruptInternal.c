/*
 * XREFs of KiMaskInterruptInternal @ 0x14012472C
 * Callers:
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x1401D6914 (KiMaskInterruptDpc.c)
 * Callees:
 *     xHalVectorToIDTEntry @ 0x1400B3D9C (xHalVectorToIDTEntry.c)
 */

__int64 __fastcall KiMaskInterruptInternal(char a1)
{
  _DWORD *v1; // r8
  _QWORD *v3; // r8
  _QWORD *v4; // rax

  v1 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_1402F2328(a1)];
  if ( !v1 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v1
       + 10) == KiChainedDispatch )
  {
    v3 = v1 + 2;
    v4 = v3;
    while ( (v4[12] & 1) != 0 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 == v3 )
        return off_1402F2480();
    }
  }
  else if ( (v1[26] & 1) != 0 )
  {
    return off_1402F2480();
  }
  return 296LL;
}
