/*
 * XREFs of PopTransitionTelemetryOsState @ 0x1405825E0
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     PopNotifyTelemetryOsState @ 0x140566B94 (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x1407E37EC (PopDiagInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1400EFF88 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rcx
  unsigned __int64 v12; // kr00_8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  bool v16; // cc
  signed __int64 v17; // rcx
  ULONG_PTR v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int16 *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  int *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  __int16 *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int16 *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]

  if ( TraceLoggingProviderEnabled(&pCallbackContext, a2, 0x800000000000uLL) && byte_14032D8A4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopTelemetryOsState, 0LL, 0LL, v4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopTelemetryOsState, 0LL);
    v10 = v6;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&PopTelemetryOsState, v6, (ULONG_PTR)&PopTelemetryOsState, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = KeGetCurrentThread();
    qword_14032D868 = (__int64)v11;
    if ( a1 != 5 || dword_14032D870 == 1 || (unsigned int)(dword_14032D870 - 4) <= 1 )
    {
      v12 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - qword_14032D888;
      v13 = (MEMORY[0xFFFFF78000000008] - qword_14032D880) / 0x2710uLL;
      v14 = v12 / 0x2710 - qword_14032D898;
      v15 = v13 - qword_14032D890;
      v16 = v14 <= v13 - qword_14032D890;
      qword_14032D890 = v13;
      qword_14032D898 = v12 / 0x2710;
      if ( !v16 )
        v14 = v15;
      v30 = ++dword_14032D8A0;
      v31 = dword_14032D870;
      v32 = dword_14032D874;
      dword_14032D874 = a2;
      dword_14032D870 = a1;
      if ( qword_14032D868 )
        qword_14032D868 = 0LL;
      _m_prefetchw(&PopTelemetryOsState);
      if ( (PopTelemetryOsState & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v17 = PopTelemetryOsState - 16;
      else
        v17 = 0LL;
      if ( (PopTelemetryOsState & 2) != 0
        || (v18 = PopTelemetryOsState,
            v18 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&PopTelemetryOsState,
                     v17,
                     PopTelemetryOsState)) )
      {
        ExfReleasePushLock(
          &PopTelemetryOsState,
          ((unsigned __int64)(MEMORY[0xFFFFF78000000008] - qword_14032D880) * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
      }
      KeAbPostRelease((ULONG_PTR)&PopTelemetryOsState);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v34 = qword_14032D878;
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
        {
          v27 = a1;
          v25 = a2;
          v36 = v15;
          v29 = MEMORY[0xFFFFF780000002C4];
          v26 = v31;
          v28 = v32;
          v33 = v30;
          v40 = &v27;
          v42 = &v25;
          v44 = &v36;
          v46 = &v29;
          v48 = &v34;
          v50 = &v38;
          v52 = &v35;
          v54 = &v37;
          v56 = &v26;
          v58 = &v28;
          v60 = &v33;
          v38 = v14;
          v35 = v13;
          v37 = v12 / 0x2710;
          v41 = 2LL;
          v43 = 2LL;
          v45 = 8LL;
          v47 = 4LL;
          v49 = 8LL;
          v51 = 8LL;
          v53 = 8LL;
          v55 = 8LL;
          v57 = 2LL;
          v59 = 2LL;
          v61 = 4LL;
          TlgWrite(&pCallbackContext, &unk_1402A48AB, 0LL, 0LL, 0xDu, &pData);
        }
      }
    }
    else
    {
      if ( v11 )
        qword_14032D868 = 0LL;
      _m_prefetchw(&PopTelemetryOsState);
      v21 = PopTelemetryOsState - 16;
      if ( (PopTelemetryOsState & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (PopTelemetryOsState & 2) != 0
        || (v22 = PopTelemetryOsState,
            v22 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&PopTelemetryOsState,
                     v21,
                     PopTelemetryOsState)) )
      {
        ExfReleasePushLock(&PopTelemetryOsState, v7);
      }
      KeAbPostRelease((ULONG_PTR)&PopTelemetryOsState);
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( !v24
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
        && !v23->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
