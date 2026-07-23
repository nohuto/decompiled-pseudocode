/*
 * XREFs of IoRemoveIoCompletion @ 0x140080540
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x14042E8A0 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x1404B049C (NtRemoveIoCompletionEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     IopDropIrp @ 0x1400DF7D8 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x1400DF940 (IopFreeWaitCompletionPacket.c)
 *     sub_1400EB8E0 @ 0x1400EB8E0 (sub_1400EB8E0.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 */

PLIST_ENTRY __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // r14
  __int64 v9; // r13
  ULONG v10; // edi
  ULONG i; // ebx
  PLIST_ENTRY result; // rax
  char Flink; // cl
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY *v15; // r15
  __int64 v16; // rsi
  struct _LIST_ENTRY **p_Blink; // r13
  _LIST_ENTRY *v18; // rcx
  int v19; // eax
  ULONG_PTR v20; // r12
  __int128 v22; // [rsp+38h] [rbp-D0h]
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  PLIST_ENTRY *v24; // [rsp+58h] [rbp-B0h]
  ULONG v25; // [rsp+60h] [rbp-A8h]
  struct _KQUEUE *v26; // [rsp+68h] [rbp-A0h]
  PLIST_ENTRY *v27; // [rsp+70h] [rbp-98h]
  ULONG *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  char v30; // [rsp+88h] [rbp-80h] BYREF
  struct _KQUEUE *v31; // [rsp+90h] [rbp-78h]
  char v32[48]; // [rsp+98h] [rbp-70h] BYREF

  v8 = EntryArray;
  v24 = EntryArray;
  v9 = a2;
  v26 = a1;
  v31 = a1;
  v29 = a2;
  v27 = EntryArray;
  v28 = a5;
  DWORD1(v22) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v25 = v10;
  for ( i = 0; i < v10; ++i )
  {
    result = v8[i];
    if ( (unsigned __int64)&result[-17].Blink + 7 <= 1 || result == (PLIST_ENTRY)192 || result == (PLIST_ENTRY)128 )
      goto LABEL_11;
    Flink = (char)result[1].Flink;
    if ( Flink )
    {
      if ( Flink == 2 )
      {
        Blink = result[3].Blink;
        v15 = result[3].Flink;
        LODWORD(v22) = result[4].Blink;
        *((_QWORD *)&v22 + 1) = result[4].Flink;
        IopFreeWaitCompletionPacket(result, v26);
      }
      else
      {
        Blink = result[2].Flink;
        v15 = result[1].Blink;
        LODWORD(v22) = result[2].Blink;
        *((_QWORD *)&v22 + 1) = result[3].Flink;
        IopFreeMiniCompletionPacket(result);
      }
    }
    else
    {
      p_Blink = &result[-11].Blink;
      Blink = result[-5].Blink;
      v18 = result - 3;
      v15 = v18->Flink;
      v22 = *(_OWORD *)&result[-8].Blink;
      v19 = (int)result[-10].Blink;
      if ( (v19 & 0x2000) != 0 )
      {
        v23 = 0LL;
        v20 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
        p_Blink[12] = 0LL;
        if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest((_DWORD)v18, (unsigned int)&v30, (unsigned int)&v23, (_DWORD)p_Blink + 192, (__int64)&v23);
        }
        else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v20 + 736)) )
        {
          KiStackAttachProcess(v20);
          IopCompleteRequest(
            (_DWORD)p_Blink + 120,
            (unsigned int)&v30,
            (unsigned int)&v23,
            (_DWORD)p_Blink + 192,
            (__int64)&v23);
          KiUnstackDetachProcess(v32, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 736));
        }
        else
        {
          IopDropIrp(p_Blink, p_Blink[24]);
          LODWORD(v22) = -1073741536;
          *((_QWORD *)&v22 + 1) = 0LL;
        }
      }
      else if ( (v19 & 0x8000) == 0 || !(unsigned int)sub_1400EB8E0(p_Blink + 11, 0xFFFFFFFFLL) )
      {
        pIoFreeIrp(p_Blink);
      }
      v9 = a2;
    }
    v16 = 32LL * i;
    *(_QWORD *)(v16 + v9) = v15;
    *(_QWORD *)(v16 + v9 + 8) = Blink;
    *(_OWORD *)(v16 + v9 + 16) = v22;
    v8 = v24;
  }
  result = 0LL;
LABEL_11:
  *v28 = v10;
  return result;
}
