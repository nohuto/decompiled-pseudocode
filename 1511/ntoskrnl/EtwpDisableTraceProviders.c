/*
 * XREFs of EtwpDisableTraceProviders @ 0x1404CCDA8
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 */

LONG __fastcall EtwpDisableTraceProviders(unsigned int a1)
{
  __int64 i; // rax
  ULONG_PTR v3; // rbx
  ULONG_PTR j; // rcx
  __int64 NextGuidEntry; // rax
  __int64 v6; // r8
  ULONG_PTR v7; // rbx
  unsigned int v8; // ebx
  _WORD *v9; // rdi
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+4Ch] [rbp+14h]

  for ( i = EtwpGetNextGuidEntry(0LL); ; i = EtwpGetNextGuidEntry(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a1, i, 0LL);
  }
  for ( j = 0LL; ; j = v7 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(j);
    v7 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    LOBYTE(v6) = 2;
    EtwpClearSessionAndUnreferenceEntry(a1, NextGuidEntry, v6);
  }
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  v8 = 0;
  v9 = (_WORD *)0xFFFFF78000000380LL;
  do
  {
    if ( *(_BYTE *)v9 == (_BYTE)a1 )
    {
      if ( v8 <= 1 )
      {
        v11 = v8;
        v12 = 0;
        PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v11);
      }
      *v9 = 0;
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 9 );
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
