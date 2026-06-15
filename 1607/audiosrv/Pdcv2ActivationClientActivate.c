/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x180005210
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800059DC (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180005614 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180005760 (PdcAcquireRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1800057D4 (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 *     PdcPortSendMessageSynchronously @ 0x180005870 (PdcPortSendMessageSynchronously.c)
 *     PdcpResizeDiagnosticContext @ 0x180005914 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x180005950 (Pdcv2pValidateActivationParameters.c)
 *     memset @ 0x180036D30 (memset.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *Heap; // rax
  _QWORD *v15; // rdi
  ULONGLONG TickCount64; // rax
  _WORD *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rbx
  _WORD *v22; // rcx
  __int64 v23; // rdx
  __int16 v24; // ax
  _WORD *v25; // rcx
  __int64 v26; // rdx
  signed __int64 v27; // r8
  __int16 v28; // ax
  __int64 v29; // rbx
  _WORD *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // eax
  _QWORD *v35; // rcx
  _QWORD v37[96]; // [rsp+28h] [rbp-E0h] BYREF
  int v38; // [rsp+370h] [rbp+268h] BYREF

  v38 = a4;
  v8 = a8;
  LOBYTE(v38) = 0;
  v12 = 0LL;
  if ( !a8 )
  {
    v33 = -1073741578;
LABEL_47:
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v12, (unsigned int)v33);
    goto LABEL_43;
  }
  v13 = a7;
  *a8 = 1;
  if ( !v13 )
  {
    v33 = -1073741579;
    goto LABEL_47;
  }
  *v13 = 0LL;
  if ( !a1 )
  {
LABEL_50:
    v33 = -1073741585;
    goto LABEL_47;
  }
  v12 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v12 = 0LL;
    goto LABEL_50;
  }
  if ( !(unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
  {
    v33 = -1073741584;
    goto LABEL_47;
  }
  PdcAcquireRwLockExclusive2(v12 + 8, &v38);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
  v15 = Heap;
  if ( !Heap )
  {
    v33 = -1073741801;
    goto LABEL_47;
  }
  memset(Heap, 0, 0x258uLL);
  *((_DWORD *)v15 + 4) = 1094927440;
  *((_DWORD *)v15 + 5) = 1;
  v15[3] = v12;
  TickCount64 = GetTickCount64();
  v17 = v15 + 9;
  *((_DWORD *)v15 + 12) = 2;
  v15[5] = TickCount64;
  LODWORD(TickCount64) = *(_DWORD *)(a2 + 4);
  v18 = 128LL;
  v15[4] = a3;
  *((_DWORD *)v15 + 13) = TickCount64;
  v19 = 128LL;
  do
  {
    if ( v19 == -2147483518 )
      break;
    v20 = *(_WORD *)((char *)v17 + (char *)L"TimerForAudioPlayback" - (char *)(v15 + 9));
    if ( !v20 )
      break;
    *v17++ = v20;
    --v19;
  }
  while ( v19 );
  if ( !v19 )
    --v17;
  v21 = *(_QWORD *)(a2 + 16);
  *v17 = 0;
  if ( v21 )
  {
    v22 = v15 + 41;
    v23 = 128LL;
    do
    {
      if ( v23 == -2147483518 )
        break;
      v24 = *(_WORD *)((char *)v22 + v21 - (_QWORD)(v15 + 41));
      if ( !v24 )
        break;
      *v22++ = v24;
      --v23;
    }
    while ( v23 );
    if ( !v23 )
      --v22;
    *v22 = 0;
  }
  memset(v37, 0, sizeof(v37));
  v37[9] = *(_QWORD *)(a2 + 8);
  v25 = &v37[11];
  HIDWORD(v37[10]) = *(_DWORD *)(a2 + 4);
  v26 = 128LL;
  LODWORD(v37[5]) = 10;
  v27 = (char *)L"TimerForAudioPlayback" - (char *)&v37[11];
  LODWORD(v37[8]) = 2;
  LODWORD(v37[10]) = 0;
  do
  {
    if ( v26 == -2147483518 )
      break;
    v28 = *(_WORD *)((char *)v25 + v27);
    if ( !v28 )
      break;
    *v25++ = v28;
    --v26;
  }
  while ( v26 );
  if ( !v26 )
    --v25;
  *v25 = 0;
  if ( v21 )
  {
    v29 = v21 - (_QWORD)&v37[43];
    v30 = &v37[43];
    do
    {
      if ( v18 == -2147483518 )
        break;
      v31 = *(_WORD *)((char *)v30 + v29);
      if ( !v31 )
        break;
      *v30++ = v31;
      --v18;
    }
    while ( v18 );
    if ( !v18 )
      --v30;
    *v30 = 0;
  }
  v32 = *(_QWORD *)(a2 + 24);
  if ( v32 )
    PdcpResizeDiagnosticContext(v32, &v37[75], v27);
  v33 = PdcPortSendMessageSynchronously(*(_QWORD *)(a1 + 32), v37);
  if ( v33 < 0 || (v33 = v37[6], v34 = HIDWORD(v37[6]), *v8 = HIDWORD(v37[6]), v33 < 0) || v34 == 300 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  }
  else
  {
    v15[74] = v37[7];
    *((_BYTE *)v15 + 60) = 0;
    *((_DWORD *)v15 + 14) = HIDWORD(v37[6]);
    ++*(_DWORD *)(a1 + 220);
    ++*(_DWORD *)(a1 + 224);
    ++*(_DWORD *)(a1 + 236);
    v35 = *(_QWORD **)(a1 + 80);
    if ( *v35 != a1 + 72 )
      __fastfail(3u);
    *v15 = a1 + 72;
    v15[1] = v35;
    *v35 = v15;
    *(_QWORD *)(a1 + 80) = v15;
    *a7 = v15;
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(v15, a1, (unsigned int)v33);
  }
  if ( v33 < 0 )
    goto LABEL_47;
LABEL_43:
  if ( (_BYTE)v38 )
    PdcReleaseRwLockExclusive2(v12 + 8, &v38);
  return (unsigned int)v33;
}
