/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x1800112B0
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001135C (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180011320 (RtlInitAnsiString.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpGetDelayloadAPIInfo @ 0x18007B7EC (LdrpGetDelayloadAPIInfo.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     sprintf_s @ 0x1800A1E20 (sprintf_s.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     LdrpEventAddAnsiString @ 0x1800D11EC (LdrpEventAddAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800D1250 (LdrpEventAddUnicodeString.c)
 */

char __fastcall LdrpLogDelayLoadTrigger(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _PEB *Heap; // rax
  int v7; // edi
  char *v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // r13d
  struct _PEB *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rbx
  unsigned int v18; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+34h] [rbp-4Ch] BYREF
  CHAR *v20; // [rsp+38h] [rbp-48h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _STRING v22; // [rsp+50h] [rbp-30h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-20h] BYREF

  LOBYTE(Heap) = MEMORY[0x7FFE0384];
  v7 = a2;
  if ( MEMORY[0x7FFE0384] )
  {
    if ( (MEMORY[0x7FFE0385] & 0x10) != 0
      || MEMORY[0x7FFE0384]
      && (Heap = NtCurrentPeb(), (Heap->TracingFlags & 4) != 0)
      && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      v20 = (CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
      RtlInitAnsiString(&DestinationString, v20);
      LdrpGetDelayloadAPIInfo(a1, v7, a4, (unsigned int)&v20, (__int64)&v19);
      v9 = v20;
      if ( !v20 )
      {
        sprintf_s(Buffer, 0xCuLL, "#%u", v19);
        v9 = Buffer;
      }
      RtlInitAnsiString(&v22, v9);
      v10 = *(unsigned __int16 *)(a1 + 72)
          + *(unsigned __int16 *)(a3 + 72)
          + 2 * (DestinationString.Length + v22.Length + 4);
      v11 = v10 + 36;
      Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v10 + 36);
      v12 = Heap;
      if ( Heap )
      {
        LODWORD(Heap->ProcessParameters) = 3;
        *(_WORD *)&Heap->Padding0[2] = 5334;
        LdrpEventAddUnicodeString(a1 + 72, (char *)&Heap->ProcessParameters + 4, v10, &v18);
        v13 = v10 - v18;
        v14 = (__int64)&v12->ProcessParameters + v18 + 4;
        LdrpEventAddUnicodeString(a3 + 72, v14, v13, &v18);
        v15 = v13 - v18;
        v16 = v18 + v14;
        LdrpEventAddAnsiString(&DestinationString, v16, v15, &v18);
        LdrpEventAddAnsiString(&v22, v16 + v18, v15 - v18, &v18);
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v11 - 32, v12);
        LOBYTE(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
    }
  }
  return (char)Heap;
}
