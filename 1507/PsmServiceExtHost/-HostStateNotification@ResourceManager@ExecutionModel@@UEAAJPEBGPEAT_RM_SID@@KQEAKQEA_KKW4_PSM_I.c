/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0
 * Callers:
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18000B210 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800050C8 (RmpEnforcementArmWorkerForActivityHost.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x180038D10 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        const struct _TlgProvider_t *a1,
        WCHAR *a2,
        SID *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  SID *v10; // r10
  __int64 *v11; // r14
  int v13; // eax
  __int64 *v14; // r13
  __int64 v15; // rdi
  WCHAR *v17; // rcx
  wchar_t *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  volatile signed __int32 *v30; // rdi
  const SID *v31; // r10
  TraceLoggingHProvider v32; // rcx
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  const struct _TlgProvider_t *v35; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Destination[280]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR v41[280]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4E0h] [rbp+3E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+4F0h] [rbp+3F0h] BYREF
  unsigned int *v45; // [rsp+500h] [rbp+400h]
  int v46; // [rsp+508h] [rbp+408h]
  int v47; // [rsp+50Ch] [rbp+40Ch]
  __int64 *v48; // [rsp+510h] [rbp+410h]
  int v49; // [rsp+518h] [rbp+418h]
  int v50; // [rsp+51Ch] [rbp+41Ch]
  __int64 *v51; // [rsp+520h] [rbp+420h]
  int v52; // [rsp+528h] [rbp+428h]
  int v53; // [rsp+52Ch] [rbp+42Ch]

  v10 = a3;
  v11 = a6;
  v35 = a1;
  if ( a8 <= 7 )
  {
    v13 = 137;
    if ( _bittest(&v13, a8) )
    {
      if ( a7 )
      {
        v14 = a6;
        v37 = a7;
        v15 = a7;
        do
        {
          if ( a8 )
          {
            if ( a8 == 3 )
            {
              if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 1uLL) )
              {
                TlgCreateWsz(&pDesc, a2);
                TlgCreateSid(&v44, v31);
                v47 = 0;
                v50 = 0;
                v53 = 0;
                v45 = &v38;
                LODWORD(v37) = *a5;
                v48 = &v37;
                v38 = a4;
                v46 = 4;
                v49 = 4;
                v51 = v14;
                v52 = 8;
                TlgWrite(v32, &unk_18005ABC5, v33, v34, 7u, &pData);
              }
              ExecutionModel::ResourceManager::TerminateModernHost(a2, a4, *a5, *v11);
            }
            else
            {
              if ( a8 != 7 || *a5 != 2 )
                goto LABEL_8;
              RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, v10, a4, 2, *v11);
              v17 = v41;
              v18 = Destination;
              v19 = 4LL;
              do
              {
                v20 = *((_OWORD *)v18 + 1);
                *(_OWORD *)v17 = *(_OWORD *)v18;
                v21 = *((_OWORD *)v18 + 2);
                *((_OWORD *)v17 + 1) = v20;
                v22 = *((_OWORD *)v18 + 3);
                *((_OWORD *)v17 + 2) = v21;
                v23 = *((_OWORD *)v18 + 4);
                *((_OWORD *)v17 + 3) = v22;
                v24 = *((_OWORD *)v18 + 5);
                *((_OWORD *)v17 + 4) = v23;
                v25 = *((_OWORD *)v18 + 6);
                *((_OWORD *)v17 + 5) = v24;
                v26 = *((_OWORD *)v18 + 7);
                v18 += 64;
                *((_OWORD *)v17 + 6) = v25;
                v17 += 64;
                *((_OWORD *)v17 - 1) = v26;
                --v19;
              }
              while ( v19 );
              v27 = *(_OWORD *)v18;
              v28 = *((_OWORD *)v18 + 1);
              v29 = *((_QWORD *)v18 + 4);
              *(_OWORD *)v17 = v27;
              *((_OWORD *)v17 + 1) = v28;
              *((_QWORD *)v17 + 4) = v29;
              if ( (int)RmpActivityHostFindByTypeAndIdentifier(0, v41, (volatile signed __int32 **)&P) >= 0 )
              {
                RtlEnterCriticalSection(&RmpGlobalLock);
                v30 = (volatile signed __int32 *)P;
                if ( *((int *)P + 5) >= 0 )
                  RmpEnforcementArmWorkerForActivityHost((__int64)P);
                RtlLeaveCriticalSection(&RmpGlobalLock);
                RmpObjectRelease(v30);
                v15 = v37;
              }
            }
          }
          else
          {
            ExecutionModel::ResourceManager::OnApplicationTerminated(
              (const struct _TlgProvider_t *)((char *)a1 - 24),
              a2,
              v10,
              a4,
              *a5,
              *v11);
          }
          a1 = v35;
          v10 = a3;
LABEL_8:
          ++v14;
          ++v11;
          ++a5;
          v37 = --v15;
        }
        while ( v15 );
      }
    }
  }
  return 0LL;
}
