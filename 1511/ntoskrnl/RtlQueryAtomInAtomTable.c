/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x14045FFD0
 * Callers:
 *     NtQueryInformationAtom @ 0x14045FBEC (NtQueryInformationAtom.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlpLookupLowBox @ 0x140099F58 (RtlpLookupLowBox.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x140148DEC (_snwprintf_s.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
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
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rcx
  _HANDLE_TABLE *ExHandleTable; // rbx
  signed __int64 *v13; // rdi
  signed __int64 v14; // r8
  unsigned __int64 v15; // rbx
  _HANDLE_TABLE *v16; // rax
  unsigned int v17; // esi
  ULONG v18; // eax
  unsigned int v19; // esi
  ULONG v20; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-A8h]
  NTSTATUS v24; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+34h] [rbp-94h]
  PULONG v26; // [rsp+38h] [rbp-90h]
  PULONG v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  PRTL_ATOM_TABLE v29; // [rsp+50h] [rbp-78h]
  __int64 v31; // [rsp+60h] [rbp-68h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  v26 = PinCount;
  v27 = RefCount;
  v29 = AtomTable;
  if ( !AtomTable || AtomTable->Signature != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&AtomTable->PushLock, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&AtomTable->PushLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&AtomTable->PushLock, v9, (ULONG_PTR)&AtomTable->PushLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( Atom < 0xC000u )
  {
    if ( !Atom )
    {
      v24 = -1073741811;
      goto LABEL_47;
    }
    v24 = 0;
    if ( v27 )
      *v27 = 1;
    if ( v26 )
      *v26 = 1;
    if ( !AtomName )
      goto LABEL_47;
    LODWORD(v23) = Atom;
    v19 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v23);
    v25 = v19;
    v20 = *NameLength;
    if ( v19 >= *NameLength )
    {
      if ( v20 < 2 )
        goto LABEL_42;
      v19 = v20 - 2;
      v25 = v20 - 2;
    }
    if ( v19 )
    {
      memmove(AtomName, DstBuf, v19);
      AtomName[(unsigned __int64)v19 >> 1] = 0;
      *NameLength = v19;
      goto LABEL_47;
    }
LABEL_42:
    v24 = -1073741789;
    goto LABEL_47;
  }
  v24 = -1073741816;
  v28 = 4 * (Atom & 0x3FFFu);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExHandleTable = AtomTable->ExHandleTable;
  v31 = v28;
  if ( ((4 * (Atom & 0x3FFF)) & 0x3FC) != 0 )
  {
    v13 = (signed __int64 *)ExpLookupHandleTableEntry(&ExHandleTable->NextHandleNeedingPool, v28);
    if ( v13 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v13);
          v14 = *v13;
          if ( (*v13 & 1) != 0 )
            break;
          if ( !v14 )
            goto LABEL_29;
          ExpBlockOnLockedHandleEntry(ExHandleTable, v13, v14);
        }
      }
      while ( v14 != _InterlockedCompareExchange64(v13, v14 - 1, v14) );
      v15 = (*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = AtomTable->ExHandleTable;
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v22, 0);
      if ( v16->HandleContentionEvent.Value )
        ExfUnblockPushLock((volatile __int64 *)&v16->HandleContentionEvent, 0LL);
      KeLeaveCriticalRegion();
      if ( !v15 )
        goto LABEL_47;
      if ( *(_WORD *)(v15 + 10) != Atom )
        goto LABEL_47;
      if ( !RtlpLookupLowBox((__int64)AtomTable, v15, 0) )
        goto LABEL_47;
      v24 = 0;
      if ( v27 )
        *v27 = *(unsigned __int16 *)(v15 + 36);
      if ( v26 )
        *v26 = *(unsigned __int16 *)(v15 + 38);
      if ( !AtomName )
        goto LABEL_47;
      v17 = 2 * *(unsigned __int8 *)(v15 + 40);
      v25 = v17;
      v18 = *NameLength;
      if ( v17 >= *NameLength )
      {
        if ( v18 < 2 )
        {
          *NameLength = v17;
LABEL_44:
          v24 = -1073741789;
          goto LABEL_47;
        }
        v17 = v18 - 2;
        v25 = v18 - 2;
      }
      if ( v17 )
      {
        memmove(AtomName, (const void *)(v15 + 42), v17);
        AtomName[(unsigned __int64)v17 >> 1] = 0;
        *NameLength = v17;
        goto LABEL_47;
      }
      goto LABEL_44;
    }
  }
LABEL_29:
  KeLeaveCriticalRegion();
LABEL_47:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v24;
}
