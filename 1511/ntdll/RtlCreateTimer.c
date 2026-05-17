/*
 * XREFs of RtlCreateTimer @ 0x1800081A0
 * Callers:
 *     RtlSetTimer @ 0x1800F5960 (RtlSetTimer.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x180008AF0 (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     TpAllocTimer @ 0x18000A620 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  _QWORD *v13; // r15
  int v14; // ecx
  __int64 v15; // r8
  int v17; // [rsp+24h] [rbp-94h]
  _QWORD *v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  int v21; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v26)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v27; // [rsp+78h] [rbp-40h]
  int v28; // [rsp+7Ch] [rbp-3Ch]
  int v29; // [rsp+80h] [rbp-38h]

  v19 = 0LL;
  v18 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = RtlpTpRevertCapture(&v19, a7 & 0x100);
  v17 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 96LL);
    v12 = Heap;
    v18 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (_QWORD *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = RtlpTpInitializeData(Heap + 16, a7, v19);
      v17 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v21 = 3;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v28 = 1;
      v29 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
        v14 = 2;
      v27 = v14;
      if ( (a7 & 0x10) != 0 )
        v27 = v14 | 1;
      v26 = RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, RtlpTpTimerCallback, v12, &v21);
      v17 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v20 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive(a1 + 8);
      v15 = *(_QWORD *)(a1 + 24);
      *v18 = v15;
      v18[1] = a1 + 24;
      if ( *(_QWORD *)(v15 + 8) != a1 + 24 )
        __fastfail(3u);
      *(_QWORD *)(v15 + 8) = v18;
      *(_QWORD *)(a1 + 24) = v18;
      *a2 = v18;
      TpSetTimerEx(*v13, &v20, a6, 0LL, 1, v18);
      RtlReleaseSRWLockExclusive(a1 + 8);
      v12 = 0LL;
      v18 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v17 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData(v12 + 16);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v18);
    v10 = v17;
  }
  RtlpTpResumeImpersonation(v19);
  return (unsigned int)v10;
}
