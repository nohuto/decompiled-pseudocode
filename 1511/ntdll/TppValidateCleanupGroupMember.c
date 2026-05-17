/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18000B324
 * Callers:
 *     TppWorkpValidateWork @ 0x18000A8EC (TppWorkpValidateWork.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     TppAlpcpValidateAlpc @ 0x18006BEAC (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x180081848 (TppJobpValidateJob.c)
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
