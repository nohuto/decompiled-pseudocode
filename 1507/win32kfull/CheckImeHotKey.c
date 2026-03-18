/*
 * XREFs of CheckImeHotKey @ 0x1C00479A0
 * Callers:
 *     xxxImmProcessKey @ 0x1C0047818 (xxxImmProcessKey.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0047BD8 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(__int64 a1, unsigned int a2, int a3)
{
  int v5; // edi
  struct _tagIMEHOTKEYOBJ *result; // rax
  int v7; // r10d
  struct _tagIMEHOTKEYOBJ *v8; // rcx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r8d

  if ( a3 < 0 )
  {
    v5 = 1;
    if ( dword_1C0322D90 != a2 )
    {
      dword_1C0322D90 = 0;
      return 0LL;
    }
    dword_1C0322D90 = 0;
  }
  else
  {
    v5 = 0;
  }
  v7 = ((*(_BYTE *)(a1 + 224) & 0x40) != 0 ? 0x4002 : 0) | ((*(_BYTE *)(a1 + 224) & 0x10) != 0 ? 0x8002 : 0) | ((*(_BYTE *)(a1 + 224) & 4) != 0 ? 0x4004 : 0) | ((*(_BYTE *)(a1 + 224) & 1) != 0 ? 0x8004 : 0);
  v8 = (*(_BYTE *)(a1 + 225) & 1) != 0 ? (struct _tagIMEHOTKEYOBJ *)0x8001 : 0LL;
  v9 = ((*(_BYTE *)(a1 + 225) & 4) != 0 ? 0x4001 : 0) | (unsigned int)v8 | v7;
  if ( a2 - 16 <= 2 )
  {
    v10 = (v9 & 5) + (((unsigned __int8)(v9 & 7) >> 1) & 5);
    v8 = (struct _tagIMEHOTKEYOBJ *)(v10 & 3);
    if ( (_DWORD)v8 + ((v10 >> 2) & 3) == 1 )
    {
      v11 = dword_1C032301C;
      if ( (a3 & 0x40000000) == 0 )
        v11 = v9 & 7;
      dword_1C032301C = v11;
    }
  }
  else
  {
    dword_1C032301C = 0;
  }
  result = FindImeHotKeyByKey(v8, v9 & 0xF, (unsigned __int16)v9 & 0xC000, a2);
  if ( !result )
    return 0LL;
  if ( v5 )
  {
    v12 = *((_DWORD *)result + 4);
    if ( (v12 & 0x40801) != 264193 && (v12 & 0x10804) != 67588 && (v12 & 0x20802) != 133122 )
    {
      if ( (v12 & 0x800) == 0 )
        return 0LL;
    }
    else if ( dword_1C032301C != (v12 & 7) )
    {
      return 0LL;
    }
    dword_1C032301C = 0;
    return result;
  }
  if ( (*((_DWORD *)result + 4) & 0x800) != 0 )
  {
    dword_1C0322D90 = a2;
    return 0LL;
  }
  return result;
}
