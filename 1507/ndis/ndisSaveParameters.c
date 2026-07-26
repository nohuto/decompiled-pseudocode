/*
 * XREFs of ndisSaveParameters @ 0x1C00AE950
 * Callers:
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 */

__int64 __fastcall ndisSaveParameters(__int64 a1, int a2, _DWORD *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  size_t v6; // rbp
  unsigned int v9; // ecx
  char *PoolWithTag; // rax
  _QWORD *v11; // rdi
  int *v12; // rcx
  int v13; // eax

  v6 = a4;
  v9 = 32;
  if ( ((a2 - 1) & 0xFFFFFFF9) == 0 && a2 != 5 )
    v9 = a4 + 32;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6E70444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = (int *)(PoolWithTag + 8);
  *(_QWORD *)a6 = PoolWithTag + 8;
  if ( a2 == 4 )
  {
    *v12 = 0;
    *(_DWORD *)(*(_QWORD *)a6 + 8LL) = *a3;
  }
  else
  {
    if ( a2 == 1 )
    {
      v13 = 2;
LABEL_8:
      *v12 = v13;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = v11 + 4;
      memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
      *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
      *(_WORD *)(*(_QWORD *)a6 + 10LL) = v6;
      if ( a2 == 1 && !*((_BYTE *)a3 + (unsigned int)(v6 - 1)) && !*((_BYTE *)a3 + (unsigned int)(v6 - 2)) )
        *(_WORD *)(*(_QWORD *)a6 + 8LL) -= 2;
      goto LABEL_12;
    }
    v13 = 3;
    if ( a2 == 7 )
      goto LABEL_8;
    if ( a2 != 3 )
    {
      ExFreePoolWithTag(v11, 0);
      return 3221225524LL;
    }
    *v12 = 4;
    *(_QWORD *)(*(_QWORD *)a6 + 16LL) = a3;
    *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
    *(_QWORD *)(*(_QWORD *)a6 + 16LL) = v11 + 4;
    memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
  }
LABEL_12:
  if ( a5 )
  {
    *v11 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 24) = v11;
  }
  return 0LL;
}
