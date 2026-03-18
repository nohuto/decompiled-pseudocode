/*
 * XREFs of IoRemoveIoCompletion @ 0x14009E3A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x140522040 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x1405432F8 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     IopFreeWaitCompletionPacket @ 0x140112C68 (IopFreeWaitCompletionPacket.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     sub_140125D7C @ 0x140125D7C (sub_140125D7C.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
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
  int v18; // eax
  ULONG_PTR v19; // rdx
  unsigned __int64 v20; // rtt
  struct _EX_RUNDOWN_REF *v21; // rcx
  PEX_RUNDOWN_REF v22; // roff
  unsigned __int64 v23; // rtt
  __int128 v25; // [rsp+38h] [rbp-F0h]
  __int64 v26; // [rsp+50h] [rbp-D8h] BYREF
  ULONG v27; // [rsp+58h] [rbp-D0h]
  PLIST_ENTRY *v28; // [rsp+60h] [rbp-C8h]
  struct _KQUEUE *v29; // [rsp+68h] [rbp-C0h]
  PEX_RUNDOWN_REF RunRef; // [rsp+70h] [rbp-B8h]
  PLIST_ENTRY *v31; // [rsp+78h] [rbp-B0h]
  ULONG *v32; // [rsp+80h] [rbp-A8h]
  struct _KQUEUE *v33; // [rsp+88h] [rbp-A0h]
  char v34[8]; // [rsp+98h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp-88h]
  __int64 v36; // [rsp+A8h] [rbp-80h]
  _BYTE v37[48]; // [rsp+B0h] [rbp-78h] BYREF

  v8 = EntryArray;
  v28 = EntryArray;
  v9 = a2;
  v29 = a1;
  v33 = a1;
  v36 = a2;
  v31 = EntryArray;
  v32 = a5;
  DWORD1(v25) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v27 = v10;
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
        LODWORD(v25) = result[4].Blink;
        *((_QWORD *)&v25 + 1) = result[4].Flink;
        IopFreeWaitCompletionPacket(result, v29);
      }
      else
      {
        Blink = result[2].Flink;
        v15 = result[1].Blink;
        LODWORD(v25) = result[2].Blink;
        *((_QWORD *)&v25 + 1) = result[3].Flink;
        IopFreeMiniCompletionPacket((PSLIST_ENTRY)result);
      }
    }
    else
    {
      p_Blink = &result[-11].Blink;
      Blink = result[-5].Blink;
      v15 = result[-3].Flink;
      v25 = *(_OWORD *)&result[-8].Blink;
      v18 = (int)result[-10].Blink;
      if ( (v18 & 0x2000) != 0 )
      {
        v26 = 0LL;
        BugCheckParameter1 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
        v19 = BugCheckParameter1;
        p_Blink[12] = 0LL;
        if ( (_KPROCESS *)v19 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest((__int64)(p_Blink + 15), (__int64)v34, &v26, (ULONG_PTR *)p_Blink + 24, &v26);
        }
        else
        {
          RunRef = (PEX_RUNDOWN_REF)(v19 + 736);
          _m_prefetchw((const void *)(v19 + 736));
          v20 = *(_QWORD *)(v19 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 736), v20 + 2, v20)
            || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v19 + 736)) )
          {
            KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
            IopCompleteRequest((__int64)(p_Blink + 15), (__int64)v34, &v26, (ULONG_PTR *)p_Blink + 24, &v26);
            KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
            v21 = RunRef;
            v22 = RunRef;
            _m_prefetchw(RunRef);
            v23 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v23 - 2, v23) )
              ExfReleaseRundownProtection(v21);
          }
          else
          {
            IopDropIrp(p_Blink, p_Blink[24]);
            LODWORD(v25) = -1073741536;
            *((_QWORD *)&v25 + 1) = 0LL;
          }
        }
      }
      else if ( (v18 & 0x8000) == 0 || !(unsigned int)sub_140125D7C(p_Blink + 11, 0xFFFFFFFFLL) )
      {
        pIoFreeIrp(p_Blink);
      }
      v9 = a2;
    }
    v16 = 32LL * i;
    *(_QWORD *)(v16 + v9) = v15;
    *(_QWORD *)(v16 + v9 + 8) = Blink;
    *(_OWORD *)(v16 + v9 + 16) = v25;
    v8 = v28;
  }
  result = 0LL;
LABEL_11:
  *v32 = v10;
  return result;
}
