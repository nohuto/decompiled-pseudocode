/*
 * XREFs of LdrpInitializeTls @ 0x180051188
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateTlsEntry @ 0x18004FF74 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x1800506C0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180050B40 (RtlClearBits.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  void *Heap; // rax
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v0 = (__int64 *)qword_1801523D0;
  v8 = 0;
  if ( (__int64 *)qword_1801523D0 == &qword_1801523D0 )
    goto LABEL_6;
  do
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v10);
    if ( *(_WORD *)(v10 + 24) == 523 )
    {
      v2 = RtlImageDirectoryEntryToData(*(_QWORD *)(v1 + 48), 1, 9u, &v9);
      v3 = v2;
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
        result = LdrpAllocateTlsEntry(v3, v1, (int *)&v8, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        *(_WORD *)(v1 + 110) = -1;
      }
    }
  }
  while ( v0 != &qword_1801523D0 );
  v4 = v8;
  if ( v8 )
  {
    v6 = v8 + 8;
    if ( v8 + 8 > 0x20 )
    {
      Heap = (void *)RtlAllocateHeap(
                       (__int64)NtCurrentPeb()->ProcessHeap,
                       NtdllBaseTag + 786432,
                       4 * (((unsigned __int64)v6 + 31) >> 5));
      if ( !Heap )
        return 3221225495LL;
      LdrpActualBitmapSize = ((unsigned __int64)v6 + 31) >> 5;
      v4 = v8;
    }
    else
    {
      Heap = &LdrpStaticTlsBitmapVector;
      LdrpActualBitmapSize = 1LL;
    }
    LdrpTlsBitmap = v6;
    Src = Heap;
    RtlSetBits((__int64)&LdrpTlsBitmap, 0, v4);
    RtlClearBits((__int64)&LdrpTlsBitmap, v4, 8u);
  }
  else
  {
LABEL_6:
    LdrpTlsBitmap = 0;
    Src = 0LL;
  }
  return LdrpAllocateTls();
}
