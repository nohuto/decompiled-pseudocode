/*
 * XREFs of CmpAccountForLogReservation @ 0x1404BDBF4
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpTransInitializeTransaction @ 0x1404BDABC (CmpTransInitializeTransaction.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     LockRMLog @ 0x14051A148 (LockRMLog.c)
 */

__int64 __fastcall CmpAccountForLogReservation(__int64 a1, __int64 a2, char a3)
{
  void *v5; // rcx
  unsigned int appended; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  LONGLONG rgcbReservation; // [rsp+68h] [rbp+10h] BYREF

  rgcbReservation = 48LL;
  LockRMLog(a1);
  v5 = *(void **)(a1 + 96);
  if ( !a3 )
    rgcbReservation = -rgcbReservation;
  appended = ClfsReserveAndAppendLog(v5, 0LL, 0, 0LL, 0LL, 1u, &rgcbReservation, 0, 0LL);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return appended;
}
