/*
 * XREFs of SmKmSqmAddToStream @ 0x140259F6C
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140257BBC (SmKmStoreTerminateWorker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmKmSqmAddToStream(REGHANDLE RegHandle, __int64 a2, __int64 a3, _DWORD *a4)
{
  char *v4; // rdx
  char *v6; // rcx
  __int64 v7; // r10
  int v8; // r8d
  int *v9; // rax
  const wchar_t *v10; // r8
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  void *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char v24; // [rsp+90h] [rbp-70h] BYREF
  char v25; // [rsp+ACh] [rbp-54h] BYREF

  v13 = 2;
  UserData.Ptr = (ULONGLONG)&v14;
  v4 = &v24;
  v16 = 6839;
  v18 = &unk_140323038;
  v14 = 11;
  v20 = &v16;
  v15 = 0;
  v22 = &v13;
  v6 = &v25;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = 2LL;
  v19 = 16LL;
  v21 = 4LL;
  v23 = 4LL;
  do
  {
    v8 = *a4;
    v9 = a4 + 2;
    *(_QWORD *)v4 = a4;
    *(_QWORD *)(v6 - 20) = 4LL;
    if ( v8 != 1 )
      v9 = &v15;
    *(_QWORD *)(v6 - 12) = v9;
    *(_QWORD *)(v6 - 4) = 4LL;
    if ( v8 == 2 )
      v10 = (const wchar_t *)*((_QWORD *)a4 + 1);
    else
      v10 = L"0";
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    *(_QWORD *)(v6 + 4) = v10;
    *((_DWORD *)v6 + 3) = 2 * v11 + 2;
    a4 += 4;
    *((_DWORD *)v6 + 4) = 0;
    v4 += 48;
    v6 += 48;
    --v7;
  }
  while ( v7 );
  return EtwWrite(RegHandle, &SmEventSQMStreamRow, 0LL, (v4 - (char *)&UserData) >> 4, &UserData);
}
