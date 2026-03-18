/*
 * XREFs of WheapSqmAddToStream @ 0x1406FDC68
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1406FC934 (WheapAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406FD904 (WheapPfaRetireExpiredMemoryEntries.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall WheapSqmAddToStream(int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
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
  int *UserData; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[61]; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+268h] [rbp+160h] BYREF
  unsigned int v19; // [rsp+270h] [rbp+168h] BYREF

  v19 = a2;
  v18 = a1;
  v4 = a2;
  UserData = 0LL;
  result = (unsigned int)memset(v17, 0, sizeof(v17));
  v15 = 11;
  if ( a3 && (unsigned int)v4 < 9 )
  {
    v17[0] = 4LL;
    UserData = &v15;
    v17[1] = &unk_1402AD710;
    v17[3] = &v18;
    v17[5] = &v19;
    v17[2] = 16LL;
    v17[4] = 4LL;
    v17[6] = 4LL;
    if ( (_DWORD)v4 )
    {
      v6 = 6;
      v7 = (const wchar_t **)(a3 + 8);
      v8 = (char *)&v17[8] + 4;
      do
      {
        *(_QWORD *)(v8 - 4) = 4LL;
        v9 = *((_DWORD *)v7 - 2);
        *(_QWORD *)(v8 - 12) = v7 - 1;
        v10 = (const wchar_t **)&unk_1402AD720;
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
        v17[v14 - 1] = v12;
        LODWORD(v17[v14]) = 2 * v13 + 2;
        HIDWORD(v17[v14]) = 0;
        --v4;
      }
      while ( v4 );
    }
    return EtwWrite(
             (REGHANDLE)WheapDispatchPtr.NextDevice,
             &WHEA_SQM_EVENT_ADDTOSTREAM,
             0LL,
             0x1Fu,
             (PEVENT_DATA_DESCRIPTOR)&UserData);
  }
  return result;
}
