/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007A5B0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x180094150 (ZwAlpcQueryInformation.c)
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
    return TppBarrierAdjust(a1 + 128, 0LL);
  }
  return result;
}
