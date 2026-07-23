/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x18006FA50
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800BD814 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

ULONG __cdecl RtlGetCurrentDirectory_U(ULONG BufferLength, PWSTR Buffer)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 *v4; // rax
  HANDLE *v5; // rbx
  unsigned __int16 *v6; // rdx
  unsigned int Length; // edi
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v2 = BufferLength;
  v4 = RtlpReferenceCurrentDirectory(1);
  v5 = (HANDLE *)v4;
  if ( v4 )
  {
    v6 = (unsigned __int16 *)*((_QWORD *)v4 + 4);
    Length = v4[12];
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    v6 = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v8 = Length >> 1;
  if ( (unsigned int)v8 < 2 || v6[(unsigned int)(v8 - 2)] == 58 )
  {
    v9 = v8;
    if ( v2 <= 2 * v8 )
    {
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
        {
          NtClose(*((HANDLE *)v4 + 1));
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        }
      }
      else
      {
        RtlLeaveCriticalSection(&FastPebLock);
      }
      v10 = v8 + 1;
      return 2 * v10;
    }
LABEL_6:
    memmove(Buffer, v6, v9 * 2);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        NtClose(v5[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    if ( (unsigned int)v8 > 1 && Buffer[(unsigned int)(v8 - 2)] == 58 )
    {
      Buffer[v9] = 0;
    }
    else
    {
      LODWORD(v8) = v8 - 1;
      Buffer[(unsigned int)v8] = 0;
    }
    v10 = v8;
    return 2 * v10;
  }
  v9 = v8;
  if ( v2 >= 2 * v8 )
    goto LABEL_6;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)v4 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&FastPebLock);
  }
  return 2 * v8;
}
