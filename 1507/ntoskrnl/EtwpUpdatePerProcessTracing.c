/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x1406E28A8
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x14054B1C0 (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1406E298C (EtwpUpdateProcessTracingCallback.c)
 */

__int64 __fastcall EtwpUpdatePerProcessTracing(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int16 *FlagExtension; // rax
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  PEPROCESS Process; // [rsp+28h] [rbp-20h] BYREF
  __int16 v12; // [rsp+68h] [rbp+20h]

  v3 = a3;
  HIBYTE(v12) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  FlagExtension = EtwpGetFlagExtension(a1, 2);
  if ( FlagExtension )
  {
    v8 = (unsigned int *)(FlagExtension + 2);
    v9 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
    if ( v9 )
    {
      v10 = v9;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v8, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v8;
        --v10;
      }
      while ( v10 );
    }
  }
  LOBYTE(v12) = a2;
  *(_WORD *)(2 * v3 - 0x87FFFFFFC80LL) = v12;
  return 0LL;
}
