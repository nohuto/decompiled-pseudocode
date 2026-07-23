/*
 * XREFs of IoGetDumpHiberRanges @ 0x140113318
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 */

void __fastcall IoGetDumpHiberRanges(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  void *v4; // r8
  PIMAGE_NT_HEADERS v5; // rax
  __int64 ***v6; // rdi
  __int64 **i; // rbx
  ULONG_PTR v8; // r9

  v2 = *(_QWORD *)(a2 + 272);
  if ( !v2 )
    return;
  if ( (unsigned int)(*(_DWORD *)v2 - 2) > 2 || (unsigned int)(*(_DWORD *)(v2 + 4) - 48) > 0x38 )
  {
    v4 = *(void **)(v2 + 24);
    if ( !v4 )
      goto LABEL_5;
    v8 = *(unsigned int *)(v2 + 40);
LABEL_14:
    PoSetHiberRange(0LL, 0x10000u, v4, v8, 0x66756263u);
    goto LABEL_5;
  }
  v4 = *(void **)(v2 + 16);
  if ( v4 )
  {
    v8 = *(unsigned int *)(v2 + 24);
    goto LABEL_14;
  }
LABEL_5:
  if ( CrashdmpImageBase )
  {
    v5 = RtlImageNtHeader(CrashdmpImageBase);
    PoSetHiberRange(0LL, 0x10000u, CrashdmpImageBase, v5->OptionalHeader.SizeOfImage, 0x676D4944u);
  }
  v6 = (__int64 ***)(a2 + 296);
  for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
    PoSetHiberRange(0LL, 0x10000u, i[3], *((unsigned int *)i + 8), 0x676D4944u);
}
