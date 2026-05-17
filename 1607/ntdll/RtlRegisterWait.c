/*
 * XREFs of RtlRegisterWait @ 0x180064AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18003A010 (RtlpTpResumeImpersonation.c)
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     TpAllocWait @ 0x18003A580 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpTpInitializeData @ 0x180064D04 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180064D78 (RtlpTpRevertCapture.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v8; // edi
  __int64 Heap; // rax
  __int64 v10; // rbx
  __int64 *v11; // r12
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  char v16; // [rsp+20h] [rbp-98h]
  int v17; // [rsp+24h] [rbp-94h]
  unsigned __int64 v18; // [rsp+28h] [rbp-90h]
  void *v19; // [rsp+30h] [rbp-88h] BYREF
  int v20; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  __int128 v24; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-48h]
  int v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+7Ch] [rbp-3Ch]
  int v28; // [rsp+80h] [rbp-38h]

  v16 = 0;
  v19 = 0LL;
  v18 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = RtlpTpRevertCapture(&v19, a6 & 0x100);
  v17 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = Heap;
    v18 = Heap;
    if ( Heap )
    {
      v11 = (__int64 *)(Heap + 48);
      *(_QWORD *)(Heap + 48) = 0LL;
      v8 = RtlpTpInitializeData(Heap, a6, v19);
      v17 = v8;
      if ( v8 >= 0 )
      {
        v16 = 1;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)(v10 + 24) = 0;
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(v10 + 40) = a4;
        *(_QWORD *)(v10 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v10 + 64) = 0LL;
          *(_QWORD *)(v10 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v10 + 64) = a5;
          *(_QWORD *)(v10 + 64) = -10000LL * a5;
          *(_QWORD *)(v10 + 72) = v10 + 64;
        }
        *(_QWORD *)(v10 + 80) = 0LL;
        *(_DWORD *)(v10 + 88) = 0;
        v20 = 3;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0;
        v27 = 1;
        v28 = 72;
        v12 = 0;
        if ( (a6 & 0xC4) != 0 )
          v12 = 2;
        v26 = v12;
        if ( (a6 & 0x10) != 0 )
          v26 = v12 | 1;
        v25 = RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v11, (__int64)RtlpTpWaitCallback, v10, (__int64)&v20);
        v17 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive(v10 + 16, 0LL, v13, v14);
          *a1 = v10;
          TpSetWaitEx(*v11, a2, *(_QWORD **)(v10 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 16));
          v10 = 0LL;
          v18 = 0LL;
          v8 = 0;
          v17 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v17 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v16 )
      RtlpTpDeleteData((void **)v10);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
    v8 = v17;
  }
  RtlpTpResumeImpersonation(v19);
  return (unsigned int)v8;
}
