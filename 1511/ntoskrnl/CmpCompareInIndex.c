/*
 * XREFs of CmpCompareInIndex @ 0x1403D9DB0
 * Callers:
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1403D9A84 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1403D9BC0 (CmpFindSubKeyInRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1403FBB80 (CmpDoCompareKeyName.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareInIndex(__int64 a1, const UNICODE_STRING *a2, unsigned int a3, __int16 *a4, _DWORD *a5)
{
  __int16 v5; // r10
  _DWORD *v7; // rdi
  bool v9; // zf
  __int64 v11; // rbp
  unsigned int v12; // r15d
  __int16 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int8 *v16; // rbx
  unsigned __int16 v17; // r12
  WCHAR *Buffer; // rdi
  unsigned __int16 v19; // r14
  WCHAR v20; // si
  unsigned int v21; // ebp
  LONG v22; // esi
  __int64 result; // rax
  unsigned int v24; // edx
  _BYTE *v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r12d
  wchar_t *v28; // rcx
  WCHAR v29; // cx
  unsigned int v30; // r14d
  int v31; // edi
  int v32; // eax
  int v33; // edi
  __int16 *v34; // rbx
  unsigned int v35; // eax
  __int16 *v36; // [rsp+20h] [rbp-48h]
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+20h] BYREF

  v5 = *a4;
  v7 = a5;
  v9 = ((*a4 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v9 )
  {
    v34 = &a4[2 * a3];
    v35 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v34 + 1));
    v12 = v35;
    if ( v35 != 2 )
    {
      if ( !v35 )
        *v7 = *((_DWORD *)v34 + 1);
      return v12;
    }
    return 2LL;
  }
  v11 = 4LL * a3;
  v12 = 0;
  v13 = &a4[v11 + 2];
  v36 = v13;
  if ( v5 != 26220 )
    goto LABEL_3;
  v24 = 4;
  v25 = v13 + 2;
  v26 = 0;
  while ( *v25 )
  {
    ++v26;
    ++v25;
    if ( v26 >= 4 )
      goto LABEL_21;
  }
  v24 = v26;
LABEL_21:
  v27 = 0;
  if ( a2->Length >> 1 < v24 )
    v24 = a2->Length >> 1;
  v38 = v24;
  if ( !v24 )
  {
LABEL_3:
    v14 = *(unsigned int *)v13;
    v38 = -1;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(a1 + 8))(a1, v14, &v38);
    if ( v15 )
    {
      if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
      {
        v16 = (unsigned __int8 *)(v15 + 76);
        v17 = a2->Length >> 1;
        Buffer = a2->Buffer;
        v19 = *(_WORD *)(v15 + 72);
        if ( v17 )
        {
          while ( v19 )
          {
            v20 = *Buffer++;
            v21 = *v16++;
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 = RtlUpcaseUnicodeChar(v20);
                else
                  v20 -= 32;
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                  LOWORD(v21) = RtlUpcaseUnicodeChar(v21);
                else
                  LOWORD(v21) = v21 - 32;
              }
              v22 = v20 - (unsigned __int16)v21;
              if ( v22 )
                goto LABEL_13;
            }
            --v19;
            if ( !--v17 )
              break;
          }
        }
        v22 = v17 - v19;
LABEL_13:
        v13 = v36;
      }
      else
      {
        String2.Buffer = (wchar_t *)(v15 + 76);
        String2.Length = *(_WORD *)(v15 + 72);
        String2.MaximumLength = String2.Length;
        v22 = RtlCompareUnicodeString(a2, &String2, 1u);
      }
      (*(void (__fastcall **)(__int64, unsigned int *))(a1 + 16))(a1, &v38);
      if ( v22 )
      {
        v12 = 1;
        if ( v22 < 0 )
          return (unsigned int)-1;
      }
      else
      {
        *a5 = *(_DWORD *)v13;
      }
      return v12;
    }
    return 2LL;
  }
  v28 = a2->Buffer;
  *(_QWORD *)&String2.Length = v28;
  while ( 1 )
  {
    v29 = v28[v27];
    v30 = *((unsigned __int8 *)&a4[v11 + 4] + v27);
    if ( v29 < 0x61u )
      v31 = v29;
    else
      v31 = v29 > 0x7Au ? RtlUpcaseUnicodeChar(v29) : v29 - 32;
    if ( v30 < 0x61 )
      v32 = v30;
    else
      v32 = v30 > 0x7A ? RtlUpcaseUnicodeChar(v30) : v30 - 32;
    v33 = v31 - v32;
    if ( v33 )
      break;
    v28 = *(wchar_t **)&String2.Length;
    if ( ++v27 >= v38 )
    {
      v13 = v36;
      goto LABEL_3;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v33 > 0 )
    return 1LL;
  return result;
}
