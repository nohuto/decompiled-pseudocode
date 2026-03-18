/*
 * XREFs of ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C010B9DC
 * Callers:
 *     CheckImeHotKey @ 0x1C010B788 (CheckImeHotKey.c)
 * Callees:
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C0118B58 (-GetHotKeyLangID@@YAGK@Z.c)
 *     ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1C01E3518 (-GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKey(struct _tagIMEHOTKEYOBJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // r15d
  int v6; // r14d
  int v7; // r13d
  __int64 v8; // rdi
  __int64 ActiveHKL; // r12
  int v10; // esi
  int v12; // ecx
  int v13; // edx
  unsigned __int16 HotKeyLangID; // ax
  int LangIdMatchLevel; // eax

  v4 = gpImeHotKeyListHeader;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = 0LL;
  ActiveHKL = GetActiveHKL((__int64)a1, a2, a3, a4);
  v10 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (struct _tagIMEHOTKEYOBJ *)v8;
    if ( *(_DWORD *)(v4 + 12) == v5 )
    {
      v12 = *(_DWORD *)(v4 + 16);
      v13 = 0;
      if ( (v12 & 0x400) != 0 )
      {
        v13 = 1;
      }
      else if ( (*(_DWORD *)(v4 + 16) & 0xF) != v7 )
      {
        goto LABEL_4;
      }
      if ( (*(_DWORD *)(v4 + 16) & 0xC000) == v6 || ((unsigned __int16)v6 & (unsigned __int16)v12 & 0xC000) != 0 )
        v13 = 1;
      if ( v13 )
        break;
    }
LABEL_4:
    v4 = *(_QWORD *)v4;
  }
  HotKeyLangID = GetHotKeyLangID(*(_DWORD *)(v4 + 8));
  LangIdMatchLevel = GetLangIdMatchLevel((HKL)ActiveHKL, HotKeyLangID);
  if ( LangIdMatchLevel != 3 )
  {
    if ( (ActiveHKL & 0x3FF) != 0x12 && LangIdMatchLevel && LangIdMatchLevel > v10 )
    {
      v10 = LangIdMatchLevel;
      v8 = v4;
    }
    goto LABEL_4;
  }
  return (struct _tagIMEHOTKEYOBJ *)v4;
}
