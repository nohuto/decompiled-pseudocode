/*
 * XREFs of RtlQueueWorkItem @ 0x18000BBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x180008A0C (TpUnreserveTaskPost.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x180008AF0 (RtlpTpInitializeData.c)
 *     TpReserveTaskPost @ 0x180008B64 (TpReserveTaskPost.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     RtlPcToFileHeader @ 0x180037810 (RtlPcToFileHeader.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  _PEB_LDR_DATA *Ldr; // r8
  int v7; // esi
  __int64 Heap; // rax
  __int64 v9; // rdi
  int v10; // eax
  volatile signed __int32 **v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp-A8h]
  char v17; // [rsp+41h] [rbp-A7h]
  char v18; // [rsp+42h] [rbp-A6h]
  char v19; // [rsp+43h] [rbp-A5h]
  int v20; // [rsp+44h] [rbp-A4h]
  __int64 v21; // [rsp+48h] [rbp-A0h]
  __int128 v22; // [rsp+50h] [rbp-98h] BYREF
  int v23; // [rsp+60h] [rbp-88h] BYREF
  __int64 v24; // [rsp+68h] [rbp-80h]
  __int64 v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+78h] [rbp-70h]
  __int128 v27; // [rsp+80h] [rbp-68h]
  __int64 v28; // [rsp+90h] [rbp-58h]
  int v29; // [rsp+98h] [rbp-50h]
  int v30; // [rsp+9Ch] [rbp-4Ch]
  int v31; // [rsp+A0h] [rbp-48h]
  struct _TEB *v32; // [rsp+B0h] [rbp-38h]
  HANDLE v33; // [rsp+108h] [rbp+20h] BYREF

  v22 = 0LL;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v16 = 0;
  v33 = 0LL;
  v21 = 0LL;
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return 3221225473LL;
  v7 = RtlpTpRevertCapture(&v33, a3 & 0x100, (__int64)Ldr);
  v20 = v7;
  if ( v7 < 0 )
  {
    v9 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 120LL);
    v9 = Heap;
    v21 = Heap;
    if ( Heap )
    {
      v7 = RtlpTpInitializeData(Heap + 40, a3, (__int64)v33);
      v20 = v7;
      if ( v7 >= 0 )
      {
        v19 = 1;
        *(_QWORD *)(v21 + 96) = NtCurrentTeb()->SubProcessTag;
        v9 = v21;
        *(_GUID *)(v21 + 104) = NtCurrentTeb()->ActivityId;
        v10 = RtlQueryInformationActivationContext(1LL, 0LL, 0LL, 1LL, &v22, 16LL, 0LL);
        v7 = v10;
        v20 = v10;
        if ( v10 >= 0 )
        {
LABEL_6:
          if ( (BYTE8(v22) & 1) != 0 )
          {
            RtlReleaseActivationContext(v22);
            *(_QWORD *)&v22 = -1LL;
          }
          *(_QWORD *)(v21 + 72) = v22;
          v18 = 1;
          *(_DWORD *)(v21 + 88) = 2;
          *(_QWORD *)(v21 + 56) = a1;
          *(_QWORD *)(v21 + 64) = a2;
          v11 = (volatile signed __int32 **)(v21 + 32);
          *(_QWORD *)(v21 + 32) = 0LL;
          v23 = 3;
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0;
          v30 = 1;
          v31 = 72;
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v29 = v12;
          *(_QWORD *)v21 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v21 + 8) = 0;
          v7 = TpReserveTaskPost(*v11, v21, (__int64)&v23);
          v20 = v7;
          if ( v7 >= 0 )
          {
            v16 = 1;
            RtlPcToFileHeader(*(PVOID *)(v21 + 56), (PVOID *)(v21 + 80));
            v13 = *(_QWORD *)(v21 + 80);
            if ( v13 )
            {
              LdrAddRefDll(0, v13);
              v17 = 1;
              if ( MEMORY[0x7FFE0386] )
              {
                v32 = NtCurrentTeb();
                v9 = v21;
                RtlpTpETWCallbackEnqueue(
                  (__int64)*v11,
                  v21,
                  *(_QWORD *)(v21 + 56),
                  *(_QWORD *)(v21 + 64),
                  (__int64)v32->SubProcessTag);
              }
              TpPostTask(v9, *v11, 1LL, &v23);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v21 + 88)) )
                RtlpTpWorkUnposted(v21, (__int64)*v11);
              v9 = 0LL;
              v21 = 0LL;
              v7 = 0;
              v20 = 0;
            }
          }
          goto LABEL_21;
        }
        if ( v10 == -1072365557 )
        {
          *(_QWORD *)(v21 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v7 = -1073741801;
      v20 = -1073741801;
    }
  }
LABEL_21:
  if ( v9 )
  {
    if ( v18 )
    {
      v15 = *(_QWORD *)(v9 + 72);
      if ( v15 != -1 )
        RtlReleaseActivationContext(v15);
    }
    if ( v16 )
      TpUnreserveTaskPost(*(volatile signed __int32 **)(v9 + 32), (__int64)&v23);
    if ( v17 )
      LdrUnloadDll(*(_QWORD *)(v9 + 80));
    if ( v19 )
      RtlpTpDeleteData((void **)(v9 + 40));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v21);
    v7 = v20;
  }
  RtlpTpResumeImpersonation(v33);
  return (unsigned int)v7;
}
