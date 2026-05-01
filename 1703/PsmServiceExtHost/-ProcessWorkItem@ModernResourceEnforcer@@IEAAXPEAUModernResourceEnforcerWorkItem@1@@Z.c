/*
 * XREFs of ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180009AE0
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008D60 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B920 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800217D6 (memcmp_0.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::ProcessWorkItem(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  const wchar_t *v5; // r12
  int (*v6)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64); // rax
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // r13
  ULONG v10; // eax
  __int64 v11; // r14
  wchar_t *v12; // rcx
  wchar_t *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // r12
  WCHAR *v25; // rbx
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rdi
  WCHAR *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r15
  int v33; // esi
  unsigned int v34; // r11d
  __int64 v35; // r10
  __int64 v36; // r9
  unsigned int v37; // ecx
  char *v38; // r8
  char *v39; // r9
  int v40; // r10d
  char *v41; // rdi
  unsigned int v42; // r11d
  __int64 v43; // rdx
  void (__fastcall *v44)(_QWORD *, __int64, char *, _QWORD, char *, char *, unsigned int, int); // rax
  WCHAR v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A8h]
  __int64 v47; // [rsp+68h] [rbp-A0h]
  wchar_t Destination[232]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v49[8]; // [rsp+248h] [rbp+140h] BYREF
  int v50; // [rsp+288h] [rbp+180h]
  unsigned int v51; // [rsp+28Ch] [rbp+184h]
  int v52; // [rsp+290h] [rbp+188h]
  __int64 v53; // [rsp+298h] [rbp+190h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+2A8h] [rbp+1A0h] BYREF
  wchar_t String1[232]; // [rsp+348h] [rbp+240h] BYREF
  WCHAR Buf1[48]; // [rsp+518h] [rbp+410h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v3 = *((_QWORD *)a2 + 15);
      v4 = (char *)a2 + 40;
      v5 = (const wchar_t *)*((_QWORD *)a2 + 1);
      v6 = *(int (**)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64))(*v2 + 24LL);
      v7 = *((_DWORD *)a2 + 28);
      v8 = *((_DWORD *)a2 + 27);
      if ( v6 == ExecutionModel::ResourceManager::MemoryLimitNotification )
      {
        v9 = 0LL;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, v5);
        memset(v49, 0, sizeof(v49));
        v50 = 0;
        v10 = RtlLengthSid(v4);
        memcpy_0(v49, v4, v10);
        v51 = v8;
        v52 = v7;
        v53 = v3;
        RtlEnterCriticalSection(&RmpGlobalLock);
        v11 = v2[25];
        v12 = String1;
        v47 = v11;
        v13 = Destination;
        v14 = 4LL;
        do
        {
          v12 += 64;
          v15 = *(_OWORD *)v13;
          v16 = *((_OWORD *)v13 + 1);
          v13 += 64;
          *((_OWORD *)v12 - 8) = v15;
          v17 = *((_OWORD *)v13 - 6);
          *((_OWORD *)v12 - 7) = v16;
          v18 = *((_OWORD *)v13 - 5);
          *((_OWORD *)v12 - 6) = v17;
          v19 = *((_OWORD *)v13 - 4);
          *((_OWORD *)v12 - 5) = v18;
          v20 = *((_OWORD *)v13 - 3);
          *((_OWORD *)v12 - 4) = v19;
          v21 = *((_OWORD *)v13 - 2);
          *((_OWORD *)v12 - 3) = v20;
          v22 = *((_OWORD *)v13 - 1);
          *((_OWORD *)v12 - 2) = v21;
          *((_OWORD *)v12 - 1) = v22;
          --v14;
        }
        while ( v14 );
        v23 = *(_OWORD *)v13;
        v24 = 0LL;
        v25 = String1;
        v26 = *((_OWORD *)v13 + 1);
        v27 = *((_QWORD *)v13 + 4);
        v28 = 314159LL;
        *(_OWORD *)v12 = v23;
        *((_OWORD *)v12 + 1) = v26;
        *((_QWORD *)v12 + 4) = v27;
        do
        {
          v45 = RtlUpcaseUnicodeChar(*v25++);
          v28 = HIBYTE(v45) + 37 * ((unsigned __int8)v45 + 37 * v28);
        }
        while ( v25 < Buf1 );
        v29 = Buf1;
        v30 = 11LL;
        do
        {
          v31 = *(unsigned __int8 *)v29;
          v29 += 4;
          v28 = *((unsigned __int8 *)v29 - 1)
              + 37
              * (*((unsigned __int8 *)v29 - 2)
               + 37
               * (*((unsigned __int8 *)v29 - 3)
                + 37
                * (*((unsigned __int8 *)v29 - 4)
                 + 37
                 * (*((unsigned __int8 *)v29 - 5)
                  + 37 * (*((unsigned __int8 *)v29 - 6) + 37 * (*((unsigned __int8 *)v29 - 7) + 37 * (v31 + 37 * v28)))))));
          --v30;
        }
        while ( v30 );
        v32 = v11 + 32;
        v33 = -1073741275;
        RtlAcquireSRWLockShared(v11 + 32);
LABEL_11:
        v34 = *(_DWORD *)(v11 + 1188);
        v35 = -1LL << (*(_BYTE *)(v11 + 1188) & 0x1F);
        v36 = v35 & v28;
        if ( v24 )
          goto LABEL_14;
        if ( v34 >= 0x20 )
        {
          v46 = v35 & v28;
          v24 = *(_QWORD *)(v11 + 1192)
              + 8LL
              * ((37
                * (BYTE6(v46)
                 + 37
                 * (BYTE5(v46)
                  + 37
                  * (BYTE4(v46)
                   + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v36 + 11623883)))))))
                + HIBYTE(v46)) & ((v34 >> 5) - 1));
LABEL_14:
          while ( 1 )
          {
            v24 = *(_QWORD *)v24;
            if ( (v24 & 1) != 0 )
              break;
            if ( v36 == (v35 & *(_QWORD *)(v24 + 8)) )
            {
              if ( *(_DWORD *)(v24 - 992) )
                goto LABEL_11;
              if ( _wcsicmp(String1, (const wchar_t *)(v24 - 984)) )
              {
                v11 = v47;
                goto LABEL_11;
              }
              v11 = v47;
              if ( memcmp_0(Buf1, (const void *)(v24 - 520), 0x58uLL) )
                goto LABEL_11;
              v33 = 0;
              RmpObjectAddRef((struct _RM_OBJECT_HEADER *)(v24 - 1048));
              v9 = v24 - 1048;
              break;
            }
          }
        }
        RtlReleaseSRWLockShared(v32);
        if ( v33 >= 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 1524LL) & 2) == 0 && (*(_BYTE *)(v9 + 1132) & 1) == 0 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 16)) < 1 )
          {
            memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
            pExceptionRecord.ExceptionCode = -1073741675;
            pExceptionRecord.ExceptionFlags = 1;
            RaiseFailFastException(&pExceptionRecord, 0LL, 0);
          }
          *(_DWORD *)(v9 + 1132) |= 1u;
          TpPostWork(*(_QWORD *)(v9 + 1040));
        }
        RtlLeaveCriticalSection(&RmpGlobalLock);
        if ( v9 )
          RmpObjectRelease((struct _RM_OBJECT_HEADER *)v9);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, const wchar_t *, char *, _QWORD, int, __int64))v6)(
          v2,
          v5,
          (char *)a2 + 40,
          v8,
          v7,
          v3);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v37 = *((_DWORD *)a2 + 32);
      if ( v37 > 1 )
      {
        v38 = (char *)*((_QWORD *)a2 + 14);
        v39 = (char *)*((_QWORD *)a2 + 15);
      }
      else
      {
        v38 = (char *)a2 + 112;
        v39 = (char *)a2 + 120;
      }
      v40 = *((_DWORD *)a2 + 33);
      v41 = (char *)a2 + 40;
      v42 = *((_DWORD *)a2 + 27);
      v43 = *((_QWORD *)a2 + 1);
      v44 = *(void (__fastcall **)(_QWORD *, __int64, char *, _QWORD, char *, char *, unsigned int, int))(*v2 + 32LL);
      if ( (char *)v44 == (char *)ExecutionModel::ResourceManager::HostStateNotification )
        ExecutionModel::ResourceManager::HostStateNotification(v2, v43, v41, v42, v38, v39, v37, v40);
      else
        v44(v2, v43, v41, v42, v38, v39, v37, v40);
    }
  }
}
