/*
 * XREFs of CmpComputeKcbConvKey @ 0x1405E0E78
 * Callers:
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405E11A4 (CmpRehashKcbSubtree.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpComputeKcbConvKey(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // r15d
  unsigned __int8 *v6; // rsi
  WCHAR *v7; // r14
  int v8; // ebp
  WCHAR v9; // ax
  int v10; // ecx

  v1 = *(_QWORD *)(a1 + 72);
  v2 = 0;
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 16);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = 0;
  v5 = *(unsigned __int16 *)(v3 + 24);
  v6 = (unsigned __int8 *)(v3 + 26);
  v7 = (WCHAR *)(v3 + 26);
  if ( *(_WORD *)(v3 + 24) )
  {
    v8 = *(_DWORD *)v3 & 1;
    do
    {
      if ( v8 )
      {
        v9 = *v6++;
        ++v4;
      }
      else
      {
        v9 = *v7++;
        v4 += 2;
      }
      if ( v9 >= 0x61u )
      {
        if ( v9 <= 0x7Au )
        {
          v10 = v9 - 32;
          goto LABEL_13;
        }
        v9 = RtlUpcaseUnicodeChar(v9);
      }
      v10 = v9;
LABEL_13:
      v2 = v10 + 37 * v2;
    }
    while ( v4 < v5 );
  }
  return v2;
}
