/*
 * XREFs of LdrpInitializeTls @ 0x1800407A4
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlClearBits @ 0x1800404D0 (RtlClearBits.c)
 *     LdrpAllocateTls @ 0x180040D98 (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x180040FF4 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x180041A70 (RtlSetBits.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int64 v2; // rax
  int v3; // esi
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  void *Heap; // rax
  unsigned int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v0 = (__int64 *)qword_180145210;
  v8 = 0;
  if ( (__int64 *)qword_180145210 == &qword_180145210 )
    goto LABEL_6;
  do
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3, v1[6], 0LL, &v10);
    if ( *(_WORD *)(v10 + 24) == 523 )
    {
      v2 = RtlImageDirectoryEntryToData(v1[6], 1, 9u, &v9);
      v3 = v2;
      if ( v2 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            (__int64)"DLL \"%wZ\" has TLS information at %p\n");
        result = LdrpAllocateTlsEntry(v3, (_DWORD)v1, (unsigned int)&v8, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v1 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_180145210 );
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
    RtlSetBits(&LdrpTlsBitmap, 0LL, v4);
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
