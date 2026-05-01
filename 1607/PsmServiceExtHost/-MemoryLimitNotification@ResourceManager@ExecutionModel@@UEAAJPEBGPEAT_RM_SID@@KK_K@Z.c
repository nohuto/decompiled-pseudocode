/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000F040
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180020A2A (memcmp_0.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
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
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r11
  __int64 v39; // r10
  unsigned int v40; // ebx
  WCHAR v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v46[8]; // [rsp+210h] [rbp+110h] BYREF
  int v47; // [rsp+250h] [rbp+150h]
  int v48; // [rsp+254h] [rbp+154h]
  unsigned int v49; // [rsp+258h] [rbp+158h]
  unsigned __int64 v50; // [rsp+260h] [rbp+160h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+270h] [rbp+170h] BYREF
  wchar_t String1[232]; // [rsp+310h] [rbp+210h] BYREF
  WCHAR Buf1[48]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset(v46, 0, sizeof(v46));
  v47 = 0;
  v11 = RtlLengthSid(a3);
  memcpy_0(v46, a3, v11);
  v49 = a5;
  v50 = a6;
  v48 = a4;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = *((_QWORD *)this + 26);
  v13 = String1;
  v44 = v12;
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
    v42 = RtlUpcaseUnicodeChar(*v26++);
    v29 = HIBYTE(v42) + 37 * ((unsigned __int8)v42 + 37 * v29);
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
  v37 = *(unsigned int *)(v12 + 3004);
  v38 = -1LL << (*(_BYTE *)(v12 + 3004) & 0x1F);
  v39 = v38 & v29;
  v43 = v38 & v29;
  if ( v25 )
    goto LABEL_11;
  v37 = (unsigned int)v37 >> 5;
  if ( (_DWORD)v37 )
  {
    v35 = BYTE6(v43)
        + 37
        * (BYTE5(v43)
         + 37
         * (BYTE4(v43)
          + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v39 + 11623883LL))))));
    v36 = 37 * v35;
    v25 = *(_QWORD *)(v12 + 3008) + 8LL * ((37 * (_DWORD)v35 + HIBYTE(v43)) & (unsigned int)(v37 - 1));
LABEL_11:
    while ( 1 )
    {
      v25 = *(_QWORD *)v25;
      if ( (v25 & 1) != 0 )
        break;
      if ( v39 == (v38 & *(_QWORD *)(v25 + 8)) )
      {
        if ( *(_DWORD *)(v25 - 960) )
          goto LABEL_8;
        if ( _wcsicmp(String1, (const wchar_t *)(v25 - 952)) )
        {
          v12 = v44;
          goto LABEL_8;
        }
        v12 = v44;
        if ( memcmp_0(Buf1, (const void *)(v25 - 488), 0x58uLL) )
          goto LABEL_8;
        v34 = 0;
        RmpObjectAddRef(v25 - 1008);
        v10 = v25 - 1008;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(v33, v35, v36, v37);
  if ( v34 < 0 )
  {
    v40 = v34 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 3340LL) & 2) == 0 && (*(_BYTE *)(v10 + 1124) & 1) == 0 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      *(_DWORD *)(v10 + 1124) |= 1u;
      TpPostWork(*(_QWORD *)(v10 + 1000));
    }
    v40 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v10 )
    RmpObjectRelease((volatile signed __int32 *)v10);
  return v40;
}
