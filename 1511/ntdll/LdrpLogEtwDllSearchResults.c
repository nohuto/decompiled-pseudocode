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
  _WORD *Heap; // rbx
  int UnicodeStringFromPathElement; // r13d
  int v7; // r15d
  int v8; // r12d
  char *v9; // rax
  char *v10; // r14
  char *v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // edi
  char *v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // edi
  char *v17; // rbx
  unsigned int v18; // edi
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING v20; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING v21; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF

  v20.Length = 0;
  *(_QWORD *)&v20.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v20.Buffer + 2) = 0;
  HIWORD(v20.Buffer) = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v22.Length = 0;
  *(_QWORD *)&v22.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v22.Buffer + 2) = 0;
  HIWORD(v22.Buffer) = 0;
  v21.Length = 0;
  *(_QWORD *)&v21.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v21.Buffer + 2) = 0;
  HIWORD(v21.Buffer) = 0;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x248uLL);
  if ( Heap )
  {
    Heap[3] = 5332;
    *((_DWORD *)Heap + 8) = *(_DWORD *)(a2 + 24);
    *((_DWORD *)Heap + 9) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *((_DWORD *)Heap + 10) = a1;
    *((_DWORD *)Heap + 11) = *(_DWORD *)(a2 + 28);
    LdrpEventAddUnicodeString(a2, Heap + 24, 0x214u, &v23);
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v23 + 16, Heap);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( (a1 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v20);
      v7 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 0LL, &v22);
      v8 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 5LL, &v21);
      v9 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xCA0uLL);
      v10 = v9;
      if ( v9 )
      {
        v23 = 0;
        v11 = v9 + 36;
        *((_DWORD *)v9 + 8) = a1;
        *((_WORD *)v9 + 3) = 5333;
        LdrpEventAddUnicodeString((__int64)&UnicodeString, (_WORD *)v9 + 18, 0xC78u, &v23);
        v12 = 3192 - v23;
        v13 = v23 + 4;
        v14 = &v11[2 * ((unsigned __int64)v23 >> 1)];
        LdrpEventAddUnicodeString((__int64)&v20, v14, 3192 - v23, &v23);
        v15 = v12 - v23;
        v16 = v23 + v13;
        v17 = &v14[2 * ((unsigned __int64)v23 >> 1)];
        LdrpEventAddUnicodeString((__int64)&v22, v17, v15, &v23);
        v18 = v23 + v16;
        LdrpEventAddUnicodeString((__int64)&v21, &v17[2 * ((unsigned __int64)v23 >> 1)], v15 - v23, &v23);
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v18 + v23, v10);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( UnicodeStringFromPathElement >= 0 )
        RtlFreeAnsiString(&v20);
      if ( v8 >= 0 )
        RtlFreeAnsiString(&v21);
      if ( v7 >= 0 )
        RtlFreeAnsiString(&v22);
    }
  }
}
