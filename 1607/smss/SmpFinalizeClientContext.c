/*
 * XREFs of SmpFinalizeClientContext @ 0x140003E64
 * Callers:
 *     SmpApiCallback @ 0x1400039F0 (SmpApiCallback.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x1400047B4 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x1400048FC (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x14000498C (SmpReleaseControlBlock.c)
 */

BOOLEAN __fastcall SmpFinalizeClientContext(char *BaseAddress, int a2, unsigned int a3)
{
  int v6; // eax
  BOOLEAN result; // al
  void *v8; // rcx

  if ( BaseAddress )
  {
    RtlAcquireSRWLockExclusive(BaseAddress + 24);
    if ( a2 == 1 )
      *(_DWORD *)BaseAddress |= 1u;
    if ( a3 <= *((_DWORD *)BaseAddress + 1) )
    {
      --*((_DWORD *)BaseAddress + 2);
    }
    else
    {
      v6 = a3 - *((_DWORD *)BaseAddress + 1) - 1;
      *((_DWORD *)BaseAddress + 1) = a3;
      *((_DWORD *)BaseAddress + 2) += v6;
    }
    if ( (*BaseAddress & 1) == 0 || *((_DWORD *)BaseAddress + 2) )
    {
      return RtlReleaseSRWLockExclusive(BaseAddress + 24);
    }
    else
    {
      v8 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( (*BaseAddress & 0x10) != 0 )
      {
        SmpDereferenceKnownSubSys(v8);
      }
      else if ( (*BaseAddress & 8) != 0 )
      {
        SmpDestroyControlBlock(v8);
        SmpReleaseControlBlock(*((PVOID *)BaseAddress + 4));
      }
      else if ( v8 )
      {
        NtClose(v8);
      }
      NtAlpcDisconnectPort(*((_QWORD *)BaseAddress + 2), 1LL);
      NtClose(*((HANDLE *)BaseAddress + 2));
      return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
  return result;
}
