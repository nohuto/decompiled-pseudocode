/*
 * XREFs of DbgkpLkmdSqmIncrementDword @ 0x1401B78A8
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSqmStatus @ 0x14061B9D8 (DbgkpLkmdSqmStatus.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmIncrementDword(REGHANDLE RegHandle, int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  void *v6; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  int *v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  int *v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = a2;
  v4 = 1;
  v3 = 6;
  v7 = 16LL;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v9 = 4LL;
  v6 = &unk_140280BA0;
  v11 = 4LL;
  v8 = &v12;
  v10 = &v4;
  return EtwWrite(RegHandle, &SQM_INCREMENT_DWORD, 0LL, 4u, &UserData);
}
