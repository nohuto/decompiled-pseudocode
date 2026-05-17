/*
 * XREFs of RtlQueueWorkItem @ 0x18007C3C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001684 (RtlpTpETWCallbackEnqueue.c)
 *     RtlPcToFileHeader @ 0x180018580 (RtlPcToFileHeader.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18007CADC (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     RtlpTpDeleteData @ 0x18007CC80 (RtlpTpDeleteData.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TpReserveTaskPost @ 0x18007CD10 (TpReserveTaskPost.c)
 *     TpUnreserveTaskPost @ 0x18007CD90 (TpUnreserveTaskPost.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  __int64 Heap; // rax
  _QWORD *v8; // rdi
  int InformationActivationContext; // eax
  __int64 *v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  volatile signed __int32 *v14; // rcx
  char v15; // [rsp+40h] [rbp-A8h]
  char v16; // [rsp+41h] [rbp-A7h]
  char v17; // [rsp+42h] [rbp-A6h]
  char v18; // [rsp+43h] [rbp-A5h]
  int v19; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v20; // [rsp+48h] [rbp-A0h]
  __int128 v21; // [rsp+50h] [rbp-98h] BYREF
  int v22; // [rsp+60h] [rbp-88h] BYREF
  __int64 v23; // [rsp+68h] [rbp-80h]
  __int64 v24; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+78h] [rbp-70h]
  __int128 v26; // [rsp+80h] [rbp-68h]
  __int64 v27; // [rsp+90h] [rbp-58h]
  int v28; // [rsp+98h] [rbp-50h]
  int v29; // [rsp+9Ch] [rbp-4Ch]
  int v30; // [rsp+A0h] [rbp-48h]
  struct _TEB *v31; // [rsp+B0h] [rbp-38h]
  __int64 v32; // [rsp+108h] [rbp+20h] BYREF

  v21 = 0LL;
  v17 = 0;
  v16 = 0;
  v18 = 0;
  v15 = 0;
  v32 = 0LL;
  v20 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v32, a3 & 0x100);
  v19 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 120LL);
    v8 = (_QWORD *)Heap;
    v20 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v32);
      v19 = v6;
      if ( v6 >= 0 )
      {
        v18 = 1;
        *(_QWORD *)(v20 + 96) = NtCurrentTeb()->SubProcessTag;
        v8 = (_QWORD *)v20;
        *(_GUID *)(v20 + 104) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v21, 0x10uLL, 0LL);
        v6 = InformationActivationContext;
        v19 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (BYTE8(v21) & 1) != 0 )
          {
            RtlReleaseActivationContext((volatile signed __int32 *)v21);
            *(_QWORD *)&v21 = -1LL;
          }
          *(_QWORD *)(v20 + 72) = v21;
          v17 = 1;
          *(_DWORD *)(v20 + 88) = 2;
          *(_QWORD *)(v20 + 56) = a1;
          *(_QWORD *)(v20 + 64) = a2;
          v10 = (__int64 *)(v20 + 32);
          *(_QWORD *)(v20 + 32) = 0LL;
          v22 = 3;
          v23 = 0LL;
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0;
          v29 = 1;
          v30 = 72;
          v11 = 0;
          if ( (a3 & 0xC0) != 0 )
            v11 = 2;
          v28 = v11;
          *(_QWORD *)v20 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v20 + 8) = 0;
          v6 = TpReserveTaskPost(*v10, v20, &v22);
          v19 = v6;
          if ( v6 >= 0 )
          {
            v15 = 1;
            RtlPcToFileHeader(*(PVOID *)(v20 + 56), (PVOID *)(v20 + 80));
            v12 = *(_QWORD *)(v20 + 80);
            if ( v12 )
            {
              LdrAddRefDll(0LL, v12);
              v16 = 1;
              if ( MEMORY[0x7FFE0386] )
              {
                v31 = NtCurrentTeb();
                v8 = (_QWORD *)v20;
                RtlpTpETWCallbackEnqueue(
                  *v10,
                  v20,
                  *(_QWORD *)(v20 + 56),
                  *(_QWORD *)(v20 + 64),
                  (__int64)v31->SubProcessTag);
              }
              TpPostTask((__int64)v8, *v10, 1, (__int64)&v22);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v20 + 88)) )
                RtlpTpWorkUnposted(v20, *v10);
              v8 = 0LL;
              v20 = 0LL;
              v6 = 0;
              v19 = 0;
            }
          }
          goto LABEL_21;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v20 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v19 = -1073741801;
    }
  }
LABEL_21:
  if ( v8 )
  {
    if ( v17 )
    {
      v14 = (volatile signed __int32 *)v8[9];
      if ( v14 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v14);
    }
    if ( v15 )
      TpUnreserveTaskPost(v8[4], &v22);
    if ( v16 )
      LdrUnloadDll(v8[10]);
    if ( v18 )
      RtlpTpDeleteData(v8 + 5);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
    v6 = v19;
  }
  RtlpTpResumeImpersonation(v32);
  return (unsigned int)v6;
}
