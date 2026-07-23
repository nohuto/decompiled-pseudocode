/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x140423CF0
 * Callers:
 *     NtFindAtom @ 0x1404223CC (NtFindAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlGetIntegerAtom @ 0x140423E74 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x140423F20 (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140423FA0 (RtlpHashStringToAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404240F0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlLookupAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  USHORT v8; // ax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v10; // ax
  NTSTATUS v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-28h] BYREF
  USHORT IntegerAtom; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( RtlGetIntegerAtom(AtomName, &IntegerAtom) )
  {
    v8 = IntegerAtom;
    if ( IntegerAtom >= 0xC000u )
    {
      v8 = 0;
      IntegerAtom = 0;
      v12 = -1073741811;
    }
    else
    {
      v12 = 0;
    }
    if ( Atom )
      *Atom = v8;
  }
  else if ( *AtomName )
  {
    LOBYTE(v6) = 1;
    v12 = RtlpHashStringToAtom(AtomTable, AtomName, v6, 0LL, 0LL, v14, &v13);
    if ( v12 >= 0 )
    {
      v7 = v13;
      if ( v13 )
      {
        if ( RtlpAtomMapAtomToHandleEntry(AtomTable, *(unsigned __int16 *)(v13 + 8)) )
        {
          v12 = 0;
          if ( Atom )
            *Atom = *(_WORD *)(v7 + 10);
        }
        else
        {
          v12 = -1073741816;
        }
      }
      else
      {
        v12 = -1073741772;
      }
    }
  }
  else
  {
    v12 = -1073741773;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  CurrentThread = KeGetCurrentThread();
  v10 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
