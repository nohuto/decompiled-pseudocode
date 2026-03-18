/*
 * XREFs of KiMaskInterruptInternal @ 0x14014B35C
 * Callers:
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x140204A50 (KiMaskInterruptDpc.c)
 * Callees:
 *     xHalVectorToIDTEntry @ 0x140131CB4 (xHalVectorToIDTEntry.c)
 */

__int64 __fastcall KiMaskInterruptInternal(char a1)
{
  __int64 (__fastcall **v1)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // r8
  _QWORD *v3; // r8
  _QWORD *v4; // rax

  v1 = (__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_1403217D8(a1)];
  if ( !v1 )
    return 2147483685LL;
  if ( v1[10] == KiChainedDispatch )
  {
    v3 = v1 + 1;
    v4 = v3;
    while ( (v4[12] & 1) != 0 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 == v3 )
        return off_140321930();
    }
    return 296LL;
  }
  if ( ((_DWORD)v1[13] & 1) == 0 )
    return 296LL;
  return off_140321930();
}
