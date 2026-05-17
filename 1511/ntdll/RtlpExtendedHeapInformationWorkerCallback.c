/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x1800E0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationWorkerCallback(_QWORD *Src, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rax

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return 3221225701LL;
  *(_QWORD *)(a2 + 32) += v2;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0LL;
  v6 = (_QWORD *)(a2 + 56);
  v7 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v7;
  if ( Src[1] + v7 <= *(_QWORD *)(a2 + 56) )
    goto LABEL_9;
  v8 = (_QWORD *)(a2 + 48);
  NtUnmapViewOfSection();
  *(_QWORD *)(a2 + 64) += *v6;
  v9 = *(_QWORD *)(a2 + 64);
  *v8 = 0LL;
  if ( v9 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection();
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
LABEL_9:
    memmove((void *)(*(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 48)), Src, Src[1]);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += Src[1];
    return 0LL;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0LL;
}
