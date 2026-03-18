/*
 * XREFs of UmfdLoadFontFile @ 0x1400D2D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1400D2B10 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?HashPath@CPathNameHashTable@UmfdReliabilityManager@@SA_NQEAGPEAK@Z @ 0x1400D2F64 (-HashPath@CPathNameHashTable@UmfdReliabilityManager@@SA_NQEAGPEAK@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x1400D31B4 (UmfdUnloadFontFileInternal.c)
 *     UmfdUnloadFontFile @ 0x1400D34D0 (UmfdUnloadFontFile.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

PVOID __fastcall UmfdLoadFontFile(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  PVOID v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rbx
  PVOID v17; // r13
  PVOID v18; // r15
  PVOID v19; // rdi
  PVOID v20; // rsi
  PVOID v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  PVOID v24; // rax
  __int64 SessionState; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct W32_PUSH_LOCK *v29; // rsi
  __int64 v30; // rax
  unsigned int v32[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  _QWORD v37[5]; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+78h] [rbp-88h]
  _QWORD *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+D4h] [rbp-2Ch]
  int v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+150h] [rbp+50h]
  PVOID pv; // [rsp+158h] [rbp+58h]
  unsigned int v48; // [rsp+160h] [rbp+60h]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest(v37, 4LL);
  v12 = 0LL;
  v46 = -1;
  v45 = 0LL;
  v37[0] = &LoadFontFileRequest::`vftable';
  v44 = a5;
  v42 = a6;
  v43 = a7;
  pv = 0LL;
  v38 = v10;
  v39 = a2;
  v40 = a3;
  v41 = a4;
  v13 = *a2;
  v32[0] = 0;
  if ( !UmfdReliabilityManager::CPathNameHashTable::HashPath(*(unsigned __int16 *const *)(v13 + 80), v32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  v16 = 0LL;
  v48 = v32[0];
  *(_QWORD *)v32 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(2LL, v37) < 0 )
  {
    v24 = 0LL;
  }
  else
  {
    v16 = pv;
    *(_QWORD *)v32 = pv;
    v24 = pv;
    v17 = pv;
    v18 = pv;
    v19 = pv;
    v20 = pv;
    v21 = pv;
    v12 = pv;
  }
  if ( v24 )
  {
    SessionState = W32GetSessionState(v22, 0LL, v23);
    v19 = v17;
    v29 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
    if ( *(_QWORD *)(SessionState + 96) != -24232LL )
    {
      GreAcquirePushLockExclusive(v29);
      v19 = v18;
      v21 = v12;
    }
    v30 = W32GetSessionState(v27, v26, v28);
    if ( !NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(
            *(NSInstrumentation::CPlatformReaderWriterLock **)(*(_QWORD *)(v30 + 96) + 24160LL),
            v32,
            v32) )
    {
      UmfdUnloadFontFile(v16);
      v19 = 0LL;
      v21 = 0LL;
    }
    if ( v29 )
    {
      GreReleasePushLockExclusive(v29);
      return v21;
    }
  }
  else if ( v45 )
  {
    v33[0] = v45;
    v33[1] = 0LL;
    v34 = 0;
    v36 = 0LL;
    v35 = v46;
    UmfdUnloadFontFileInternal(v33);
    return v20;
  }
  return v19;
}
