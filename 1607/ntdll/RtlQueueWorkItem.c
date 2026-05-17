/*
 * XREFs of RtlQueueWorkItem @ 0x180039CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     RtlpTpResumeImpersonation @ 0x18003A010 (RtlpTpResumeImpersonation.c)
 *     RtlpTpWorkUnposted @ 0x18003A050 (RtlpTpWorkUnposted.c)
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x18003A15C (TpUnreserveTaskPost.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpTpInitializeData @ 0x180064D04 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x180064D78 (RtlpTpRevertCapture.c)
 *     TpReserveTaskPost @ 0x180080454 (TpReserveTaskPost.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  __int64 Heap; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 *v10; // r14
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // rcx
  char v17; // [rsp+40h] [rbp-A8h]
  char v18; // [rsp+41h] [rbp-A7h]
  char v19; // [rsp+42h] [rbp-A6h]
  char v20; // [rsp+43h] [rbp-A5h]
  int v21; // [rsp+44h] [rbp-A4h]
  __int64 v22; // [rsp+48h] [rbp-A0h]
  __int128 v23; // [rsp+50h] [rbp-98h] BYREF
  int v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h]
  __int64 v26; // [rsp+70h] [rbp-78h]
  __int64 v27; // [rsp+78h] [rbp-70h]
  __int128 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  int v30; // [rsp+98h] [rbp-50h]
  int v31; // [rsp+9Ch] [rbp-4Ch]
  int v32; // [rsp+A0h] [rbp-48h]
  struct _TEB *v33; // [rsp+B0h] [rbp-38h]
  __int64 v34; // [rsp+108h] [rbp+20h] BYREF

  v23 = 0LL;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  v34 = 0LL;
  v22 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v34, a3 & 0x100);
  v21 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = (_QWORD *)Heap;
    v22 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v34);
      v21 = v6;
      if ( v6 >= 0 )
      {
        v20 = 1;
        *(_QWORD *)(v22 + 96) = NtCurrentTeb()->SubProcessTag;
        v8 = (_QWORD *)v22;
        *(_GUID *)(v22 + 104) = NtCurrentTeb()->ActivityId;
        v9 = RtlQueryInformationActivationContext(1LL, 0LL, 0LL, 1LL, &v23, 16LL, 0LL);
        v6 = v9;
        v21 = v9;
        if ( v9 >= 0 )
        {
LABEL_6:
          if ( (BYTE8(v23) & 1) != 0 )
          {
            RtlReleaseActivationContext(v23);
            *(_QWORD *)&v23 = -1LL;
          }
          *(_QWORD *)(v22 + 72) = v23;
          v17 = 1;
          *(_DWORD *)(v22 + 88) = 2;
          *(_QWORD *)(v22 + 56) = a1;
          *(_QWORD *)(v22 + 64) = a2;
          v10 = (__int64 *)(v22 + 32);
          *(_QWORD *)(v22 + 32) = 0LL;
          v24 = 3;
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0;
          v31 = 1;
          v32 = 72;
          v11 = 0;
          if ( (a3 & 0xC0) != 0 )
            v11 = 2;
          v30 = v11;
          *(_QWORD *)v22 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v22 + 8) = 0;
          v6 = TpReserveTaskPost(*v10, v22, &v24);
          v21 = v6;
          if ( v6 >= 0 )
          {
            v18 = 1;
            RtlPcToFileHeader(*(PVOID *)(v22 + 56), (PVOID *)(v22 + 80));
            v14 = *(_QWORD *)(v22 + 80);
            if ( v14 )
            {
              LdrAddRefDll(0, v14, v12, v13);
              v19 = 1;
              if ( MEMORY[0x7FFE0386] )
              {
                v33 = NtCurrentTeb();
                v8 = (_QWORD *)v22;
                RtlpTpETWCallbackEnqueue(
                  *v10,
                  v22,
                  *(_QWORD *)(v22 + 56),
                  *(_QWORD *)(v22 + 64),
                  (__int64)v33->SubProcessTag);
              }
              TpPostTask(v8, *v10, 1LL, &v24);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v22 + 88)) )
                RtlpTpWorkUnposted(v22, *v10);
              v8 = 0LL;
              v22 = 0LL;
              v6 = 0;
              v21 = 0;
            }
          }
          goto LABEL_21;
        }
        if ( v9 == -1072365557 )
        {
          *(_QWORD *)(v22 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v21 = -1073741801;
    }
  }
LABEL_21:
  if ( v8 )
  {
    if ( v17 )
    {
      v16 = v8[9];
      if ( v16 != -1 )
        RtlReleaseActivationContext(v16);
    }
    if ( v18 )
      TpUnreserveTaskPost(v8[4], &v24);
    if ( v19 )
      LdrUnloadDll(v8[10]);
    if ( v20 )
      RtlpTpDeleteData(v8 + 5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v22);
    v6 = v21;
  }
  RtlpTpResumeImpersonation(v34);
  return (unsigned int)v6;
}
