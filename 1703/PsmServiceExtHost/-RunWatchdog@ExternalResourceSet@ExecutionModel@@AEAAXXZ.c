/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180034D00 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035080 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800184DC (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B298 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180034C4C (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  ULONG v2; // edi
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  UCHAR v6; // dl
  const struct _TlgProvider_t *v7; // rcx
  HANDLE v8; // rsi
  struct _RM_ACTIVITY_HOST *v9; // rcx
  __int64 v10; // r9
  WCHAR *v11; // rax
  wchar_t *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int ProcessPsmInfo; // eax
  __int64 v25; // r9
  WCHAR *v26; // rcx
  wchar_t *v27; // rdx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  NTSTATUS InformationProcess; // eax
  const struct _TlgProvider_t *v40; // rcx
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  ULONG ReturnLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  const struct _TlgProvider_t *v44; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  _BYTE ProcessInformation[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+5Ch] [rbp-ACh]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  __int16 v50; // [rsp+90h] [rbp-78h]
  __int16 v51; // [rsp+94h] [rbp-74h]
  wchar_t v52[280]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR pwsz[232]; // [rsp+2E8h] [rbp+1E0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4B8h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4D8h] [rbp+3D0h] BYREF
  ULONG *v56; // [rsp+4E8h] [rbp+3E0h]
  int v57; // [rsp+4F0h] [rbp+3E8h]
  int v58; // [rsp+4F4h] [rbp+3ECh]

  v45 = 0LL;
  v46 = 0LL;
  if ( *((_DWORD *)this + 338) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(this, 9uLL) )
    {
      pDesc.Reserved = 0;
      v58 = 0;
      pDesc.Ptr = (ULONGLONG)&v44;
      v56 = ReturnLength;
      v44 = v3;
      pDesc.Size = 8;
      ReturnLength[0] = v2;
      v57 = 4;
      TlgWrite(v3, &unk_180043400, v4, v5, 4u, &pData);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1424) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
        return;
      }
      v8 = OpenProcess(0x1001u, 0, v2);
      if ( v8 )
      {
        if ( TraceLoggingProviderEnabled(v7, v6, 0LL) )
        {
          v9 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 176);
          if ( v9 )
          {
            RmpActivityHostGetTracingId(v9, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v52);
            v10 = 3LL;
            v11 = pwsz;
            v12 = v52;
            do
            {
              v13 = *((_OWORD *)v12 + 1);
              *(_OWORD *)v11 = *(_OWORD *)v12;
              v14 = *((_OWORD *)v12 + 2);
              *((_OWORD *)v11 + 1) = v13;
              v15 = *((_OWORD *)v12 + 3);
              *((_OWORD *)v11 + 2) = v14;
              v16 = *((_OWORD *)v12 + 4);
              *((_OWORD *)v11 + 3) = v15;
              v17 = *((_OWORD *)v12 + 5);
              *((_OWORD *)v11 + 4) = v16;
              v18 = *((_OWORD *)v12 + 6);
              *((_OWORD *)v11 + 5) = v17;
              v19 = *((_OWORD *)v12 + 7);
              v12 += 64;
              *((_OWORD *)v11 + 6) = v18;
              v11 += 64;
              *((_OWORD *)v11 - 1) = v19;
              --v10;
            }
            while ( v10 );
            v20 = *((_OWORD *)v12 + 1);
            *(_OWORD *)v11 = *(_OWORD *)v12;
            v21 = *((_OWORD *)v12 + 2);
            *((_OWORD *)v11 + 1) = v20;
            v22 = *((_OWORD *)v12 + 3);
            *((_OWORD *)v11 + 2) = v21;
            v23 = *((_OWORD *)v12 + 4);
            *((_OWORD *)v11 + 3) = v22;
            *((_OWORD *)v11 + 4) = v23;
LABEL_18:
            InformationProcess = NtQueryInformationProcess(
                                   v8,
                                   (PROCESSINFOCLASS)64,
                                   ProcessInformation,
                                   0x60u,
                                   &ReturnLength[1]);
            v40 = (const struct _TlgProvider_t *)(InformationProcess + 0x80000000);
            if ( (int)v40 < 0 || InformationProcess == -2147483643 )
            {
              LODWORD(v45) = v48;
              WORD2(v45) = v50;
              HIWORD(v45) = v51;
              v46 = v49;
            }
            if ( (unsigned int)dword_18004D030 > 4 )
            {
              if ( TlgKeywordOn(v40, 0x400000000001uLL) )
              {
                TlgCreateWsz(&pDesc, pwsz);
                v58 = 0;
                v56 = (ULONG *)&v45;
                v57 = 16;
                TlgWrite((TraceLoggingHProvider)&v45, &unk_180043446, v41, v42, 4u, &pData);
              }
            }
            goto LABEL_24;
          }
          ProcessPsmInfo = RmpSystemGetProcessPsmInfo(v2, v52);
          v25 = 3LL;
          v26 = pwsz;
          v27 = v52;
          do
          {
            v28 = *((_OWORD *)v27 + 1);
            *(_OWORD *)v26 = *(_OWORD *)v27;
            v29 = *((_OWORD *)v27 + 2);
            *((_OWORD *)v26 + 1) = v28;
            v30 = *((_OWORD *)v27 + 3);
            *((_OWORD *)v26 + 2) = v29;
            v31 = *((_OWORD *)v27 + 4);
            *((_OWORD *)v26 + 3) = v30;
            v32 = *((_OWORD *)v27 + 5);
            *((_OWORD *)v26 + 4) = v31;
            v33 = *((_OWORD *)v27 + 6);
            *((_OWORD *)v26 + 5) = v32;
            v34 = *((_OWORD *)v27 + 7);
            v27 += 64;
            *((_OWORD *)v26 + 6) = v33;
            v26 += 64;
            *((_OWORD *)v26 - 1) = v34;
            --v25;
          }
          while ( v25 );
          v35 = *((_OWORD *)v27 + 1);
          *(_OWORD *)v26 = *(_OWORD *)v27;
          v36 = *((_OWORD *)v27 + 2);
          *((_OWORD *)v26 + 1) = v35;
          v37 = *((_OWORD *)v27 + 3);
          *((_OWORD *)v26 + 2) = v36;
          v38 = *((_OWORD *)v27 + 4);
          *((_OWORD *)v26 + 3) = v37;
          *((_OWORD *)v26 + 4) = v38;
          if ( ProcessPsmInfo >= 0 )
            goto LABEL_18;
        }
LABEL_24:
        TerminateProcess(v8, 0x80004004);
        CloseHandle(v8);
      }
    }
  }
}
