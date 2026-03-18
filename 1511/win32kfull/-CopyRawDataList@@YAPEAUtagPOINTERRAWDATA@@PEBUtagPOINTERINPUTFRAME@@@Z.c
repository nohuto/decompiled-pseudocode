/*
 * XREFs of ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F140
 * Callers:
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022F208 (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F92C (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

struct tagPOINTERRAWDATA *__fastcall CopyRawDataList(const struct tagPOINTERINPUTFRAME *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  struct tagPOINTERRAWDATA *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax

  v1 = *((_QWORD *)a1 + 8);
  v2 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    if ( !v1 )
      return v3;
    v4 = Win32AllocPool(32LL);
    v5 = v4;
    if ( !v4 )
      break;
    *(_OWORD *)v4 = *(_OWORD *)v1;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v1 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    v6 = (void *)Win32AllocPool(*(unsigned int *)(v1 + 8));
    *(_QWORD *)(v5 + 16) = v6;
    if ( !v6 )
      break;
    memmove(v6, *(const void **)(v1 + 16), *(unsigned int *)(v1 + 8));
    if ( v2 )
      *(_QWORD *)(v2 + 24) = v5;
    else
      v3 = (struct tagPOINTERRAWDATA *)v5;
    v1 = *(_QWORD *)(v1 + 24);
    v2 = v5;
  }
  if ( v3 )
    FreePointerRawDataList(v3);
  if ( v5 )
    Win32FreePool(v5);
  return 0LL;
}
