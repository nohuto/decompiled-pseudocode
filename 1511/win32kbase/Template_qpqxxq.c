/*
 * XREFs of Template_qpqxxq @ 0x1C00AE2E8
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     EtwTraceDCompDeferBatchEvent @ 0x1C007B780 (EtwTraceDCompDeferBatchEvent.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z @ 0x1C00A8784 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpqxxq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  char *v11; // [rsp+40h] [rbp-31h]
  __int64 v12; // [rsp+48h] [rbp-29h]
  char *v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  char *v15; // [rsp+60h] [rbp-11h]
  __int64 v16; // [rsp+68h] [rbp-9h]
  char *v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  char *v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+C8h] [rbp+57h] BYREF

  v21 = a4;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = &a5;
  v12 = 8LL;
  v13 = &a6;
  v14 = 4LL;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &DCompDeferBatchEvent, &W32kControlGuid, 6u, &UserData);
}
