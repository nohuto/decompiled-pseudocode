/*
 * XREFs of EtwpQueryRegString @ 0x180002B3C
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x180002994 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpQueryRegString(__int64 a1, void *a2, void *a3)
{
  int v4; // edi
  unsigned __int64 v5; // rax
  unsigned int v6; // edi
  __int64 Heap; // rbx
  unsigned int v9; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp+Fh] BYREF
  _OWORD v12[3]; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+6Fh] BYREF

  Handle = a2;
  v9 = 260;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
  memset(v12, 0, sizeof(v12));
  *((_QWORD *)&v12[0] + 1) = 0LL;
  *(_QWORD *)&v12[1] = &DestinationString;
  LODWORD(v12[0]) = 48;
  DWORD2(v12[1]) = 64;
  v12[2] = 0LL;
  v4 = NtOpenKey(&Handle, 131097LL, v12);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 2LL * v9;
  if ( v5 <= 0xFFFFFFFF )
  {
    v6 = v5 + 12;
    if ( (int)v5 + 12 >= (unsigned int)v5 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v6);
      if ( Heap )
      {
        RtlInitUnicodeString(&v11, L"BuildLabEx");
        v4 = NtQueryValueKey(Handle, &v11, 2LL, Heap, v6, &v9);
        if ( v4 >= 0 )
          memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
      }
      else
      {
        v4 = -1073741801;
      }
      NtClose(Handle);
      return (unsigned int)v4;
    }
  }
  NtClose(Handle);
  return 3221225621LL;
}
