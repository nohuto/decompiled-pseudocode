/*
 * XREFs of ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B470
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000A2B0 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180020A2A (memcmp_0.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::ProcessWorkItem(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  _QWORD **v2; // rbx
  int v3; // r13d
  struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v4; // r12
  _QWORD *v5; // rbx
  void *v6; // rdi
  __int64 v7; // rsi
  int v8; // r14d
  unsigned int v9; // r15d
  int (*v10)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64); // rax
  const wchar_t *v11; // r12
  __int64 v12; // r13
  ULONG v13; // eax
  __int64 v14; // rsi
  wchar_t *v15; // rcx
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // r12
  WCHAR *v28; // rbx
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rdi
  WCHAR *v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r15
  int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r11
  __int64 v41; // r10
  unsigned int v42; // ecx
  char *v43; // rdx
  char *v44; // r8
  __int64 v45; // r9
  void (__fastcall *v46)(_QWORD *, __int64, char *, __int64, char *, char *, unsigned int, int); // rax
  char *v47; // r8
  __int64 v48; // rdx
  char *v49; // [rsp+28h] [rbp-E0h]
  char *v50; // [rsp+30h] [rbp-D8h]
  int v51; // [rsp+40h] [rbp-C8h]
  WCHAR v52; // [rsp+58h] [rbp-B0h]
  int v53; // [rsp+5Ch] [rbp-ACh]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  _QWORD *v57; // [rsp+78h] [rbp-90h]
  _QWORD v58[3]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t Destination[232]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v60[8]; // [rsp+268h] [rbp+160h] BYREF
  int v61; // [rsp+2A8h] [rbp+1A0h]
  unsigned int v62; // [rsp+2ACh] [rbp+1A4h]
  int v63; // [rsp+2B0h] [rbp+1A8h]
  __int64 v64; // [rsp+2B8h] [rbp+1B0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+2C8h] [rbp+1C0h] BYREF
  wchar_t String1[232]; // [rsp+368h] [rbp+260h] BYREF
  WCHAR Buf1[48]; // [rsp+538h] [rbp+430h] BYREF

  v2 = (_QWORD **)v58;
  v58[0] = *((_QWORD *)this + 10);
  v3 = 0;
  v4 = a2;
  v58[1] = *((_QWORD *)this + 11);
  v53 = 0;
  v57 = v58;
  do
  {
    v5 = *v2;
    if ( v5 )
    {
      if ( *(_DWORD *)v4 == 1 )
      {
        v6 = (char *)v4 + 40;
        v7 = *((_QWORD *)v4 + 15);
        v8 = *((_DWORD *)v4 + 28);
        v9 = *((_DWORD *)v4 + 27);
        v10 = *(int (**)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64))(*v5 + 24LL);
        v11 = (const wchar_t *)*((_QWORD *)v4 + 1);
        if ( v10 == ExecutionModel::ResourceManager::MemoryLimitNotification )
        {
          v12 = 0LL;
          memset_0(Destination, 0, 0x228uLL);
          wcscpy_s(Destination, 0xE8uLL, v11);
          memset(v60, 0, sizeof(v60));
          v61 = 0;
          v13 = RtlLengthSid(v6);
          memcpy_0(v60, v6, v13);
          v62 = v9;
          v63 = v8;
          v64 = v7;
          RtlEnterCriticalSection(&RmpGlobalLock);
          v14 = v5[26];
          v15 = String1;
          v56 = v14;
          v16 = Destination;
          v17 = 4LL;
          do
          {
            v15 += 64;
            v18 = *(_OWORD *)v16;
            v19 = *((_OWORD *)v16 + 1);
            v16 += 64;
            *((_OWORD *)v15 - 8) = v18;
            v20 = *((_OWORD *)v16 - 6);
            *((_OWORD *)v15 - 7) = v19;
            v21 = *((_OWORD *)v16 - 5);
            *((_OWORD *)v15 - 6) = v20;
            v22 = *((_OWORD *)v16 - 4);
            *((_OWORD *)v15 - 5) = v21;
            v23 = *((_OWORD *)v16 - 3);
            *((_OWORD *)v15 - 4) = v22;
            v24 = *((_OWORD *)v16 - 2);
            *((_OWORD *)v15 - 3) = v23;
            v25 = *((_OWORD *)v16 - 1);
            *((_OWORD *)v15 - 2) = v24;
            *((_OWORD *)v15 - 1) = v25;
            --v17;
          }
          while ( v17 );
          v26 = *(_OWORD *)v16;
          v27 = 0LL;
          v28 = String1;
          v29 = *((_OWORD *)v16 + 1);
          v30 = *((_QWORD *)v16 + 4);
          v31 = 314159LL;
          *(_OWORD *)v15 = v26;
          *((_OWORD *)v15 + 1) = v29;
          *((_QWORD *)v15 + 4) = v30;
          do
          {
            v52 = RtlUpcaseUnicodeChar(*v28++);
            v31 = HIBYTE(v52) + 37 * ((unsigned __int8)v52 + 37 * v31);
          }
          while ( v28 < Buf1 );
          v32 = Buf1;
          v33 = 11LL;
          do
          {
            v34 = *(unsigned __int8 *)v32;
            v32 += 4;
            v31 = *((unsigned __int8 *)v32 - 1)
                + 37
                * (*((unsigned __int8 *)v32 - 2)
                 + 37
                 * (*((unsigned __int8 *)v32 - 3)
                  + 37
                  * (*((unsigned __int8 *)v32 - 4)
                   + 37
                   * (*((unsigned __int8 *)v32 - 5)
                    + 37
                    * (*((unsigned __int8 *)v32 - 6) + 37 * (*((unsigned __int8 *)v32 - 7) + 37 * (v34 + 37 * v31)))))));
            --v33;
          }
          while ( v33 );
          v35 = v14 + 32;
          v36 = -1073741275;
          RtlAcquireSRWLockShared(v14 + 32);
LABEL_12:
          v39 = *(unsigned int *)(v14 + 3004);
          v40 = -1LL << (*(_BYTE *)(v14 + 3004) & 0x1F);
          v41 = v40 & v31;
          v54 = v40 & v31;
          if ( v27 )
            goto LABEL_15;
          v39 = (unsigned int)v39 >> 5;
          if ( (_DWORD)v39 )
          {
            v37 = BYTE6(v54)
                + 37
                * (BYTE5(v54)
                 + 37
                 * (BYTE4(v54)
                  + 37 * (BYTE3(v54) + 37 * (BYTE2(v54) + 37 * (BYTE1(v54) + 37 * ((unsigned __int8)v41 + 11623883LL))))));
            v38 = 37 * v37;
            v27 = *(_QWORD *)(v14 + 3008) + 8LL * ((37 * (_DWORD)v37 + HIBYTE(v54)) & (unsigned int)(v39 - 1));
LABEL_15:
            while ( 1 )
            {
              v27 = *(_QWORD *)v27;
              if ( (v27 & 1) != 0 )
                break;
              if ( v41 == (v40 & *(_QWORD *)(v27 + 8)) )
              {
                if ( *(_DWORD *)(v27 - 960) )
                  goto LABEL_12;
                if ( _wcsicmp(String1, (const wchar_t *)(v27 - 952)) )
                {
                  v14 = v56;
                  goto LABEL_12;
                }
                v14 = v56;
                if ( memcmp_0(Buf1, (const void *)(v27 - 488), 0x58uLL) )
                  goto LABEL_12;
                v36 = 0;
                RmpObjectAddRef(v27 - 1008);
                v12 = v27 - 1008;
                break;
              }
            }
          }
          RtlReleaseSRWLockShared(v35, v37, v38, v39);
          if ( v36 >= 0 && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 3340LL) & 2) == 0 && (*(_BYTE *)(v12 + 1124) & 1) == 0 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)(v12 + 16)) < 1 )
            {
              memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
              pExceptionRecord.ExceptionCode = -1073741675;
              pExceptionRecord.ExceptionFlags = 1;
              RaiseFailFastException(&pExceptionRecord, 0LL, 0);
            }
            *(_DWORD *)(v12 + 1124) |= 1u;
            TpPostWork(*(_QWORD *)(v12 + 1000));
          }
          RtlLeaveCriticalSection(&RmpGlobalLock);
          if ( v12 )
            RmpObjectRelease((volatile signed __int32 *)v12);
          v3 = v53;
        }
        else
        {
          ((void (__fastcall *)(_QWORD *, const wchar_t *, void *, _QWORD, int, __int64))v10)(v5, v11, v6, v9, v8, v7);
        }
        v4 = a2;
      }
      else if ( *(_DWORD *)v4 == 2 )
      {
        v42 = *((_DWORD *)v4 + 32);
        if ( v42 > 1 )
        {
          v43 = (char *)*((_QWORD *)v4 + 14);
          v44 = (char *)*((_QWORD *)v4 + 15);
        }
        else
        {
          v43 = (char *)v4 + 112;
          v44 = (char *)v4 + 120;
        }
        v45 = *((unsigned int *)v4 + 27);
        v46 = *(void (__fastcall **)(_QWORD *, __int64, char *, __int64, char *, char *, unsigned int, int))(*v5 + 32LL);
        v51 = *((_DWORD *)v4 + 33);
        v50 = v44;
        v47 = (char *)v4 + 40;
        v49 = v43;
        v48 = *((_QWORD *)v4 + 1);
        if ( (char *)v46 == (char *)ExecutionModel::ResourceManager::HostStateNotification )
          ExecutionModel::ResourceManager::HostStateNotification(v5, v48, v47, v45, v49, v50, v42, v51);
        else
          v46(v5, v48, v47, v45, v49, v50, v42, v51);
      }
    }
    ++v3;
    v2 = (_QWORD **)(v57 + 1);
    v53 = v3;
    ++v57;
  }
  while ( (unsigned __int64)v3 < 2 );
}
