/*
 * XREFs of USBMidiOutAllocateRequest @ 0x1C0022D10
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C0006564 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008240 (memset.c)
 */

__int64 __fastcall USBMidiOutAllocateRequest(PKSSTREAM_POINTER StreamPointer, PSLIST_ENTRY *a2)
{
  NTSTATUS v4; // r15d
  _QWORD *Context; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  PSLIST_ENTRY v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  IRP *Next; // rcx
  __int16 v15; // r8
  struct _SLIST_ENTRY *v16; // r14
  _DWORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  void (__fastcall *v21)(PSLIST_ENTRY); // rax

  v4 = -1073741670;
  Context = StreamPointer->Pin->Context;
  v6 = Context[17];
  v7 = Context[2];
  v8 = *(_QWORD *)(v6 + 80);
  ++*(_DWORD *)(v8 + 20);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v8);
  if ( v9
    || (v10 = *(unsigned int *)(v8 + 44),
        v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 48),
        v12 = *(unsigned int *)(v8 + 40),
        v13 = *(unsigned int *)(v8 + 36),
        ++*(_DWORD *)(v8 + 24),
        (v9 = (PSLIST_ENTRY)v11(v13, v10, v12)) != 0LL) )
  {
    Next = (IRP *)v9[1].Next;
    if ( Next )
    {
      v15 = *(char *)(*(_QWORD *)(v7 + 40) + 76LL);
      IoInitializeIrp(Next, 72 * v15 + 208, v15);
    }
    else
    {
      v9[1].Next = (struct _SLIST_ENTRY *)IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
    }
    v16 = v9[1].Next;
    if ( v16 && (v4 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v9[2].Next + 1), v4 >= 0) )
    {
      v17 = (_DWORD *)*((_QWORD *)&v9[1].Next + 1);
      v18 = *((_QWORD *)&v16[11].Next + 1);
      memset(v17, 0, 0x80uLL);
      *(_BYTE *)(v18 - 72) = 15;
      *(_QWORD *)(v18 - 64) = v17;
      *(_DWORD *)(v18 - 48) = 2228227;
      v19 = *((_QWORD *)&v16[11].Next + 1);
      *a2 = v9;
      *(_QWORD *)(v19 - 16) = USBMidiOutCompleteCallback;
      *(_QWORD *)(v19 - 8) = v9;
      *(_BYTE *)(v19 - 69) = -32;
      *v17 = 589952;
      *((_QWORD *)v17 + 3) = *(_QWORD *)(v6 + 56);
      v17[8] = 2;
      *((_QWORD *)v17 + 5) = v9[3].Next;
    }
    else
    {
      v20 = *(_QWORD *)(v6 + 80);
      ++*(_DWORD *)(v20 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v20) < *(_WORD *)(v20 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v20, v9);
      }
      else
      {
        v21 = *(void (__fastcall **)(PSLIST_ENTRY))(v20 + 56);
        ++*(_DWORD *)(v20 + 32);
        v21(v9);
      }
    }
  }
  return (unsigned int)v4;
}
