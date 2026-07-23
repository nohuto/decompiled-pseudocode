/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140220B74
 * Callers:
 *     <none>
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14015D4D0 (ZwSetSystemInformation.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1402205A4 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x140220714 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x1402222F0 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  int v2; // r14d
  unsigned int v3; // edx
  int v4; // r10d
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  ULONGLONG *v6; // rsi
  int v7; // edx
  _BYTE *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  _DWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  const wchar_t *v15; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 UserDataCount[4]; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+88h] [rbp-78h]
  const wchar_t *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  _DWORD v26[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v27[284]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28[6]; // [rsp+570h] [rbp+470h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v26, 0, 0x44uLL);
  v19 = 68LL;
  v18 = (__int64 *)v26;
  SystemInformation = 0x800000001LL;
  v26[0] = v26[0] & 0xFFFFFF00 | 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v18 = (__int64 *)v27,
        LODWORD(v19) = 1128,
        memset(v27, 0, 0x468uLL),
        v2 = 0,
        v27[0] = v27[0] & 0xFFFFFE00 | 0x103,
        (v26[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v27[1] = v26[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v3 = 0;
        if ( v27[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= (unsigned int)BYTE1(v26[0]) )
        goto LABEL_10;
    }
    v4 = v27[24];
    while ( !_bittest(&v4, v3) != *((_DWORD *)P + 13) || v27[v3 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v3 >= v27[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserData = v28;
    UserDataCount[1] = (__int64)v27;
    UserDataCount[0] = (__int64)v28;
    HIDWORD(UserDataCount[3]) = 1036;
    v6 = SmEtwEnabled(2);
    if ( v6 )
    {
      v7 = UserDataCount[3];
      v8 = (char *)v27 + LODWORD(UserDataCount[3]);
      if ( P != (PVOID)-56LL )
        *v8 = *((_BYTE *)P + 56);
      v9 = v7 + 1;
      v10 = LODWORD(UserDataCount[2]);
      v11 = LODWORD(UserDataCount[2]) + 1;
      v28[v10].Ptr = (ULONGLONG)v8;
      *(_QWORD *)&v28[v10].Size = 1LL;
      v12 = (_DWORD *)((char *)v27 + v9);
      if ( P != (PVOID)-60LL )
        *v12 = *((_DWORD *)P + 15);
      v13 = v11;
      LODWORD(UserDataCount[3]) = v9 + 4;
      LODWORD(UserDataCount[2]) = v11 + 1;
      v28[v13].Ptr = (ULONGLONG)v12;
      *(_QWORD *)&v28[v13].Size = 4LL;
      v14 = *((_QWORD *)P + 5);
      SmKmEtwAppendProductName(UserDataCount, v14);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(PDEVICE_OBJECT *)(v14 + 8));
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)UserDataCount[0];
    }
    SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
    SystemInformation = 0xA00000001LL;
    v18 = &v20;
    LODWORD(v19) = 8;
    v20 = 1LL;
    HIDWORD(v20) = v26[v2 + 1];
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v6 )
      {
        EtwWriteEx(*v6, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount[2], UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength = UserData[3].Size;
          memmove(v27, (const void *)UserData[3].Ptr, ReturnLength);
          v22 = 2;
          v24 = 1;
          *((_WORD *)v27 + ((unsigned __int64)ReturnLength >> 1)) = 0;
          v15 = L"(null)";
          if ( LOWORD(v27[0]) )
            v15 = (const wchar_t *)v27;
          v23 = v15;
          v25 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v6);
        }
      }
    }
  }
  else
  {
LABEL_10:
    SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
  }
  ExFreePoolWithTag(P, 0);
}
