/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800EA540
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpHpRemoteStackSerializeWriter(void *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  size_t *v6; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  size_t v9; // rcx
  size_t v10; // rax
  size_t v11; // rcx
  __int64 result; // rax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = (size_t *)(a3 + 56);
    if ( Size + *(_QWORD *)(a3 + 72) <= *(_QWORD *)(a3 + 56) )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 72) + *(_QWORD *)(a3 + 48)), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      v7 = (_QWORD *)(a3 + 64);
      v8 = (_QWORD *)(a3 + 48);
      while ( 1 )
      {
        memmove((void *)(*v8 + *(_QWORD *)(a3 + 72)), Src, *v6 - *(_QWORD *)(a3 + 72));
        v9 = *v6;
        *v7 += *v6;
        v4 += *(_QWORD *)(a3 + 72) - v9;
        if ( *v7 >= *(_QWORD *)(a3 + 8) )
          break;
        NtUnmapViewOfSection();
        v10 = *(_QWORD *)(a3 + 8) - *v7;
        *v8 = 0LL;
        v11 = *v6;
        if ( *v6 >= v10 )
          v11 = *(_QWORD *)(a3 + 8) - *v7;
        *v6 = v11;
        result = ZwMapViewOfSection();
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        if ( v4 <= *v6 )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0LL;
}
