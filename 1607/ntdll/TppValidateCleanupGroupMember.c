/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18003C230
 * Callers:
 *     TppWorkpValidateWork @ 0x18003BCE0 (TppWorkpValidateWork.c)
 *     TppWaitpValidateWait @ 0x18003BF88 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x18003C160 (TppIopValidateIo.c)
 *     TppTimerpValidateTimer @ 0x18003C1B8 (TppTimerpValidateTimer.c)
 *     TppAlpcpValidateAlpc @ 0x18006557C (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x1800846F8 (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  bool result; // al
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
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
