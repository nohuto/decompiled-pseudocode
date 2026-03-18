/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140504970
 * Callers:
 *     NtQueryInformationAtom @ 0x140504728 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1400EE2A4 (RtlpLookupLowBox.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x140176E6C (_snwprintf_s.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  struct _KTHREAD *v12; // rcx
  _HANDLE_TABLE *ExHandleTable; // rbx
  __int64 *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  _HANDLE_TABLE *v17; // rax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned int v20; // esi
  ULONG v21; // eax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  unsigned int v24; // esi
  ULONG v25; // eax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  signed __int32 v29[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-B8h]
  NTSTATUS v31; // [rsp+30h] [rbp-A8h]
  unsigned int v32; // [rsp+34h] [rbp-A4h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  PULONG v34; // [rsp+40h] [rbp-98h]
  PULONG v35; // [rsp+48h] [rbp-90h]
  PRTL_ATOM_TABLE v36; // [rsp+50h] [rbp-88h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  struct _KTHREAD *v39; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v40; // [rsp+70h] [rbp-68h]
  wchar_t DstBuf[16]; // [rsp+78h] [rbp-60h] BYREF

  v35 = PinCount;
  v34 = RefCount;
  v36 = AtomTable;
  if ( !AtomTable || AtomTable->Signature != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&AtomTable->PushLock, 0LL, 0LL, (__int64)PinCount);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&AtomTable->PushLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&AtomTable->PushLock, v9, (ULONG_PTR)&AtomTable->PushLock, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( Atom >= 0xC000u )
  {
    v31 = -1073741816;
    v33 = 4 * (Atom & 0x3FFFu);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExHandleTable = AtomTable->ExHandleTable;
    v38 = v33;
    if ( ((4 * (Atom & 0x3FFF)) & 0x3FC) == 0
      || (v14 = (__int64 *)ExpLookupHandleTableEntry(&ExHandleTable->NextHandleNeedingPool, v33)) == 0LL )
    {
LABEL_31:
      v22 = KeGetCurrentThread();
      v39 = v22;
      v23 = v22->KernelApcDisable + 1;
      v22->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_55;
    }
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v14);
        v15 = *v14;
        if ( (*v14 & 1) != 0 )
          break;
        if ( !v15 )
          goto LABEL_31;
        ExpBlockOnLockedHandleEntry((__int64)ExHandleTable, v14, v15);
      }
    }
    while ( v15 != _InterlockedCompareExchange64(v14, v15 - 1, v15) );
    v16 = (*v14 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = AtomTable->ExHandleTable;
    _InterlockedExchangeAdd64(v14, 1uLL);
    _InterlockedOr(v29, 0);
    if ( v17->HandleContentionEvent.Value )
      ExfUnblockPushLock((volatile __int64 *)&v17->HandleContentionEvent, 0LL);
    v18 = KeGetCurrentThread();
    v40 = v18;
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v16 )
      goto LABEL_55;
    if ( *(_WORD *)(v16 + 10) != Atom )
      goto LABEL_55;
    if ( !RtlpLookupLowBox((__int64)AtomTable, v16, 0) )
      goto LABEL_55;
    v31 = 0;
    if ( v34 )
      *v34 = *(unsigned __int16 *)(v16 + 36);
    if ( v35 )
      *v35 = *(unsigned __int16 *)(v16 + 38);
    if ( !AtomName )
      goto LABEL_55;
    v20 = 2 * *(unsigned __int8 *)(v16 + 40);
    v32 = v20;
    v21 = *NameLength;
    if ( v20 >= *NameLength )
    {
      if ( v21 < 2 )
      {
        *NameLength = v20;
LABEL_52:
        v31 = -1073741789;
        goto LABEL_55;
      }
      v20 = v21 - 2;
      v32 = v21 - 2;
    }
    if ( v20 )
    {
      memmove(AtomName, (const void *)(v16 + 42), v20);
      AtomName[(unsigned __int64)v20 >> 1] = 0;
      *NameLength = v20;
      goto LABEL_55;
    }
    goto LABEL_52;
  }
  if ( !Atom )
  {
    v31 = -1073741811;
    goto LABEL_55;
  }
  v31 = 0;
  if ( v34 )
    *v34 = 1;
  if ( v35 )
    *v35 = 1;
  if ( !AtomName )
    goto LABEL_55;
  LODWORD(v30) = Atom;
  v24 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v30);
  v32 = v24;
  v25 = *NameLength;
  if ( v24 >= *NameLength )
  {
    if ( v25 < 2 )
      goto LABEL_50;
    v24 = v25 - 2;
    v32 = v25 - 2;
  }
  if ( !v24 )
  {
LABEL_50:
    v31 = -1073741789;
    goto LABEL_55;
  }
  memmove(AtomName, DstBuf, v24);
  AtomName[(unsigned __int64)v24 >> 1] = 0;
  *NameLength = v24;
LABEL_55:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v31;
}
