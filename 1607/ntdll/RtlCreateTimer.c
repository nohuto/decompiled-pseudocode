/*
 * XREFs of RtlCreateTimer @ 0x180064830
 * Callers:
 *     RtlSetTimer @ 0x1800FE860 (RtlSetTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18003A010 (RtlpTpResumeImpersonation.c)
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     TpAllocTimer @ 0x18003A720 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x18003C000 (TpSetTimerEx.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpTpInitializeData @ 0x180064D04 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180064D78 (RtlpTpRevertCapture.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  __int64 *v13; // r15
  int v14; // eax
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // r8
  int v21; // [rsp+24h] [rbp-94h]
  _QWORD *v22; // [rsp+28h] [rbp-90h]
  void *v23; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+38h] [rbp-80h] BYREF
  int v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  __int64 v28; // [rsp+58h] [rbp-60h]
  __int128 v29; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v30)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v31; // [rsp+78h] [rbp-40h]
  int v32; // [rsp+7Ch] [rbp-3Ch]
  int v33; // [rsp+80h] [rbp-38h]

  v23 = 0LL;
  v22 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = RtlpTpRevertCapture(&v23, a7 & 0x100);
  v21 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    v22 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (__int64 *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = RtlpTpInitializeData(Heap + 16, a7, v23);
      v21 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v25 = 3;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0;
      v32 = 1;
      v33 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
        v14 = 2;
      v31 = v14;
      if ( (a7 & 0x10) != 0 )
        v31 = v14 | 1;
      v30 = RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, (__int64)RtlpTpTimerCallback, v12, (__int64)&v25);
      v21 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v24 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive(a1 + 8, v15, v16, v17);
      v18 = (_QWORD *)(a1 + 24);
      v19 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v19 + 8) != a1 + 24 )
        __fastfail(3u);
      *v22 = v19;
      v22[1] = v18;
      *(_QWORD *)(v19 + 8) = v22;
      *v18 = v22;
      *a2 = v22;
      TpSetTimerEx(*v13, (__int64)&v24, a6, 0);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      v12 = 0LL;
      v22 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v21 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData((void **)(v12 + 16));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v22);
    v10 = v21;
  }
  RtlpTpResumeImpersonation(v23);
  return (unsigned int)v10;
}
