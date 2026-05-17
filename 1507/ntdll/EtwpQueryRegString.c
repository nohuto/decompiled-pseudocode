/*
 * XREFs of EtwpQueryRegString @ 0x1800F5048
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x1800F4B0C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpQueryRegString(__int64 a1, void *a2, void *a3)
{
  int ValueKey; // edi
  unsigned __int64 Heap; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp+Fh] BYREF
  _OWORD v9[3]; // [rsp+60h] [rbp+1Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
  memset(v9, 0, sizeof(v9));
  *((_QWORD *)&v9[0] + 1) = 0LL;
  *(_QWORD *)&v9[1] = &DestinationString;
  LODWORD(v9[0]) = 48;
  DWORD2(v9[1]) = 64;
  v9[2] = 0LL;
  ValueKey = NtOpenKey();
  if ( ValueKey >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 532LL);
    if ( Heap )
    {
      RtlInitUnicodeString(&v8, L"BuildLabEx");
      ValueKey = NtQueryValueKey();
      if ( ValueKey >= 0 )
        memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      ValueKey = -1073741801;
    }
    NtClose(a2);
  }
  return (unsigned int)ValueKey;
}
