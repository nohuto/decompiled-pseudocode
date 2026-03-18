/*
 * XREFs of SetImeHotKey @ 0x1C00F6794
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C00F6730 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C00F68A4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C00F68BC (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C00F6938 (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(struct _tagIMEHOTKEYOBJ *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  unsigned __int16 HotKeyLangID; // ax
  unsigned __int16 v10; // dx
  struct _tagIMEHOTKEYOBJ *v11; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  struct _tagIMEHOTKEYOBJ *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  int v19; // ecx
  __int64 *ImeHotKeyByID; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 *v23; // rax

  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1:
      ImeHotKeyByID = (__int64 *)FindImeHotKeyByID(a1, (unsigned int)a1);
      v21 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v19 = 87;
        goto LABEL_33;
      }
      v22 = (__int64 *)gpImeHotKeyListHeader;
      if ( ImeHotKeyByID == (__int64 *)gpImeHotKeyListHeader )
      {
        gpImeHotKeyListHeader = *ImeHotKeyByID;
      }
      else
      {
        if ( !gpImeHotKeyListHeader )
          return 0LL;
        while ( 1 )
        {
          v23 = (__int64 *)*v22;
          if ( (__int64 *)*v22 == v21 )
            break;
          v22 = (__int64 *)*v22;
          if ( !v23 )
            return 0LL;
        }
        *v22 = *v21;
      }
      Win32FreePool(v21);
      return 1LL;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(v11, v10 & 0xF, v10 & 0xC000, a3, HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v13, v8);
LABEL_6:
          if ( !ImeHotKeyByKeyWithLang )
          {
            v14 = Win32AllocPool(32LL);
            if ( v14 )
            {
              *(_QWORD *)v14 = 0LL;
              *(_DWORD *)(v14 + 8) = v8;
              *(_DWORD *)(v14 + 16) = a2;
              *(_DWORD *)(v14 + 12) = a3;
              *(_QWORD *)(v14 + 24) = a4;
              v15 = (__int64 *)gpImeHotKeyListHeader;
              if ( gpImeHotKeyListHeader )
              {
                while ( *v15 )
                  v15 = (__int64 *)*v15;
                *v15 = v14;
              }
              else
              {
                gpImeHotKeyListHeader = v14;
              }
              return 1LL;
            }
            v19 = 14;
            goto LABEL_33;
          }
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = a2;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_6;
        v19 = 1409;
LABEL_33:
        UserSetLastError(v19);
      }
      break;
    case 3:
      v17 = (_QWORD *)gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v18 = (_QWORD *)*v17;
          Win32FreePool(v17);
          v17 = v18;
        }
        while ( v18 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
