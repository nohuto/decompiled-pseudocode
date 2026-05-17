/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18003D260
 * Callers:
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     TppWorkpValidateWork @ 0x18003CD60 (TppWorkpValidateWork.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x18007DA20 (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  bool result; // al
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 160);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  result = 0;
  if ( a2 )
  {
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
      return *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
  }
  return result;
}
