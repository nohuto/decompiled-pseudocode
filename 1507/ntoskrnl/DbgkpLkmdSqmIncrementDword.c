/*
 * XREFs of DbgkpLkmdSqmIncrementDword @ 0x1401E15F4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSqmStatus @ 0x14066A35C (DbgkpLkmdSqmStatus.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
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
  v3 = 1;
  v4 = 6;
  v7 = 16LL;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v4;
  v9 = 4LL;
  v6 = &unk_1402A6E00;
  v11 = 4LL;
  v8 = &v12;
  v10 = &v3;
  return EtwWrite(RegHandle, &SQM_INCREMENT_DWORD, 0LL, 4u, &UserData);
}
