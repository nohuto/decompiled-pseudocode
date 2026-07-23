/*
 * XREFs of EtwpTraceStackKey @ 0x1402116F8
 * Callers:
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     KxTryToAcquireSpinLock @ 0x1400EA5BC (KxTryToAcquireSpinLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpDereferenceStackEntry @ 0x1402114F0 (EtwpDereferenceStackEntry.c)
 */

char __fastcall EtwpTraceStackKey(
        unsigned int a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rax
  _SLIST_HEADER *v7; // r12
  unsigned int v8; // ebx
  char v9; // bp
  unsigned int v10; // r13d
  PSLIST_ENTRY v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // ebx
  _SLIST_ENTRY *v19; // rsi
  __int64 CurrentIrql; // rax
  _SLIST_ENTRY *Next; // rdi
  unsigned int v22; // ecx
  _SLIST_ENTRY *v23; // r15
  unsigned int v24; // edx
  _SLIST_ENTRY *v25; // rcx
  _SLIST_ENTRY **v26; // rax
  _SLIST_ENTRY *v27; // rax
  PSLIST_ENTRY *v28; // rax
  __int64 v29; // rbx
  PSLIST_ENTRY v30; // rsi
  _SLIST_HEADER *v31; // rbp
  PSLIST_ENTRY v32; // rax
  PSLIST_ENTRY v33; // r15
  unsigned int v34; // r12d
  KIRQL v35; // dl
  _SLIST_HEADER *v36; // rsi
  _SLIST_ENTRY *v37; // rbx
  _SLIST_ENTRY **v38; // rax
  KIRQL v39; // dl
  char v41[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v42; // [rsp+34h] [rbp-A4h]
  PSLIST_HEADER ListHead; // [rsp+38h] [rbp-A0h]
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-98h]
  _SLIST_ENTRY *v45; // [rsp+48h] [rbp-90h]
  __int64 v46; // [rsp+50h] [rbp-88h]
  PSLIST_ENTRY v47; // [rsp+58h] [rbp-80h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-78h]
  _SLIST_HEADER *v49; // [rsp+68h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-68h]
  _SLIST_ENTRY *v51; // [rsp+78h] [rbp-60h]
  __int64 v52; // [rsp+80h] [rbp-58h]

  v6 = EtwpOpenLogger(a1, EtwpSiloState, 0LL, v41);
  v52 = v6;
  if ( v6 )
  {
    v7 = *(_SLIST_HEADER **)(v6 + 856);
    v49 = v7;
    if ( !v7 )
    {
LABEL_3:
      v8 = a1;
      v9 = 0;
LABEL_59:
      EtwpCloseLogger(v8, EtwpSiloState, v41[0]);
      LOBYTE(v6) = v9;
      return v6;
    }
    v10 = a6;
    v11 = 0LL;
    v12 = 0LL;
    ListEntry = 0LL;
    v46 = 0LL;
    v13 = 4LL * a6;
    v14 = 0;
    if ( v13 )
    {
      v15 = 0LL;
      do
      {
        v16 = v14 + 1;
        v14 += 2;
        v17 = *(unsigned __int16 *)(a5 + 2 * v15) ^ (unsigned __int64)*(unsigned __int16 *)(a5 + 2 * v16);
        v15 = v14;
        v12 += v17;
      }
      while ( v14 < v13 );
      v10 = a6;
      v46 = v12;
    }
    v18 = 0;
    v19 = (_SLIST_ENTRY *)(&v7[(unsigned int)v12 % *((_DWORD *)&v7->HeaderX64 + 1) + 2].Alignment
                         + (unsigned int)v12 % *((_DWORD *)&v7->HeaderX64 + 1));
    v51 = v19;
    CurrentIrql = KeGetCurrentIrql();
    v9 = 1;
    *(_QWORD *)NewIrql = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql <= 1u )
    {
      __writecr8(2uLL);
    }
    else if ( (_BYTE)CurrentIrql != 2 )
    {
      SpinLock = (PKSPIN_LOCK)&v19[1];
      if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&v19[1]) )
        goto LABEL_3;
      v18 = 0;
LABEL_12:
      Next = v19->Next;
      if ( v19->Next == v19 )
      {
LABEL_32:
        Next = 0LL;
        v29 = 0LL;
        v45 = 0LL;
        if ( v10 )
        {
          v30 = v45;
          v31 = v7 + 1;
          ListHead = v7 + 1;
          do
          {
            v32 = RtlpInterlockedPopEntrySList(v31);
            v33 = v32;
            if ( !v32 )
              break;
            if ( (int)v29 + 32 >= v10 )
              v34 = v10 - v29;
            else
              v34 = 32;
            memmove(&v32[2].Next + 1, (const void *)(a5 + 8 * v29), 8LL * v34);
            if ( (_DWORD)v29 )
              LODWORD(v33[2].Next) = v34;
            else
              Next = v33;
            if ( v30 )
              v30[1].Next = v33;
            v33[1].Next = 0LL;
            v29 = v34 + (unsigned int)v29;
            v30 = v33;
          }
          while ( (unsigned int)v29 < v10 );
          v19 = v51;
          v9 = 1;
          v11 = ListEntry;
          if ( (unsigned int)v29 < v10 )
          {
            KeReleaseSpinLock(SpinLock, NewIrql[0]);
            if ( Next )
            {
              v36 = ListHead;
              do
              {
                v37 = Next[1].Next;
                RtlpInterlockedPushEntrySList(v36, Next);
                Next = v37;
              }
              while ( v37 );
            }
            if ( v11 )
              EtwpDereferenceStackEntry(v11, v49);
            goto LABEL_3;
          }
          v7 = v49;
        }
        *((_DWORD *)&Next[1].Next + 3) = v46;
        LODWORD(Next[2].Next) = v10;
        *((_DWORD *)&Next[1].Next + 2) = 2;
        v38 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1);
        Next->Next = v19;
        *((_QWORD *)&Next->Next + 1) = v38;
        if ( *v38 != v19 )
          __fastfail(3u);
        v39 = NewIrql[0];
        *v38 = Next;
        *((_QWORD *)&v19->Next + 1) = Next;
        KeReleaseSpinLock((PKSPIN_LOCK)&v19[1], v39);
        if ( v11 )
          EtwpDereferenceStackEntry(v11, v7);
      }
      else
      {
        while ( 1 )
        {
          v42 = ++v18;
          if ( *((_DWORD *)&Next[1].Next + 3) == (_DWORD)v12 && LODWORD(Next[2].Next) == v10 )
            break;
LABEL_27:
          Next = Next->Next;
          if ( Next == v19 )
          {
            if ( v18 == 4 )
            {
              v11 = (PSLIST_ENTRY)*((_QWORD *)&v19->Next + 1);
              ListEntry = v11;
              v28 = (PSLIST_ENTRY *)*((_QWORD *)&v11->Next + 1);
              if ( v11->Next != v19 || *v28 != v11 )
                __fastfail(3u);
              *((_QWORD *)&v19->Next + 1) = v28;
              *v28 = v19;
            }
            goto LABEL_32;
          }
        }
        v22 = 0;
        v23 = Next;
        LODWORD(ListHead) = 0;
        do
        {
          v24 = 32;
          if ( LODWORD(v23[2].Next) < 0x20 )
            v24 = (unsigned int)v23[2].Next;
          LODWORD(v45) = v24;
          if ( RtlCompareMemory(&v23[2].Next + 1, (const void *)(a5 + 8LL * v22), 8LL * v24) != 8LL * v24 )
          {
            v18 = v42;
            LODWORD(v12) = v46;
            goto LABEL_27;
          }
          v22 = (_DWORD)v45 + (_DWORD)ListHead;
          v23 = v23[1].Next;
          LODWORD(ListHead) = (_DWORD)v45 + (_DWORD)ListHead;
        }
        while ( v23 );
        _InterlockedAdd((volatile signed __int32 *)&Next[1].Next + 2, 1u);
        v25 = Next->Next;
        v26 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
        if ( *(&Next->Next->Next + 1) != Next || *v26 != Next )
          __fastfail(3u);
        *v26 = v25;
        *((_QWORD *)&v25->Next + 1) = v26;
        v27 = v19->Next;
        Next->Next = v19->Next;
        *((_QWORD *)&Next->Next + 1) = v19;
        if ( *(&v27->Next + 1) != v19 )
          __fastfail(3u);
        v35 = NewIrql[0];
        *((_QWORD *)&v27->Next + 1) = Next;
        v19->Next = Next;
        KeReleaseSpinLock((PKSPIN_LOCK)&v19[1], v35);
      }
      v8 = a1;
      v47 = Next;
      *(_DWORD *)(a4 + 28) = 0;
      *(_QWORD *)(a4 + 16) = &v47;
      *(_DWORD *)(a4 + 24) = 8;
      EtwpLogKernelEvent(a4, a1, 2LL, a3, a2);
      EtwpDereferenceStackEntry(v47, *(_SLIST_HEADER **)(v52 + 856));
      goto LABEL_59;
    }
    SpinLock = (PKSPIN_LOCK)&v19[1];
    KxAcquireSpinLock((PKSPIN_LOCK)&v19[1]);
    goto LABEL_12;
  }
  return v6;
}
