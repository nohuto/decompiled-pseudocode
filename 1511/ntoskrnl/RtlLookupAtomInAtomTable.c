/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1403F6B10
 * Callers:
 *     NtFindAtom @ 0x1403F63B0 (NtFindAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlGetIntegerAtom @ 0x1403F6C5C (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1403F6CFC (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1403F6D70 (RtlpHashStringToAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1403F6EC0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlLookupAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  USHORT v8; // ax
  NTSTATUS v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
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
      v10 = -1073741811;
    }
    else
    {
      v10 = 0;
    }
    if ( Atom )
      *Atom = v8;
  }
  else if ( *AtomName )
  {
    LOBYTE(v6) = 1;
    v10 = RtlpHashStringToAtom(AtomTable, AtomName, v6, 0LL, 0LL, v12, &v11);
    if ( v10 >= 0 )
    {
      v7 = v11;
      if ( v11 )
      {
        if ( RtlpAtomMapAtomToHandleEntry(AtomTable, *(unsigned __int16 *)(v11 + 8)) )
        {
          v10 = 0;
          if ( Atom )
            *Atom = *(_WORD *)(v7 + 10);
        }
        else
        {
          v10 = -1073741816;
        }
      }
      else
      {
        v10 = -1073741772;
      }
    }
  }
  else
  {
    v10 = -1073741773;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v10;
}
