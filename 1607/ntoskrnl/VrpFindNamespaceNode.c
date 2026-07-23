/*
 * XREFs of VrpFindNamespaceNode @ 0x140614D6C
 * Callers:
 *     VrpFindBestMatchNamespaceNode @ 0x140614D34 (VrpFindBestMatchNamespaceNode.c)
 *     VrpFindExactNamespaceNode @ 0x140614D50 (VrpFindExactNamespaceNode.c)
 * Callees:
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     VrpComparePath @ 0x140617C8C (VrpComparePath.c)
 */

__int64 __fastcall VrpFindNamespaceNode(ULONGLONG *a1, __int64 a2, int a3, ULONGLONG *a4, unsigned __int64 *a5)
{
  ULONGLONG v5; // rax
  ULONGLONG v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1[6];
  v6 = 0LL;
  v17 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v6 < v5 )
      {
        if ( ULongLongMult(a1[5], v6, &pullResult) < 0
          || (v13 = (_QWORD *)(a1[9] + pullResult), (unsigned __int64)v13 < a1[9]) )
        {
          v13 = 0LL;
        }
      }
      v14 = *v13;
      v15 = VrpComparePath(a2, *v13, &v17);
      if ( !v15 )
        break;
      if ( a3 == 1 && v17 > v7 )
      {
        v7 = v17;
        v8 = v14;
      }
      if ( v15 >= 0 )
      {
        v5 = a1[6];
        if ( ++v6 < v5 )
          continue;
      }
      goto LABEL_14;
    }
    v7 = v17;
    v8 = v14;
  }
LABEL_14:
  if ( a5 )
    *a5 = v7;
  if ( a4 )
    *a4 = v6;
  return v8;
}
