/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x14069FFEC
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x1404960B4 (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1406A00DC (EtwpUpdateProcessTracingCallback.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned __int16 *FlagExtension; // rax
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v13; // [rsp+80h] [rbp+18h]

  v4 = a4;
  HIBYTE(v13) = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
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
  LOBYTE(v13) = a3;
  *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v13;
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
