/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140257BBC
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1401821B0 (ZwSetSystemInformation.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1402575EC (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x14025775C (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x140259F6C (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(_DWORD *P)
{
  int v2; // r14d
  unsigned int v3; // edx
  int v4; // r10d
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  int v7; // ecx
  _BYTE *v8; // r8
  REGHANDLE *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edx
  _DWORD *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rdx
  unsigned __int64 v17; // rtt
  PEVENT_DATA_DESCRIPTOR v18; // rbx
  const wchar_t *v19; // rax
  REGHANDLE v20; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  PEVENT_DATA_DESCRIPTOR UserDataCount[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v26[6]; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  _DWORD v30[20]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v31[284]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v32; // [rsp+570h] [rbp+470h] BYREF
  _QWORD v33[11]; // [rsp+578h] [rbp+478h] BYREF

  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v30, 0, 0x44uLL);
  SystemInformation = 0x800000001LL;
  v23 = v30;
  v24 = 68LL;
  v30[0] = v30[0] & 0xFFFFFF00 | 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v23 = v31,
        LODWORD(v24) = 1128,
        memset(v31, 0, 0x468uLL),
        v2 = 0,
        v31[0] = v31[0] & 0xFFFFFE00 | 0x103,
        (v30[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v31[1] = v30[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v3 = 0;
        if ( v31[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= (unsigned int)BYTE1(v30[0]) )
        goto LABEL_10;
    }
    v4 = v31[24];
    while ( !_bittest(&v4, v3) != P[13] || v31[v3 + 8] != P[12] )
    {
      if ( ++v3 >= v31[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserDataCount[0] = (PEVENT_DATA_DESCRIPTOR)&v32;
    UserDataCount[1] = (PEVENT_DATA_DESCRIPTOR)v31;
    HIDWORD(UserDataCount[3]) = 1036;
    if ( (dword_140353094 & 0x40) != 0 )
    {
      v7 = (int)UserDataCount[3];
      v8 = (char *)v31 + LODWORD(UserDataCount[3]);
      v9 = &qword_140353088;
      if ( P != (_DWORD *)-56LL )
        *v8 = *((_BYTE *)P + 56);
      v10 = v7 + 1;
      v11 = 2LL * LODWORD(UserDataCount[2]);
      v12 = LODWORD(UserDataCount[2]) + 1;
      v33[v11 - 1] = v8;
      v33[v11] = 1LL;
      v13 = (_DWORD *)((char *)v31 + v10);
      if ( P != (_DWORD *)-60LL )
        *v13 = P[15];
      v14 = 2LL * v12;
      LODWORD(UserDataCount[3]) = v10 + 4;
      LODWORD(UserDataCount[2]) = v12 + 1;
      v33[v14 - 1] = v13;
      v33[v14] = 4LL;
      v15 = *((_QWORD *)P + 5);
      SmKmEtwAppendProductName((__int64 *)UserDataCount, v15);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(PDEVICE_OBJECT *)(v15 + 8));
    }
    else
    {
      v9 = 0LL;
    }
    v16 = (struct _EX_RUNDOWN_REF *)(*((_QWORD *)P + 4) + 176LL * (P[12] & 0x1F));
    _m_prefetchw(&v16[1]);
    v17 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v17 - 2, v17) )
      ExfReleaseRundownProtection(v16 + 1);
    SystemInformation = 0xA00000001LL;
    v23 = v26;
    LODWORD(v24) = 8;
    v26[0] = 1;
    v26[1] = v30[v2 + 1];
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v9 )
      {
        v18 = UserDataCount[0];
        EtwWriteEx(*v9, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, (ULONG)UserDataCount[2], UserDataCount[0]);
        if ( !P[14] )
        {
          ReturnLength = v18[3].Size;
          memmove(v31, (const void *)v18[3].Ptr, ReturnLength);
          v26[4] = 2;
          v28 = 1;
          *((_WORD *)v31 + ((unsigned __int64)ReturnLength >> 1)) = 0;
          v19 = L"(null)";
          if ( LOWORD(v31[0]) )
            v19 = (const wchar_t *)v31;
          v20 = *v9;
          v27 = v19;
          v29 = P[15];
          SmKmSqmAddToStream(v20);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v5 = (struct _EX_RUNDOWN_REF *)(*((_QWORD *)P + 4) + 8LL + 176LL * (P[12] & 0x1F));
    _m_prefetchw(v5);
    v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 - 2, v6) )
      ExfReleaseRundownProtection(v5);
  }
  ExFreePoolWithTag(P, 0);
}
