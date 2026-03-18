/*
 * XREFs of PopSqmAddToStream @ 0x140243294
 * Callers:
 *     PopSqmBatteryUpdate @ 0x1406BE924 (PopSqmBatteryUpdate.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall PopSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned int v6; // r11d
  const wchar_t **v7; // r8
  char *v8; // rdx
  int v9; // ecx
  const wchar_t **v10; // rax
  const wchar_t *v11; // r9
  const wchar_t *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int *UserData; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v19[61]; // [rsp+60h] [rbp-A8h] BYREF

  v15 = 11131;
  v16 = 4;
  UserData = 0LL;
  result = (unsigned int)memset(v19, 0, sizeof(v19));
  v17 = 11;
  if ( PopDiagHandleRegistered && a4 )
  {
    v19[0] = 4LL;
    UserData = &v17;
    v6 = 6;
    v19[2] = 16LL;
    v19[1] = &unk_1402A7EB8;
    v7 = (const wchar_t **)(a4 + 8);
    v19[4] = 4LL;
    v19[3] = &v15;
    v8 = (char *)&v19[8] + 4;
    v19[6] = 4LL;
    v19[5] = &v16;
    do
    {
      *(_QWORD *)(v8 - 4) = 4LL;
      v9 = *((_DWORD *)v7 - 2);
      *(_QWORD *)(v8 - 12) = v7 - 1;
      v10 = (const wchar_t **)&unk_1402A7EB0;
      if ( v9 == 1 )
        v10 = v7;
      *(_QWORD *)(v8 + 12) = 4LL;
      *(_QWORD *)(v8 + 4) = v10;
      if ( v9 == 2 )
        v11 = *v7;
      else
        v11 = L"0";
      if ( v9 == 2 )
        v12 = *v7;
      else
        v12 = L"0";
      v13 = -1LL;
      do
        ++v13;
      while ( v11[v13] );
      v14 = 2LL * v6;
      v8 += 48;
      v6 += 3;
      v7 += 2;
      v19[v14 - 1] = v12;
      LODWORD(v19[v14]) = 2 * v13 + 2;
      HIDWORD(v19[v14]) = 0;
    }
    while ( v6 < 0x12 );
    return EtwWrite(PopDiagHandle, &PopSqm_Add_StreamRow, 0LL, 0x1Fu, (PEVENT_DATA_DESCRIPTOR)&UserData);
  }
  return result;
}
