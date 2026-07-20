/*
 * XREFs of sub_140003D54 @ 0x140003D54
 * Callers:
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 * Callees:
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 */

BOOLEAN __fastcall sub_140003D54(char *BaseAddress, int a2, unsigned int a3)
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
        sub_1400046B4(v8);
      }
      else if ( (*BaseAddress & 8) != 0 )
      {
        sub_140004800(v8);
        sub_140004890(*((PVOID *)BaseAddress + 4));
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
