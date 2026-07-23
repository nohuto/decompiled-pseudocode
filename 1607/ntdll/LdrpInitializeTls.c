/*
 * XREFs of LdrpInitializeTls @ 0x180051178
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF64 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x1800506B0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180050B30 (RtlClearBits.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  PVOID v2; // rax
  __int64 v3; // rsi
  ULONG v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned int *Heap; // rax
  ULONG NumberToSet; // [rsp+70h] [rbp+8h] BYREF
  ULONG Size; // [rsp+78h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp+18h] BYREF

  v0 = (__int64 *)qword_1801523D0;
  NumberToSet = 0;
  if ( (__int64 *)qword_1801523D0 == &qword_1801523D0 )
    goto LABEL_6;
  do
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
    if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      v2 = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 9u, &Size);
      v3 = (__int64)v2;
      if ( v2 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            (__int64)"DLL \"%wZ\" has TLS information at %p\n",
            v1 + 72,
            v2);
        result = LdrpAllocateTlsEntry(v3, v1, (int *)&NumberToSet, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        *(_WORD *)(v1 + 110) = -1;
      }
    }
  }
  while ( v0 != &qword_1801523D0 );
  v4 = NumberToSet;
  if ( NumberToSet )
  {
    v6 = NumberToSet + 8;
    if ( NumberToSet + 8 > 0x20 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(
                               NtCurrentPeb()->ProcessHeap,
                               NtdllBaseTag + 786432,
                               4 * (((unsigned __int64)v6 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      LdrpActualBitmapSize = ((unsigned __int64)v6 + 31) >> 5;
      v4 = NumberToSet;
    }
    else
    {
      Heap = (unsigned int *)&LdrpStaticTlsBitmapVector;
      LdrpActualBitmapSize = 1LL;
    }
    LdrpTlsBitmap.SizeOfBitMap = v6;
    LdrpTlsBitmap.Buffer = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0, v4);
    RtlClearBits(&LdrpTlsBitmap, v4, 8u);
  }
  else
  {
LABEL_6:
    LdrpTlsBitmap.SizeOfBitMap = 0;
    LdrpTlsBitmap.Buffer = 0LL;
  }
  return LdrpAllocateTls();
}
