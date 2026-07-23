/*
 * XREFs of IoRemoveIoCompletion @ 0x140069C60
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x14044FA70 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x1404B77E4 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     IopInterlockedAdd @ 0x1400AA794 (IopInterlockedAdd.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     IopFreeWaitCompletionPacket @ 0x1400EC1F8 (IopFreeWaitCompletionPacket.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  ULONG v10; // ebx
  unsigned int v11; // esi
  __int64 i; // rdi
  PLIST_ENTRY v13; // rcx
  char Flink; // al
  __int64 v16; // r14
  __int64 v17; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  int v19; // eax
  ULONG_PTR v20; // r8
  __int128 v21; // [rsp+38h] [rbp-F0h]
  __int64 v22; // [rsp+48h] [rbp-E0h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+50h] [rbp-D8h]
  struct _LIST_ENTRY *Blink; // [rsp+58h] [rbp-D0h]
  ULONG v25; // [rsp+60h] [rbp-C8h]
  ULONG_PTR *v26; // [rsp+68h] [rbp-C0h]
  __int64 v27; // [rsp+70h] [rbp-B8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-B0h]
  char *v29; // [rsp+80h] [rbp-A8h]
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-A0h]
  char v31[8]; // [rsp+90h] [rbp-98h] BYREF
  struct _KQUEUE *v32; // [rsp+98h] [rbp-90h]
  __int64 v33; // [rsp+A0h] [rbp-88h]
  PLIST_ENTRY *v34; // [rsp+A8h] [rbp-80h]
  ULONG *v35; // [rsp+B0h] [rbp-78h]
  char v36[48]; // [rsp+B8h] [rbp-70h] BYREF

  v27 = a2;
  v32 = a1;
  v33 = a2;
  v34 = EntryArray;
  v35 = a5;
  DWORD1(v21) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v25 = v10;
  v11 = 0;
  for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
  {
    v13 = EntryArray[i];
    if ( (unsigned __int64)&v13[-17].Blink + 7 <= 1 || v13 == (PLIST_ENTRY)192 || v13 == (PLIST_ENTRY)128 )
    {
      v11 = (unsigned int)EntryArray[i];
      break;
    }
    Flink = (char)v13[1].Flink;
    if ( Flink )
    {
      if ( Flink == 2 )
      {
        Blink = v13[3].Blink;
        v23 = v13[3].Flink;
        LODWORD(v21) = v13[4].Blink;
        *((_QWORD *)&v21 + 1) = v13[4].Flink;
        IopFreeWaitCompletionPacket(v13, a1);
      }
      else
      {
        Blink = v13[2].Flink;
        v23 = v13[1].Blink;
        LODWORD(v21) = v13[2].Blink;
        *((_QWORD *)&v21 + 1) = v13[3].Flink;
        IopFreeMiniCompletionPacket(v13);
      }
    }
    else
    {
      p_Blink = &v13[-11].Blink;
      v26 = (ULONG_PTR *)p_Blink;
      Blink = p_Blink[12];
      v29 = (char *)(p_Blink + 15);
      v23 = p_Blink[15];
      v21 = *((_OWORD *)p_Blink + 3);
      v19 = *((_DWORD *)p_Blink + 4);
      if ( (v19 & 0x2000) != 0 )
      {
        v22 = 0LL;
        BugCheckParameter1 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
        v20 = BugCheckParameter1;
        p_Blink[12] = 0LL;
        if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest((__int64)(p_Blink + 15), (__int64)v31, &v22, (ULONG_PTR *)p_Blink + 24, &v22);
        }
        else
        {
          RunRef = (PEX_RUNDOWN_REF)(v20 + 736);
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v20 + 736)) )
          {
            KiStackAttachProcess(BugCheckParameter1);
            IopCompleteRequest((__int64)v29, (__int64)v31, &v22, v26 + 24, &v22);
            KiUnstackDetachProcess(v36, 0LL);
            ExReleaseRundownProtection(RunRef);
          }
          else
          {
            IopDropIrp(v26, v26[24]);
            LODWORD(v21) = -1073741536;
            *((_QWORD *)&v21 + 1) = 0LL;
          }
        }
      }
      else
      {
        if ( (v19 & 0x8000) == 0 )
          goto LABEL_17;
        if ( !(unsigned int)IopInterlockedAdd(p_Blink + 11, 0xFFFFFFFFLL) )
        {
          p_Blink = (struct _LIST_ENTRY **)v26;
LABEL_17:
          pIoFreeIrp(p_Blink);
        }
      }
    }
    v16 = 32LL * (unsigned int)i;
    v17 = v27;
    *(_QWORD *)(v16 + v27) = v23;
    *(_QWORD *)(v16 + v17 + 8) = Blink;
    *(_OWORD *)(v16 + v17 + 16) = v21;
  }
  *v35 = v10;
  return v11;
}
