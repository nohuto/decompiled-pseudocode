/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x180043E6C
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x180040CFC (RtlpMuiRegGetOrAddString.c)
 *     LdrpLangFallbackListFindNode @ 0x180043CD0 (LdrpLangFallbackListFindNode.c)
 * Callees:
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, const wchar_t *a2, char a3, _DWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  const wchar_t *v10; // rcx
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rax

  if ( a1 && a2 && (LODWORD(v8) = 0, *(_WORD *)(a1 + 6)) )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (const wchar_t *)(*(_QWORD *)(a1 + 24) + 2LL * *(__int16 *)(v9 + *(_QWORD *)(a1 + 16)));
      if ( v10 == a2 || !wcsicmp(v10, a2) )
        break;
      LODWORD(v8) = v8 + 1;
      v9 += 2LL;
      if ( (int)v8 >= *(unsigned __int16 *)(a1 + 6) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v8) = -1;
  }
  if ( a4 )
    *a4 = 0;
  if ( (int)v8 >= 0 )
    return (unsigned int)v8;
  if ( a1 && a2 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a2[v12] );
    v13 = *(unsigned __int16 *)(a1 + 10);
    v14 = v12 + 1;
    if ( v14 + v13 > *(unsigned __int16 *)(a1 + 8) )
    {
      if ( a4 )
        *a4 = v14;
    }
    else if ( a3 )
    {
      v15 = *(_WORD *)(a1 + 6);
      if ( v15 < *(_WORD *)(a1 + 4) && is_mul_ok(v14, 2uLL) )
      {
        v8 = v15;
        *(_WORD *)(a1 + 10) = v13 + 1;
        v16 = *(_QWORD *)(a1 + 24);
        *(_WORD *)(a1 + 6) = v15 + 1;
        memmove((void *)(v16 + 2LL * (__int16)v13), a2, 2 * v14);
        v17 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 10) += v14;
        *(_WORD *)(v17 + 2 * v8) = v13;
        return (unsigned int)v8;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
