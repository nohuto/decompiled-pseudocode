/*
 * XREFs of EtwpDisableTraceProviders @ 0x14040B4EC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14040AED0 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetNextGuidEntry @ 0x14040C2A4 (EtwpGetNextGuidEntry.c)
 *     PsEnumProcesses @ 0x14049895C (PsEnumProcesses.c)
 */

int __fastcall EtwpDisableTraceProviders(__int64 a1, int a2)
{
  ULONG_PTR i; // rax
  ULONG_PTR v5; // rdi
  ULONG_PTR j; // rdx
  ULONG_PTR NextGuidEntry; // rax
  ULONG_PTR v8; // rdi
  unsigned int v9; // ebx
  _WORD *v10; // rdi
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+44h] [rbp+Ch]

  for ( i = EtwpGetNextGuidEntry(a1, 0LL, 0LL); ; i = EtwpGetNextGuidEntry(a1, v5, 0LL) )
  {
    v5 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, i, 0);
  }
  for ( j = 0LL; ; j = v8 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2LL);
    v8 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, NextGuidEntry, 2);
  }
  if ( a1 == EtwpHostSiloState )
  {
    KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
    v9 = 0;
    v10 = (_WORD *)0xFFFFF78000000380LL;
    do
    {
      if ( *(_BYTE *)v10 == (_BYTE)a2 )
      {
        if ( v9 <= 1 )
        {
          v12 = v9;
          v13 = 0;
          PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v12);
        }
        *v10 = 0;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 9 );
    LODWORD(NextGuidEntry) = KeReleaseMutex(&EtwpGlobalMutex, 0);
  }
  return NextGuidEntry;
}
