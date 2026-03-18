/*
 * XREFs of MiCaptureImageExceptionValues @ 0x14048218C
 * Callers:
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400055D0 (RtlSetAllBits.c)
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
 *     RtlMarkExceptionHandlingPages @ 0x140482230 (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  char *v1; // rbp
  PIMAGE_NT_HEADERS v3; // rax
  struct _RTL_BITMAP *v4; // rdi
  _DWORD *p_Signature; // r14
  unsigned int v6; // esi
  int v7; // edx
  char *v8; // r8
  int v9; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(char **)(a1 + 48);
  v3 = RtlImageNtHeader(v1);
  v4 = *(struct _RTL_BITMAP **)(a1 + 240);
  p_Signature = &v3->Signature;
  v6 = *(_DWORD *)(a1 + 64) >> 12;
  v4->SizeOfBitMap = v6;
  v4->Buffer = &v4[1].SizeOfBitMap;
  RtlClearAllBits(v4);
  if ( p_Signature[33] > 3u )
  {
    v7 = *(_DWORD *)(a1 + 152);
    v8 = &v1[p_Signature[40]];
    *(_QWORD *)(a1 + 16) = v8;
    v9 = p_Signature[41];
    *(_DWORD *)(a1 + 24) = v9;
    if ( (int)RtlMarkExceptionHandlingPages((int)v1, v7, (int)v8, v9, v4) < 0 )
    {
      LODWORD(BitMapHeader) = v6;
      DbgPrintEx(
        0x66u,
        0,
        "Image %wZ has unrecognized unwind information causing a charge of %u pages\n",
        a1 + 88,
        BitMapHeader);
      RtlSetAllBits(v4);
    }
  }
}
