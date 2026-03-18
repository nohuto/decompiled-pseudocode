/*
 * XREFs of xxxTurnOffCompositing @ 0x1C01E80F8
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C0090834 (xxxInternalEnumWindow.c)
 */

struct tagBWL *__fastcall xxxTurnOffCompositing(__int64 a1, int a2)
{
  char v3; // r9
  struct tagBWL *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  if ( a2 )
  {
    a1 = *(_QWORD *)(a1 + 96);
    if ( !a1 )
      return result;
    v3 = 3;
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    v7[1] = a1;
    ++*(_DWORD *)(a1 + 8);
  }
  result = xxxInternalEnumWindow(a1, (__int64 (__fastcall *)(__int64, __int64))xxxEnumTurnOffCompositing, 0LL, v3);
  if ( a2 )
    return (struct tagBWL *)ThreadUnlock1(v6, v5);
  return result;
}
