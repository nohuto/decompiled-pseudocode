/*
 * XREFs of CmpCompareInIndex @ 0x1404F5A90
 * Callers:
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1404F5850 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50 (CmpFindSubKeyInLeafWithStatus.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x140606A64 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpCompareInIndex(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        _WORD *a5,
        __int64 a6)
{
  _WORD *v6; // r10
  _DWORD *v7; // rsi
  bool v8; // zf
  __int16 v10; // r8
  bool v11; // r12
  __int64 v12; // rdi
  __int64 v14; // rax
  _WORD *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // ebp
  __int64 result; // rax
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // r15d
  unsigned int v22; // eax
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // esi
  WCHAR v26; // cx
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rax
  LONG v33; // eax
  int v34; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v37; // [rsp+80h] [rbp+18h]

  v6 = a5;
  v7 = (_DWORD *)a6;
  v8 = a3 == 0LL;
  v10 = *a5;
  v11 = !v8;
  *(_DWORD *)a6 = -1;
  v12 = a1;
  v14 = a4;
  if ( ((v10 - 26220) & 0xFDFF) != 0 )
  {
    v15 = &a5[2 * a4];
    v16 = CmpDoCompareKeyName(a1, a2, a3, *((_DWORD *)v15 + 1));
    v17 = v16;
    if ( v16 != 2 )
    {
      if ( !v16 )
      {
        *v7 = *((_DWORD *)v15 + 1);
        return 0LL;
      }
      return v17;
    }
    return 2LL;
  }
  v19 = 8LL * a4;
  *(_QWORD *)&String2.Length = 8 * v14;
  v20 = (unsigned int *)&a5[4 * v14 + 2];
  v37 = v20;
  if ( v10 != 26220 )
  {
LABEL_34:
    v31 = *v20;
    a6 = 0xFFFFFFFFLL;
    v32 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v12 + 8))(v12, v31, &a6);
    if ( !v32 )
      return 2LL;
    if ( (*(_BYTE *)(v32 + 2) & 0x20) != 0 )
    {
      if ( a3 )
        v33 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v32 + 76, *(unsigned __int16 *)(v32 + 72));
      else
        v33 = CmpCompareCompressedName(
                a2,
                v32 + 76,
                *(unsigned __int16 *)(v32 + 72),
                0LL,
                *(_DWORD *)&String2.Length,
                String2.Buffer);
    }
    else
    {
      String2.Buffer = (wchar_t *)(v32 + 76);
      String2.Length = *(_WORD *)(v32 + 72);
      String2.MaximumLength = String2.Length;
      if ( a3 )
      {
        v34 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD, _QWORD, _QWORD))CmpCompareCompressedName)(
                      &String2,
                      *((_QWORD *)a3 + 1),
                      *a3,
                      0LL);
LABEL_46:
        (*(void (__fastcall **)(__int64, __int64 *))(v12 + 16))(v12, &a6);
        if ( !v34 )
        {
          *v7 = *v37;
          return 0LL;
        }
        v17 = 1;
        if ( v34 < 0 )
          return (unsigned int)-1;
        return v17;
      }
      v33 = RtlCompareUnicodeString(a2, &String2, 1u);
    }
    v34 = v33;
    goto LABEL_46;
  }
  v21 = 4;
  v22 = 0;
  v23 = v20 + 1;
  while ( *v23 )
  {
    ++v22;
    ++v23;
    if ( v22 >= 4 )
      goto LABEL_11;
  }
  v21 = v22;
LABEL_11:
  if ( v8 )
    v24 = a2->Length >> 1;
  else
    v24 = *a3;
  v25 = 0;
  if ( v24 < v21 )
    v21 = v24;
  if ( !v21 )
  {
LABEL_33:
    v7 = (_DWORD *)a6;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v26 = v11 ? *(unsigned __int8 *)(*((_QWORD *)a3 + 1) + v25) : a2->Buffer[v25];
    v27 = *((unsigned __int8 *)v6 + v25 + v19 + 8);
    if ( v26 >= 0x61u )
      v28 = v26 <= 0x7Au ? v26 - 32 : RtlUpcaseUnicodeChar(v26);
    else
      v28 = v26;
    if ( v27 >= 0x61 )
      v29 = v27 <= 0x7A ? v27 - 32 : RtlUpcaseUnicodeChar(v27);
    else
      v29 = v27;
    v30 = v28 - v29;
    if ( v30 )
      break;
    v6 = a5;
    ++v25;
    v19 = *(_QWORD *)&String2.Length;
    if ( v25 >= v21 )
    {
      v12 = a1;
      v20 = v37;
      goto LABEL_33;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v30 > 0 )
    return 1LL;
  return result;
}
