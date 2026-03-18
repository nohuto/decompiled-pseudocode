/*
 * XREFs of ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0464
 * Callers:
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C01C052C (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C01C0D20 (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

struct tagPOINTERRAWDATA *__fastcall CopyRawDataList(const struct tagPOINTERINPUTFRAME *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  struct tagPOINTERRAWDATA *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  void *v8; // rax

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    if ( !v1 )
      return v3;
    v4 = Win32AllocPool(32LL, 1685222229LL);
    v7 = v4;
    if ( !v4 )
      break;
    *(_OWORD *)v4 = *(_OWORD *)v1;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v1 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    v8 = (void *)Win32AllocPool(*(unsigned int *)(v1 + 8), 1685222229LL);
    *(_QWORD *)(v7 + 16) = v8;
    if ( !v8 )
      break;
    memmove(v8, *(const void **)(v1 + 16), *(unsigned int *)(v1 + 8));
    if ( v2 )
      *(_QWORD *)(v2 + 24) = v7;
    else
      v3 = (struct tagPOINTERRAWDATA *)v7;
    v1 = *(_QWORD *)(v1 + 24);
    v2 = v7;
  }
  if ( v3 )
    FreePointerRawDataList(v3);
  if ( v7 )
    Win32FreePool(v7, v5, v6);
  return 0LL;
}
