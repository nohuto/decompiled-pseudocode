/*
 * XREFs of FreeMsiInfo @ 0x1C0005340
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C0005448 (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMsiInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 216);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  *(_WORD *)(a1 + 200) = 0;
  return result;
}
