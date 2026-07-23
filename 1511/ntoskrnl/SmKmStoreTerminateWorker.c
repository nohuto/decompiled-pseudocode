/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140208928
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x140153840 (ZwSetSystemInformation.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x140208358 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x1402084C8 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x14020AA08 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(_DWORD *P)
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
  _DWORD *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 UserDataCount[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v21[4]; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  _DWORD v25[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v26[284]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v28[80]; // [rsp+580h] [rbp+480h] BYREF

  v27.Ptr = 0LL;
  *(_QWORD *)&v27.Size = 0LL;
  memset(v28, 0, sizeof(v28));
  memset(v25, 0, 0x44uLL);
  v19 = 68LL;
  v18 = v25;
  SystemInformation = 0x800000001LL;
  v25[0] = v25[0] & 0xFFFFFF00 | 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v18 = v26,
        LODWORD(v19) = 1128,
        memset(v26, 0, 0x468uLL),
        v2 = 0,
        v26[0] = v26[0] & 0xFFFFFE00 | 0x103,
        (v25[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v26[1] = v25[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v3 = 0;
        if ( v26[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= (unsigned int)BYTE1(v25[0]) )
        goto LABEL_10;
    }
    v4 = v26[24];
    while ( !_bittest(&v4, v3) != P[13] || v26[v3 + 8] != P[12] )
    {
      if ( ++v3 >= v26[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserData = &v27;
    UserDataCount[1] = (__int64)v26;
    UserDataCount[0] = (__int64)&v27;
    HIDWORD(UserDataCount[3]) = 1036;
    v6 = SmEtwEnabled(2);
    if ( v6 )
    {
      v7 = UserDataCount[3];
      v8 = (char *)v26 + LODWORD(UserDataCount[3]);
      if ( P != (_DWORD *)-56LL )
        *v8 = *((_BYTE *)P + 56);
      v9 = v7 + 1;
      v10 = 2LL * LODWORD(UserDataCount[2]);
      v11 = LODWORD(UserDataCount[2]) + 1;
      *(&v27.Ptr + v10) = (ULONGLONG)v8;
      *((_QWORD *)&v27.Size + v10) = 1LL;
      v12 = (_DWORD *)((char *)v26 + v9);
      if ( P != (_DWORD *)-60LL )
        *v12 = P[15];
      v13 = 2LL * v11;
      LODWORD(UserDataCount[3]) = v9 + 4;
      LODWORD(UserDataCount[2]) = v11 + 1;
      *(&v27.Ptr + v13) = (ULONGLONG)v12;
      *((_QWORD *)&v27.Size + v13) = 4LL;
      v14 = *((_QWORD *)P + 5);
      SmKmEtwAppendProductName(UserDataCount, v14);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(PDEVICE_OBJECT *)(v14 + 8));
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)UserDataCount[0];
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)P + 4) + 8LL + 176LL * (P[12] & 0x1F)));
    SystemInformation = 0xA00000001LL;
    v18 = v21;
    LODWORD(v19) = 8;
    v21[0] = 1;
    v21[1] = v25[v2 + 1];
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v6 )
      {
        EtwWriteEx(*v6, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount[2], UserData);
        if ( !P[14] )
        {
          ReturnLength = UserData[3].Size;
          memmove(v26, (const void *)UserData[3].Ptr, ReturnLength);
          v21[2] = 2;
          v23 = 1;
          *((_WORD *)v26 + ((unsigned __int64)ReturnLength >> 1)) = 0;
          v15 = L"(null)";
          if ( LOWORD(v26[0]) )
            v15 = (const wchar_t *)v26;
          v22 = v15;
          v24 = P[15];
          SmKmSqmAddToStream(*v6);
        }
      }
    }
  }
  else
  {
LABEL_10:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (P[12] & 0x1F) + *((_QWORD *)P + 4) + 8LL));
  }
  ExFreePoolWithTag(P, 0);
}
