/*
 * XREFs of SepSetSqmObjectName @ 0x140695354
 * Callers:
 *     SepSqmInformation @ 0x140695438 (SepSqmInformation.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SepSetSqmObjectName(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  void *v6; // [rsp+50h] [rbp-19h]
  __int64 v7; // [rsp+58h] [rbp-11h]
  void *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  void *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  __int64 v16; // [rsp+A0h] [rbp+37h]
  int v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+ACh] [rbp+43h]

  UserData.Ptr = (ULONGLONG)&unk_140286CD0;
  v3 = 1;
  v6 = &unk_140286CF0;
  v8 = &unk_1403581D4;
  v10 = &v3;
  v4 = 2;
  v12 = &v4;
  v14 = &unk_140286CC8;
  v16 = *(_QWORD *)(a2 + 8);
  v17 = *(unsigned __int16 *)(a2 + 2);
  *(_QWORD *)&UserData.Size = 16LL;
  v7 = 4LL;
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v18 = 0;
  return EtwWrite(qword_1403581E0, &SQM_ADD_LEGACYSTREAMROW, 0LL, 7u, &UserData);
}
