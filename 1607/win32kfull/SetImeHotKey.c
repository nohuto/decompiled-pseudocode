/*
 * XREFs of SetImeHotKey @ 0x1C01189B4
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C0118950 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C0118AC4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C0118ADC (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C0118B58 (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(struct _tagIMEHOTKEYOBJ *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  int v7; // esi
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
  __int64 v19; // rcx
  __int64 *ImeHotKeyByID; // rax
  __int64 v21; // r8
  __int64 *v22; // rdx
  __int64 *v23; // rcx
  __int64 *v24; // rax

  v6 = a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1:
      ImeHotKeyByID = (__int64 *)FindImeHotKeyByID(a1, (unsigned int)a1);
      v22 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v19 = 87LL;
        goto LABEL_33;
      }
      v23 = (__int64 *)gpImeHotKeyListHeader;
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
          v24 = (__int64 *)*v23;
          if ( (__int64 *)*v23 == v22 )
            break;
          v23 = (__int64 *)*v23;
          if ( !v24 )
            return 0LL;
        }
        *v23 = *v22;
      }
      Win32FreePool(v22, v22, v21);
      return 1LL;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(v11, v10 & 0xF, v10 & 0xC000, v6, HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v13, v8);
LABEL_6:
          if ( !ImeHotKeyByKeyWithLang )
          {
            v14 = Win32AllocPool(32LL, 1751741269LL);
            if ( v14 )
            {
              *(_QWORD *)v14 = 0LL;
              *(_DWORD *)(v14 + 8) = v8;
              *(_DWORD *)(v14 + 16) = v7;
              *(_DWORD *)(v14 + 12) = v6;
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
            v19 = 14LL;
            goto LABEL_33;
          }
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = v7;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = v6;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_6;
        v19 = 1409LL;
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
          Win32FreePool(v17, a2, a3);
          v17 = v18;
        }
        while ( v18 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
