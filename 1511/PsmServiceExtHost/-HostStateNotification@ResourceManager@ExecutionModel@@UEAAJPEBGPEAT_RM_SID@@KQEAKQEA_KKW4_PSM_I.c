/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0
 * Callers:
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180016420 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 * Callees:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpRmSidInitialize @ 0x18002015C (RmpRmSidInitialize.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800201A0 (RmpEnforcementArmWorkerForActivityHost.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        const struct _TlgProvider_t *a1,
        const wchar_t *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // ebx
  union _RM_SID *v10; // r10
  unsigned __int64 *v11; // r14
  int v13; // eax
  unsigned __int64 *v14; // r12
  __int64 v15; // r15
  unsigned __int64 v17; // rbx
  _OWORD *v18; // rcx
  __int64 v19; // rdx
  wchar_t *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  PVOID v31; // rbx
  const SID *v32; // r10
  TraceLoggingHProvider v33; // rcx
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  void *Src; // [rsp+40h] [rbp-C0h]
  TraceLoggingHProvider hProvider; // [rsp+48h] [rbp-B8h]
  unsigned int v40; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t Destination[232]; // [rsp+60h] [rbp-A0h] BYREF
  char v43[68]; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v44; // [rsp+274h] [rbp+174h]
  int v45; // [rsp+278h] [rbp+178h]
  unsigned __int64 v46; // [rsp+280h] [rbp+180h]
  _BYTE v47[560]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4E0h] [rbp+3E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+4F0h] [rbp+3F0h] BYREF
  unsigned int *v51; // [rsp+500h] [rbp+400h]
  int v52; // [rsp+508h] [rbp+408h]
  int v53; // [rsp+50Ch] [rbp+40Ch]
  __int64 *v54; // [rsp+510h] [rbp+410h]
  int v55; // [rsp+518h] [rbp+418h]
  int v56; // [rsp+51Ch] [rbp+41Ch]
  unsigned __int64 *v57; // [rsp+520h] [rbp+420h]
  int v58; // [rsp+528h] [rbp+428h]
  int v59; // [rsp+52Ch] [rbp+42Ch]

  v8 = a4;
  v10 = a3;
  v11 = a6;
  Src = a3;
  hProvider = a1;
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
        while ( a8 )
        {
          if ( a8 != 3 )
          {
            if ( a8 == 7 )
            {
              if ( *a5 == 2 )
              {
                v17 = *v11;
                memset_0(Destination, 0, 0x228uLL);
                wcscpy_s(Destination, 0xE8uLL, a2);
                RmpRmSidInitialize(v43, Src);
                v18 = v47;
                v44 = a4;
                v19 = 4LL;
                v20 = Destination;
                v45 = 2;
                v46 = v17;
                do
                {
                  v21 = *((_OWORD *)v20 + 1);
                  *v18 = *(_OWORD *)v20;
                  v22 = *((_OWORD *)v20 + 2);
                  v18[1] = v21;
                  v23 = *((_OWORD *)v20 + 3);
                  v18[2] = v22;
                  v24 = *((_OWORD *)v20 + 4);
                  v18[3] = v23;
                  v25 = *((_OWORD *)v20 + 5);
                  v18[4] = v24;
                  v26 = *((_OWORD *)v20 + 6);
                  v18[5] = v25;
                  v27 = *((_OWORD *)v20 + 7);
                  v20 += 64;
                  v18[6] = v26;
                  v18 += 8;
                  *(v18 - 1) = v27;
                  --v19;
                }
                while ( v19 );
                v28 = *(_OWORD *)v20;
                v29 = *((_OWORD *)v20 + 1);
                v30 = *((_QWORD *)v20 + 4);
                *v18 = v28;
                v18[1] = v29;
                *((_QWORD *)v18 + 4) = v30;
                if ( (int)RmpActivityHostFindByTypeAndIdentifier(0LL, v47, &P) >= 0 )
                {
                  RtlEnterCriticalSection(&RmpGlobalLock);
                  v31 = P;
                  if ( *((int *)P + 5) >= 0 )
                    RmpEnforcementArmWorkerForActivityHost(P);
                  RtlLeaveCriticalSection(&RmpGlobalLock);
                  RmpObjectRelease(v31);
                }
                v8 = a4;
                v10 = (union _RM_SID *)Src;
                a1 = hProvider;
              }
              v15 = v37;
            }
            goto LABEL_8;
          }
          if ( *((char *)RmSvcGlobals + 1580) < 0 )
          {
            if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 1uLL) )
            {
              TlgCreateWsz(&pDesc, a2);
              TlgCreateSid(&v50, v32);
              v53 = 0;
              v56 = 0;
              v59 = 0;
              v51 = &v40;
              LODWORD(v37) = *a5;
              v54 = &v37;
              v40 = v8;
              v52 = 4;
              v55 = 4;
              v57 = v14;
              v58 = 8;
              TlgWrite(v33, &unk_180062247, v34, v35, 7u, &pData);
            }
            ExecutionModel::ResourceManager::TerminateModernHost(a2, v8, *a5, *v11);
            goto LABEL_7;
          }
LABEL_8:
          ++v14;
          ++v11;
          ++a5;
          v37 = --v15;
          if ( !v15 )
            return 0LL;
        }
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (const struct _TlgProvider_t *)((char *)a1 - 24),
          a2,
          v10,
          v8,
          *a5,
          *v11);
LABEL_7:
        v10 = (union _RM_SID *)Src;
        a1 = hProvider;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
