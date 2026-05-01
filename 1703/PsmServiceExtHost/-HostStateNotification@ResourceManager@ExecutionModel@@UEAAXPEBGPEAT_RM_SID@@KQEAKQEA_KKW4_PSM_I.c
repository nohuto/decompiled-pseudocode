/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B920
 * Callers:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180009AE0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 * Callees:
 *     ?RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004944 (-RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000D0B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180015680 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BA78 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180021414 (IsRmRpsHostEmptyNotificationPresent.c)
 *     ?RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x1800380F0 (-RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        const struct _TlgProvider_t *a1,
        wchar_t *a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // ebx
  void *v10; // r10
  unsigned __int64 *v11; // rsi
  const struct _TlgProvider_t *v13; // r15
  int v14; // eax
  unsigned __int64 *v15; // r12
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
  struct _RM_ACTIVITY_HOST *v30; // rbx
  unsigned __int64 v31; // r15
  unsigned int v32; // r12d
  __int64 v33; // rbx
  struct _RM_ACTIVITY_HOST *v34; // rbx
  int v35; // eax
  const SID *v36; // r10
  TraceLoggingHProvider v37; // rcx
  LPCGUID v38; // r8
  LPCGUID v39; // r9
  int cData; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_ACTIVITY_HOST *v45; // [rsp+50h] [rbp-B0h] BYREF
  const struct _TlgProvider_t *v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  wchar_t Destination[280]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[560]; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t v50[280]; // [rsp+4D0h] [rbp+3D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+700h] [rbp+600h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+720h] [rbp+620h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+730h] [rbp+630h] BYREF
  unsigned int *v54; // [rsp+740h] [rbp+640h]
  int v55; // [rsp+748h] [rbp+648h]
  int v56; // [rsp+74Ch] [rbp+64Ch]
  unsigned __int64 **v57; // [rsp+750h] [rbp+650h]
  int v58; // [rsp+758h] [rbp+658h]
  int v59; // [rsp+75Ch] [rbp+65Ch]
  unsigned __int64 *v60; // [rsp+760h] [rbp+660h]
  int v61; // [rsp+768h] [rbp+668h]
  int v62; // [rsp+76Ch] [rbp+66Ch]

  v8 = a4;
  v10 = a3;
  v11 = a6;
  v13 = a1;
  v46 = a1;
  if ( a8 <= 9 )
  {
    v14 = 681;
    if ( _bittest(&v14, a8) )
    {
      if ( a7 )
      {
        v15 = a6;
        v43 = a6;
        v47 = a7;
        while ( 1 )
        {
          if ( !a8 )
          {
            RmpPsmAppInstanceIdInitialize(v50, a2, v10, v8, *a5, *v11);
            ExecutionModel::ResourceManager::OnApplicationTerminated(
              (const struct _TlgProvider_t *)((char *)v13 - 8),
              (struct _RM_PSM_HOST_INFO *)v50);
            v31 = *v11;
            v32 = *a5;
            v33 = *((_QWORD *)v46 + 25);
            if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent() && (*(_BYTE *)(v33 + 640) & 1) != 0 )
              RmRpsHostEmptyNotification(*(_QWORD *)(v33 + 632), a2, a3, a4, v32, v31);
            v13 = v46;
            v15 = v43;
            goto LABEL_18;
          }
          if ( a8 == 5 )
            goto LABEL_16;
          if ( a8 != 7 )
            break;
          if ( *a5 == 2 )
          {
            RmpPsmAppInstanceIdInitialize(Destination, a2, v10, v8, 2u, *v11);
            v16 = v49;
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
            v27 = *((_QWORD *)v13 + 25);
            v28 = *((_OWORD *)v17 + 1);
            v29 = *((_QWORD *)v17 + 4);
            *v16 = v26;
            v16[1] = v28;
            *((_QWORD *)v16 + 4) = v29;
            if ( (int)RmpActivityHostFindByTypeAndIdentifier(v27, 0LL, v49, &v45, cData) >= 0 )
            {
              RtlEnterCriticalSection(&RmpGlobalLock);
              v30 = v45;
              if ( *((int *)v45 + 5) >= 0 )
                RmpEnforcementArmWorkerForActivityHost(v45);
              RtlLeaveCriticalSection(&RmpGlobalLock);
              RmpObjectRelease(v30);
            }
            goto LABEL_18;
          }
LABEL_19:
          v8 = a4;
          ++v15;
          ++v11;
          v43 = v15;
          ++a5;
          if ( !--v47 )
            return;
        }
        if ( a8 == 9 )
        {
LABEL_16:
          RtlEnterCriticalSection(&RmpGlobalLock);
          if ( (int)RmpActivityHostFindByHostId(*((struct _RM_SERVICE_GLOBALS **)v13 + 25), *v11, &v45) >= 0 )
          {
            v34 = v45;
            if ( a8 == 5 )
            {
              if ( *((int *)v45 + 178) >= 2 && (*((_BYTE *)v45 + 724) & 4) != 0 )
                RmpActivityHostActOnProcesses(
                  v45,
                  0x2000,
                  1,
                  (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
                  (_QWORD *)1);
              v35 = *((_DWORD *)v34 + 283);
              if ( (v35 & 2) != 0 )
              {
                if ( (*((_BYTE *)v34 + 820) & 0x10) != 0 )
                  *((_DWORD *)v34 + 283) = v35 & 0xFFFFFFFD;
                else
                  RmpActivityHostSetStoreHighMemoryPriority(v34);
              }
            }
            RmpObjectRelease(v34);
          }
          RtlLeaveCriticalSection(&RmpGlobalLock);
        }
        else
        {
          if ( a8 != 3 || (*(_BYTE *)(*((_QWORD *)v13 + 25) + 508LL) & 0x20) == 0 )
            goto LABEL_19;
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
          {
            TlgCreateWsz(&pDesc, a2);
            TlgCreateSid(&v53, v36);
            v56 = 0;
            v59 = 0;
            v62 = 0;
            v54 = &v44;
            LODWORD(v43) = *a5;
            v57 = &v43;
            v44 = v8;
            v55 = 4;
            v58 = 4;
            v60 = v15;
            v61 = 8;
            TlgWrite(v37, &unk_18003FC9A, v38, v39, 7u, &pData);
          }
          RmpSystemTerminateModernHost(a2, v8, *a5, *v11);
        }
LABEL_18:
        v10 = a3;
        goto LABEL_19;
      }
    }
  }
}
