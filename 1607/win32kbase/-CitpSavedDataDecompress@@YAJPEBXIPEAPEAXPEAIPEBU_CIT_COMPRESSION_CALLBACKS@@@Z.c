/*
 * XREFs of ?CitpSavedDataDecompress@@YAJPEBXIPEAPEAXPEAIPEBU_CIT_COMPRESSION_CALLBACKS@@@Z @ 0x1C00F7008
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall CitpSavedDataDecompress(
        UCHAR *a1,
        unsigned int a2,
        void **a3,
        unsigned int *a4,
        const struct _CIT_COMPRESSION_CALLBACKS *a5)
{
  NTSTATUS v8; // ebx
  const struct _CIT_COMPRESSION_CALLBACKS *v9; // r14
  void *v10; // rsi
  size_t v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  ULONG FinalUncompressedSize; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 < 8 || a2 != *(_DWORD *)a1 )
    return (unsigned int)-1073739509;
  v9 = a5;
  v10 = (void *)(*(__int64 (__fastcall **)(_QWORD))a5)(*((unsigned int *)a1 + 1));
  if ( !v10 )
    return (unsigned int)-1073741670;
  v11 = *((unsigned int *)a1 + 1);
  v12 = *(unsigned int *)a1;
  if ( v11 + 8 == v12 )
  {
    memmove(v10, a1 + 8, v11);
LABEL_8:
    v13 = *((_DWORD *)a1 + 1);
    *a3 = v10;
    v10 = 0LL;
    v8 = 0;
    *a4 = v13;
    goto LABEL_9;
  }
  FinalUncompressedSize = 0;
  v8 = RtlDecompressBuffer(2u, (PUCHAR)v10, v11, a1 + 8, v12 - 8, &FinalUncompressedSize);
  if ( v8 >= 0 )
  {
    if ( FinalUncompressedSize == *((_DWORD *)a1 + 1) )
      goto LABEL_8;
    v8 = -1073739509;
  }
LABEL_9:
  if ( v10 )
    (*((void (__fastcall **)(void *))v9 + 1))(v10);
  return (unsigned int)v8;
}
