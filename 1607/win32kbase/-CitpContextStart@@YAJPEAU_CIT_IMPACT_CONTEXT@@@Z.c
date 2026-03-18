/*
 * XREFs of ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7EC
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

__int64 __fastcall CitpContextStart(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 result; // rax
  __int16 v3; // ax
  char OutputBuffer; // [rsp+48h] [rbp+10h] BYREF

  result = CitpContextTrackingDataStart(a1);
  if ( (int)result >= 0 )
  {
    OutputBuffer = 0;
    ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
    *((_BYTE *)a1 + 432) ^= ((OutputBuffer != 0) ^ *((_BYTE *)a1 + 432)) & 1;
    v3 = MEMORY[0xFFFFF780000002C4];
    if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
      v3 = -1;
    *((_WORD *)a1 + 218) = v3;
    return 0LL;
  }
  return result;
}
