/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18006BD40
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18006BEAC (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x1800A6150 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+48h] [rbp+10h] BYREF

  result = TppAlpcpValidateAlpc(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 272);
    if ( v3 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 264), 11LL, &v3);
    return TppBarrierAdjust((unsigned __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
