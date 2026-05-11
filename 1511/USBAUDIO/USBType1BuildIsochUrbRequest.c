/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0003B90
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C0004228 (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C00043C0 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C001FC3C (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0002D44 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0007CC0 (memmove.c)
 *     memset @ 0x1C0008000 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(PKSSTREAM_POINTER StreamPointer, IO_COMPLETION_ROUTINE *a2)
{
  _SLIST_ENTRY *p_ListEntry; // rsi
  PKSSTREAM_POINTER v3; // r14
  bool v4; // di
  char *Context; // r15
  ULONG Remaining; // r13d
  _DWORD *v7; // rcx
  bool v8; // dl
  NTSTATUS v9; // eax
  bool v10; // r8
  unsigned int v11; // r12d
  bool v12; // r9
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _SLIST_ENTRY **v21; // rax
  __int64 v22; // rdi
  ULONG v23; // edx
  unsigned int v24; // edi
  __int64 v25; // r14
  ULONG v26; // ebx
  int v27; // r8d
  unsigned int v28; // ecx
  KIRQL v29; // dl
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rsi
  KIRQL v33; // al
  _QWORD *v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rdx
  KIRQL v37; // al
  __int64 v38; // rdi
  void *v39; // rcx
  unsigned int v40; // r12d
  struct _SLIST_ENTRY *Next; // rax
  __int64 v42; // r12
  IRP *v43; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int16 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _IO_STACK_LOCATION *v49; // rax
  KIRQL v50; // al
  _SLIST_ENTRY **v51; // r8
  KIRQL v52; // al
  _DWORD *v53; // rdi
  struct _SLIST_ENTRY *v54; // rax
  __int64 v55; // rbx
  KIRQL v56; // al
  struct _KSPIN *v57; // rcx
  KIRQL v58; // di
  PKSGATE i; // rax
  int Timeout; // [rsp+20h] [rbp-59h]
  bool v62; // [rsp+40h] [rbp-39h]
  bool v63; // [rsp+41h] [rbp-38h]
  NTSTATUS v64; // [rsp+44h] [rbp-35h]
  _SLIST_ENTRY ListEntry; // [rsp+48h] [rbp-31h] BYREF
  ULONG InUsed; // [rsp+58h] [rbp-21h]
  unsigned int v67; // [rsp+5Ch] [rbp-1Dh]
  PSLIST_ENTRY v68; // [rsp+60h] [rbp-19h]
  _DWORD *v69; // [rsp+68h] [rbp-11h]
  __int64 v70; // [rsp+70h] [rbp-9h]
  __int64 v71; // [rsp+78h] [rbp-1h]
  PKSPIN Pin; // [rsp+80h] [rbp+7h]
  bool v75; // [rsp+F0h] [rbp+77h]
  bool v76; // [rsp+F8h] [rbp+7Fh]

  p_ListEntry = &ListEntry;
  v3 = StreamPointer;
  v4 = (char *)a2 == (char *)USBType1LockDelayCompleteCallback;
  Pin = StreamPointer->Pin;
  v63 = (char *)a2 == (char *)USBType1LockDelayCompleteCallback;
  Context = (char *)Pin->Context;
  Remaining = StreamPointer->OffsetIn.Remaining;
  v7 = (_DWORD *)*((_QWORD *)Context + 17);
  v71 = *((_QWORD *)Context + 2);
  v69 = v7;
  v8 = (char *)a2 == (char *)USBType1MsCompleteCallback;
  v62 = v8;
  v76 = 0;
  v75 = 0;
  v9 = 0;
  v64 = 0;
  v10 = 0;
  v11 = v7[2] * (v7[25] + (((v7[26] + v7[24]) & 0xFFFFC000) >= 0xFA0000));
  v12 = 0;
  ListEntry.Next = &ListEntry;
  *((_QWORD *)&ListEntry.Next + 1) = &ListEntry;
  if ( Remaining < v11 )
    goto LABEL_36;
  while ( v9 >= 0 && !v10 )
  {
    v13 = v69;
    if ( v8 )
    {
      v14 = (__int64)v3->Context;
      v15 = 1;
      v68 = (PSLIST_ENTRY)v3->Context;
    }
    else
    {
      v16 = *((_QWORD *)v69 + 14);
      ++*(_DWORD *)(v16 + 20);
      v68 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
      v14 = (__int64)v68;
      if ( !v68 )
      {
        v17 = *(unsigned int *)(v16 + 44);
        v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 48);
        v19 = *(unsigned int *)(v16 + 40);
        v20 = *(unsigned int *)(v16 + 36);
        ++*(_DWORD *)(v16 + 24);
        v14 = v18(v20, v17, v19);
        v68 = (PSLIST_ENTRY)v14;
      }
      v9 = v64;
      v15 = 32;
    }
    v67 = v15;
    if ( !v14 )
    {
LABEL_30:
      v12 = v75;
      goto LABEL_31;
    }
    v21 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry.Next + 1);
    v22 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)v14 = &ListEntry;
    *(_QWORD *)(v14 + 8) = v21;
    v70 = v22;
    if ( *v21 != &ListEntry )
      __fastfail(3u);
    *v21 = (_SLIST_ENTRY *)v14;
    *((_QWORD *)&ListEntry.Next + 1) = v14;
    memset((void *)v22, 0, 12LL * v15 + 152);
    *(_WORD *)(v22 + 2) = 10;
    *(_QWORD *)(v22 + 24) = *((_QWORD *)v13 + 8);
    *(_QWORD *)(v22 + 40) = v3->OffsetIn.Data;
    if ( *((_BYTE *)v13 + 80) )
      *(_DWORD *)(v22 + 128) = v13[222];
    else
      *(_DWORD *)(v22 + 32) = 4;
    v23 = 0;
    v24 = 0;
    InUsed = 0;
    if ( v67 )
    {
      v25 = v70;
      v26 = 0;
      do
      {
        if ( Remaining < v11 || v76 )
          break;
        Remaining -= v11;
        *(_DWORD *)(v25 + 12LL * v24 + 140) = v26;
        v26 += v11;
        v27 = v13[26];
        v28 = (v27 + v13[24]) % 0xFA0000u;
        v13[24] = v28;
        v11 = v13[2] * (v13[25] + (((v27 + v28) & 0xFFFFC000) >= 0xFA0000));
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        if ( *((_BYTE *)v13 + 80) )
        {
          v30 = v13[223]-- == 1;
          v76 = v30;
          if ( v30 )
            v13[223] = v13[221];
          ++v13[222];
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v29);
        ++v24;
      }
      while ( v24 < v67 );
      v3 = StreamPointer;
      InUsed = v26;
      v23 = v26;
      v14 = (__int64)v68;
    }
    v31 = v70;
    *(_DWORD *)(v70 + 132) = v24;
    *(_DWORD *)(v31 + 36) = v23;
    *(_WORD *)v31 = 12 * v24 + 152;
    *(_DWORD *)(v14 + 36) = v23;
    if ( v62 || v63 )
    {
      v12 = v75;
      *(_QWORD *)(v14 + 40) = v3;
      v3->OffsetIn.Data += v23;
      v3->OffsetIn.Remaining -= v23;
    }
    else
    {
      *(_QWORD *)(v14 + 40) = 0LL;
      v9 = KsStreamPointerClone(v3, 0LL, 0, (PKSSTREAM_POINTER *)(v14 + 40));
      v64 = v9;
      if ( v9 < 0 )
        goto LABEL_30;
      v12 = KsStreamPointerAdvanceOffsets(v3, InUsed, 0, 0) == 0;
      v75 = v12;
    }
    v9 = v64;
LABEL_31:
    v8 = v62;
    v10 = v76;
    if ( Remaining < v11 )
      goto LABEL_35;
  }
  v12 = v75;
LABEL_35:
  p_ListEntry = ListEntry.Next;
  v4 = v63;
LABEL_36:
  if ( v4 )
    goto LABEL_51;
  if ( !Remaining )
  {
    if ( !v12 )
      goto LABEL_51;
LABEL_49:
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_50;
  }
  if ( v10 )
  {
    if ( v8 )
      goto LABEL_51;
    goto LABEL_49;
  }
  v32 = *((_QWORD *)Context + 17);
  if ( v8 && Remaining == v3->OffsetIn.Count )
  {
    *(_DWORD *)(v32 + 108) = v11 - Remaining;
    v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
    v34 = v3->Context;
    v35 = (__int64 *)(v32 + 120);
    v36 = *v35;
    *v34 = *v35;
    v34[1] = v35;
    if ( *(__int64 **)(v36 + 8) != v35 )
      __fastfail(3u);
    *(_QWORD *)(v36 + 8) = v34;
    *v35 = (__int64)v34;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v33);
    ExFreePool(v3);
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v32 + 136), Executive, 0, 0, 0LL);
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
    v38 = *(_QWORD *)(v32 + 120);
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v37);
    v39 = *(void **)(v38 + 48);
    *(_DWORD *)(v38 + 36) = Remaining;
    memmove(v39, v3->OffsetIn.Data, Remaining);
    *(_DWORD *)(v32 + 108) = v11 - Remaining;
    if ( !v62 )
      KsStreamPointerAdvanceOffsetsAndUnlock(v3, Remaining, 0, 0);
  }
LABEL_50:
  p_ListEntry = ListEntry.Next;
LABEL_51:
  v40 = v64;
  if ( p_ListEntry != &ListEntry )
  {
    do
    {
      if ( !*((_QWORD *)&p_ListEntry[2].Next + 1) )
        break;
      Next = p_ListEntry->Next;
      if ( *(&p_ListEntry->Next + 1) != &ListEntry || *(&Next->Next + 1) != p_ListEntry )
        __fastfail(3u);
      v42 = v71;
      ListEntry.Next = p_ListEntry->Next;
      *((_QWORD *)&Next->Next + 1) = &ListEntry;
      v43 = (IRP *)p_ListEntry[1].Next;
      CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
      v45 = *(char *)(*(_QWORD *)(v42 + 40) + 76LL);
      IoInitializeIrp(v43, 72 * v45 + 208, v45);
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = *((_QWORD *)&p_ListEntry[1].Next + 1);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v49 = v43->Tail.Overlay.CurrentStackLocation;
      v49[-1].CompletionRoutine = a2;
      v49[-1].Context = p_ListEntry;
      v49[-1].Control = -32;
      _InterlockedIncrement((volatile signed __int32 *)Context + 10);
      if ( !v63 )
      {
        v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        *((_QWORD *)Context + 8) += HIDWORD(p_ListEntry[2].Next);
        v51 = (_SLIST_ENTRY **)*((_QWORD *)Context + 7);
        p_ListEntry->Next = (struct _SLIST_ENTRY *)(Context + 48);
        *((_QWORD *)&p_ListEntry->Next + 1) = v51;
        if ( *v51 != (_SLIST_ENTRY *)(Context + 48) )
          __fastfail(3u);
        *v51 = p_ListEntry;
        *((_QWORD *)Context + 7) = p_ListEntry;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v50);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, v46, v47, v48, Timeout);
      if ( IofCallDriver(*(PDEVICE_OBJECT *)(v42 + 40), (PIRP)p_ListEntry[1].Next) >= 0 && !v63 )
      {
        v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        Context[37] = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v52);
      }
      p_ListEntry = ListEntry.Next;
      v40 = 0;
    }
    while ( ListEntry.Next != &ListEntry );
    if ( p_ListEntry != &ListEntry )
    {
      v53 = v69;
      do
      {
        v54 = p_ListEntry->Next;
        if ( *(&p_ListEntry->Next + 1) != &ListEntry || *(&v54->Next + 1) != p_ListEntry )
          __fastfail(3u);
        ListEntry.Next = p_ListEntry->Next;
        *((_QWORD *)&v54->Next + 1) = &ListEntry;
        v55 = *((_QWORD *)v53 + 14);
        ++*(_DWORD *)(v55 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v55) < *(_WORD *)(v55 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v55, p_ListEntry);
        }
        else
        {
          ++*(_DWORD *)(v55 + 32);
          (*(void (__fastcall **)(_SLIST_ENTRY *))(v55 + 56))(p_ListEntry);
        }
        p_ListEntry = ListEntry.Next;
      }
      while ( ListEntry.Next != &ListEntry );
    }
  }
  if ( v76 )
  {
    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
    v57 = Pin;
    v58 = v56;
    Context[36] = 1;
    for ( i = KsPinGetAndGate(v57); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v58);
  }
  return v40;
}
