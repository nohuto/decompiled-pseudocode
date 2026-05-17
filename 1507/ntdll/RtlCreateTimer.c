/*
 * XREFs of RtlCreateTimer @ 0x18007C830
 * Callers:
 *     RtlSetTimer @ 0x1800F5F60 (RtlSetTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpAllocTimer @ 0x18003C6C0 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18007CADC (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     RtlpTpDeleteData @ 0x18007CC80 (RtlpTpDeleteData.c)
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
  _PEB_LDR_DATA *v13; // r15
  int v14; // ecx
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  int v20; // [rsp+24h] [rbp-94h]
  _QWORD *v21; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  int v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  __int128 v28; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v29)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v30; // [rsp+78h] [rbp-40h]
  int v31; // [rsp+7Ch] [rbp-3Ch]
  int v32; // [rsp+80h] [rbp-38h]

  v22 = 0LL;
  v21 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = RtlpTpRevertCapture(&v22, a7 & 0x100);
  v20 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
    v12 = Heap;
    v21 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (_PEB_LDR_DATA *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = RtlpTpInitializeData(Heap + 16, a7, v22);
      v20 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v24 = 3;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0;
      v31 = 1;
      v32 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
        v14 = 2;
      v30 = v14;
      if ( (a7 & 0x10) != 0 )
        v30 = v14 | 1;
      v29 = RtlpTpTimerFinalizationCallback;
      v10 = TpAllocTimer(v13, (__int64)RtlpTpTimerCallback, v12, (__int64)&v24);
      v20 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v23 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v15, v16, v17);
      v18 = *(_QWORD *)(a1 + 24);
      *v21 = v18;
      v21[1] = a1 + 24;
      if ( *(_QWORD *)(v18 + 8) != a1 + 24 )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v21;
      *(_QWORD *)(a1 + 24) = v21;
      *a2 = v21;
      TpSetTimerEx(*(_QWORD *)&v13->Length, (__int64)&v23, a6, 0);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      v12 = 0LL;
      v21 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v20 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    RtlpTpDeleteData(v12 + 16);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v21);
    v10 = v20;
  }
  RtlpTpResumeImpersonation(v22);
  return (unsigned int)v10;
}
