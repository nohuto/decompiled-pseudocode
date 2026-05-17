/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x1800C9DB8
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800C9CAC (LdrpEventAddUnicodeString.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800CA534 (LdrpMakeUnicodeStringFromPathElement.c)
 */

void __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  void *ProcessHeap; // rcx
  unsigned __int64 Heap; // rbx
  int UnicodeStringFromPathElement; // r13d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // esi
  _WORD *v13; // rbx
  unsigned int v14; // esi
  _WORD *v15; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF

  v17.Length = 0;
  *(_QWORD *)&v17.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v17.Buffer + 2) = 0;
  HIWORD(v17.Buffer) = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v19.Length = 0;
  *(_QWORD *)&v19.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v19.Buffer + 2) = 0;
  HIWORD(v19.Buffer) = 0;
  v18.Length = 0;
  *(_QWORD *)&v18.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v18.Buffer + 2) = 0;
  HIWORD(v18.Buffer) = 0;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 584LL);
  if ( Heap )
  {
    *(_WORD *)(Heap + 6) = 5332;
    *(_DWORD *)(Heap + 32) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(Heap + 36) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *(_DWORD *)(Heap + 40) = a1;
    *(_DWORD *)(Heap + 44) = *(_DWORD *)(a2 + 28);
    LdrpEventAddUnicodeString(a2, (_WORD *)(Heap + 48), 0x214u, &v20);
    NtTraceEvent();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( (a1 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v17);
      v7 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 0LL, &v19);
      v8 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 5LL, &v18);
      v9 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 3232LL);
      v10 = v9;
      if ( v9 )
      {
        v20 = 0;
        v11 = v9 + 36;
        *(_DWORD *)(v9 + 32) = a1;
        *(_WORD *)(v9 + 6) = 5333;
        LdrpEventAddUnicodeString((__int64)&UnicodeString, (_WORD *)(v9 + 36), 0xC78u, &v20);
        v12 = 3192 - v20;
        v13 = (_WORD *)(v11 + 2 * ((unsigned __int64)v20 >> 1));
        LdrpEventAddUnicodeString((__int64)&v17, v13, 3192 - v20, &v20);
        v14 = v12 - v20;
        v15 = &v13[(unsigned __int64)v20 >> 1];
        LdrpEventAddUnicodeString((__int64)&v19, v15, v14, &v20);
        LdrpEventAddUnicodeString((__int64)&v18, &v15[(unsigned __int64)v20 >> 1], v14 - v20, &v20);
        NtTraceEvent();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( UnicodeStringFromPathElement >= 0 )
        RtlFreeAnsiString(&v17);
      if ( v8 >= 0 )
        RtlFreeAnsiString(&v18);
      if ( v7 >= 0 )
        RtlFreeAnsiString(&v19);
    }
  }
}
