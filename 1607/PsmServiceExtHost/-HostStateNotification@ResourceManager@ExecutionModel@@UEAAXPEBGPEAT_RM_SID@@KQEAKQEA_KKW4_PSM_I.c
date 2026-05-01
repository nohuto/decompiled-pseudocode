/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40
 * Callers:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B470 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostNewProcessNotification @ 0x180003578 (RmpActivityHostNewProcessNotification.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostFindByHostId @ 0x180018014 (RmpActivityHostFindByHostId.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x180018374 (RmpEnforcementArmWorkerForActivityHost.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180018C9C (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x1800205BC (IsRmRpsHostEmptyNotificationPresent.c)
 *     RmpGameModeReapplyCurrentResourceAllotment @ 0x180032144 (RmpGameModeReapplyCurrentResourceAllotment.c)
 *     RmpSystemTerminateModernHost @ 0x180038014 (RmpSystemTerminateModernHost.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        const struct _TlgProvider_t *a1,
        WCHAR *a2,
        void *a3,
        unsigned int a4,
        int *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  void *v10; // r10
  __int64 *v11; // rsi
  const struct _TlgProvider_t *v13; // r15
  int v14; // eax
  __int64 *v15; // r12
  _OWORD *v16; // rdx
  wchar_t *v17; // rax
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int64 v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // r15
  int v33; // r12d
  __int64 v34; // rdi
  const SID *v35; // r10
  TraceLoggingHProvider v36; // rcx
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  __int64 *v41; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-B0h] BYREF
  const struct _TlgProvider_t *v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  wchar_t Destination[280]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[560]; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t v48[280]; // [rsp+4D0h] [rbp+3D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+700h] [rbp+600h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+720h] [rbp+620h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+730h] [rbp+630h] BYREF
  int *v52; // [rsp+740h] [rbp+640h]
  int v53; // [rsp+748h] [rbp+648h]
  int v54; // [rsp+74Ch] [rbp+64Ch]
  __int64 **v55; // [rsp+750h] [rbp+650h]
  int v56; // [rsp+758h] [rbp+658h]
  int v57; // [rsp+75Ch] [rbp+65Ch]
  __int64 *v58; // [rsp+760h] [rbp+660h]
  int v59; // [rsp+768h] [rbp+668h]
  int v60; // [rsp+76Ch] [rbp+66Ch]

  v8 = a4;
  v10 = a3;
  v11 = a6;
  v13 = a1;
  v44 = a1;
  if ( a8 <= 9 )
  {
    v14 = 681;
    if ( _bittest(&v14, a8) )
    {
      if ( a7 )
      {
        v15 = a6;
        v41 = a6;
        v45 = a7;
        while ( a8 )
        {
          if ( a8 != 7 )
          {
            if ( a8 == 5 || a8 == 9 )
            {
              RtlEnterCriticalSection(&RmpGlobalLock);
              if ( (int)RmpActivityHostFindByHostId(*((_QWORD *)v13 + 26), *v11, &P) >= 0 )
              {
                v31 = (volatile signed __int32 *)P;
                if ( a8 == 5 )
                {
                  RmpActivityHostNewProcessNotification((struct _RM_ACTIVITY_HOST *)P);
                }
                else if ( *(PVOID *)(*((_QWORD *)P + 5) + 2944LL) == P )
                {
                  RmpGameModeReapplyCurrentResourceAllotment((struct _RM_GAME_MODE_CONTEXT *)(*((_QWORD *)P + 5) + 2920LL));
                }
                RmpObjectRelease(v31);
              }
              RtlLeaveCriticalSection(&RmpGlobalLock);
            }
            else
            {
              if ( a8 != 3 || *(char *)(*((_QWORD *)v13 + 26) + 1840LL) >= 0 )
                goto LABEL_21;
              if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
              {
                TlgCreateWsz(&pDesc, a2);
                TlgCreateSid(&v51, v35);
                v54 = 0;
                v57 = 0;
                v60 = 0;
                v52 = (int *)&v43;
                LODWORD(v41) = *a5;
                v55 = &v41;
                v43 = v8;
                v53 = 4;
                v56 = 4;
                v58 = v15;
                v59 = 8;
                TlgWrite(v36, &unk_18003FB76, v37, v38, 7u, &pData);
              }
              RmpSystemTerminateModernHost(a2);
            }
            goto LABEL_20;
          }
          if ( *a5 == 2 )
          {
            RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, v10, 2, *v11);
            v16 = v47;
            v17 = Destination;
            v18 = 4LL;
            do
            {
              v19 = *((_OWORD *)v17 + 1);
              *v16 = *(_OWORD *)v17;
              v20 = *((_OWORD *)v17 + 2);
              v16[1] = v19;
              v21 = *((_OWORD *)v17 + 3);
              v16[2] = v20;
              v22 = *((_OWORD *)v17 + 4);
              v16[3] = v21;
              v23 = *((_OWORD *)v17 + 5);
              v16[4] = v22;
              v24 = *((_OWORD *)v17 + 6);
              v16[5] = v23;
              v25 = *((_OWORD *)v17 + 7);
              v17 += 64;
              v16[6] = v24;
              v16 += 8;
              *(v16 - 1) = v25;
              --v18;
            }
            while ( v18 );
            v26 = *(_OWORD *)v17;
            v27 = *((_QWORD *)v13 + 26);
            v28 = *((_OWORD *)v17 + 1);
            v29 = *((_QWORD *)v17 + 4);
            *v16 = v26;
            v16[1] = v28;
            *((_QWORD *)v16 + 4) = v29;
            if ( (int)RmpActivityHostFindByTypeAndIdentifier(v27, 0LL, v47, &P) >= 0 )
            {
              RtlEnterCriticalSection(&RmpGlobalLock);
              v30 = (volatile signed __int32 *)P;
              if ( *((int *)P + 5) >= 0 )
                RmpEnforcementArmWorkerForActivityHost(P);
              RtlLeaveCriticalSection(&RmpGlobalLock);
              RmpObjectRelease(v30);
            }
LABEL_20:
            v10 = a3;
          }
LABEL_21:
          v8 = a4;
          ++v15;
          ++v11;
          v41 = v15;
          ++a5;
          if ( !--v45 )
            return;
        }
        RmpPsmAppInstanceIdInitializeFromCStr(v48, a2, v10, *a5, *v11);
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (const struct _TlgProvider_t *)((char *)v13 - 16),
          (struct _RM_PSM_HOST_INFO *)v48);
        v32 = *v11;
        v33 = *a5;
        v34 = *((_QWORD *)v44 + 26);
        if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent() && (*(_BYTE *)(v34 + 1936) & 1) != 0 )
          RmRpsHostEmptyNotification(*(_QWORD *)(v34 + 1928), a2, a3, a4, v33, v32);
        v13 = v44;
        v15 = v41;
        goto LABEL_20;
      }
    }
  }
}
