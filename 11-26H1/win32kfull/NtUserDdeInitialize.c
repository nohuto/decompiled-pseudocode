/*
 * XREFs of NtUserDdeInitialize @ 0x1400844A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x140253250 (xxxDestroyThreadDDEObject.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserDdeInitialize(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rcx
  unsigned int v10; // r14d
  _DWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v12[0] = 0;
  EnterCrit(0LL, 0LL);
  v10 = xxxCsDdeInitialize(&v13, &v14, v12, a4, a5);
  if ( !v10 )
  {
    RtlWriteULong64ToUser(a1, v13);
    RtlWriteULong64ToUser(a2, v14);
    RtlWriteULongToUser(a3, v12[0]);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
