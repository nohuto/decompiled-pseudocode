/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800217D6 (memcmp_0.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r13
  ULONG v11; // eax
  __int64 v12; // r14
  wchar_t *v13; // rcx
  wchar_t *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // r12
  WCHAR *v26; // rbx
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int64 v29; // rdi
  WCHAR *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r15
  int v34; // ebx
  unsigned int v35; // r11d
  __int64 v36; // r10
  __int64 v37; // r9
  unsigned int v38; // ebx
  WCHAR v40; // [rsp+20h] [rbp-E0h]
  __int64 v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v44[8]; // [rsp+210h] [rbp+110h] BYREF
  int v45; // [rsp+250h] [rbp+150h]
  int v46; // [rsp+254h] [rbp+154h]
  unsigned int v47; // [rsp+258h] [rbp+158h]
  unsigned __int64 v48; // [rsp+260h] [rbp+160h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+270h] [rbp+170h] BYREF
  wchar_t String1[232]; // [rsp+310h] [rbp+210h] BYREF
  WCHAR Buf1[48]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset(v44, 0, sizeof(v44));
  v45 = 0;
  v11 = RtlLengthSid(a3);
  memcpy_0(v44, a3, v11);
  v47 = a5;
  v48 = a6;
  v46 = a4;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = *((_QWORD *)this + 25);
  v13 = String1;
  v42 = v12;
  v14 = Destination;
  v15 = 4LL;
  do
  {
    v13 += 64;
    v16 = *(_OWORD *)v14;
    v17 = *((_OWORD *)v14 + 1);
    v14 += 64;
    *((_OWORD *)v13 - 8) = v16;
    v18 = *((_OWORD *)v14 - 6);
    *((_OWORD *)v13 - 7) = v17;
    v19 = *((_OWORD *)v14 - 5);
    *((_OWORD *)v13 - 6) = v18;
    v20 = *((_OWORD *)v14 - 4);
    *((_OWORD *)v13 - 5) = v19;
    v21 = *((_OWORD *)v14 - 3);
    *((_OWORD *)v13 - 4) = v20;
    v22 = *((_OWORD *)v14 - 2);
    *((_OWORD *)v13 - 3) = v21;
    v23 = *((_OWORD *)v14 - 1);
    *((_OWORD *)v13 - 2) = v22;
    *((_OWORD *)v13 - 1) = v23;
    --v15;
  }
  while ( v15 );
  v24 = *(_OWORD *)v14;
  v25 = 0LL;
  v26 = String1;
  v27 = *((_OWORD *)v14 + 1);
  v28 = *((_QWORD *)v14 + 4);
  v29 = 314159LL;
  *(_OWORD *)v13 = v24;
  *((_OWORD *)v13 + 1) = v27;
  *((_QWORD *)v13 + 4) = v28;
  do
  {
    v40 = RtlUpcaseUnicodeChar(*v26++);
    v29 = HIBYTE(v40) + 37 * ((unsigned __int8)v40 + 37 * v29);
  }
  while ( v26 < Buf1 );
  v30 = Buf1;
  v31 = 11LL;
  do
  {
    v32 = *(unsigned __int8 *)v30;
    v30 += 4;
    v29 = *((unsigned __int8 *)v30 - 1)
        + 37
        * (*((unsigned __int8 *)v30 - 2)
         + 37
         * (*((unsigned __int8 *)v30 - 3)
          + 37
          * (*((unsigned __int8 *)v30 - 4)
           + 37
           * (*((unsigned __int8 *)v30 - 5)
            + 37 * (*((unsigned __int8 *)v30 - 6) + 37 * (*((unsigned __int8 *)v30 - 7) + 37 * (v32 + 37 * v29)))))));
    --v31;
  }
  while ( v31 );
  v33 = v12 + 32;
  v34 = -1073741275;
  RtlAcquireSRWLockShared(v12 + 32);
LABEL_8:
  v35 = *(_DWORD *)(v12 + 1188);
  v36 = -1LL << (*(_BYTE *)(v12 + 1188) & 0x1F);
  v37 = v36 & v29;
  if ( v25 )
    goto LABEL_11;
  if ( v35 >= 0x20 )
  {
    v41 = v36 & v29;
    v25 = *(_QWORD *)(v12 + 1192)
        + 8LL
        * ((37
          * (BYTE6(v41)
           + 37
           * (BYTE5(v41)
            + 37
            * (BYTE4(v41)
             + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v37 + 11623883)))))))
          + HIBYTE(v41)) & ((v35 >> 5) - 1));
LABEL_11:
    while ( 1 )
    {
      v25 = *(_QWORD *)v25;
      if ( (v25 & 1) != 0 )
        break;
      if ( v37 == (v36 & *(_QWORD *)(v25 + 8)) )
      {
        if ( *(_DWORD *)(v25 - 992) )
          goto LABEL_8;
        if ( _wcsicmp(String1, (const wchar_t *)(v25 - 984)) )
        {
          v12 = v42;
          goto LABEL_8;
        }
        v12 = v42;
        if ( memcmp_0(Buf1, (const void *)(v25 - 520), 0x58uLL) )
          goto LABEL_8;
        v34 = 0;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)(v25 - 1048));
        v10 = v25 - 1048;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(v33);
  if ( v34 < 0 )
  {
    v38 = v34 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 1524LL) & 2) == 0 && (*(_BYTE *)(v10 + 1132) & 1) == 0 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      *(_DWORD *)(v10 + 1132) |= 1u;
      TpPostWork(*(_QWORD *)(v10 + 1040));
    }
    v38 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v10 )
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
  return v38;
}
