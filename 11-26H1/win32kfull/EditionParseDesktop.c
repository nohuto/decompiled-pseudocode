/*
 * XREFs of EditionParseDesktop @ 0x1401E3580
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E3704 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 */

__int64 __fastcall EditionParseDesktop(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        int *a8,
        int a9,
        void **a10)
{
  unsigned int DesktopEx2; // esi
  bool v14; // bl
  _QWORD *i; // rdi
  const UNICODE_STRING *v16; // rax
  int v18; // ebx

  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( a8 )
  {
    v18 = *a8;
    if ( v18 != (unsigned int)W32GetCurrentWin32kSessionId((__int64)a1) )
      return 3221225485LL;
  }
  v14 = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2);
  if ( !v14 )
    EnterCrit(1LL, 0LL);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 2); ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( a8 )
        DesktopEx2 = xxxCreateDesktopEx2(a1, a3, a4, String1, a8[1], a10);
      goto LABEL_12;
    }
    if ( ObQueryNameInfo(i) )
    {
      v16 = (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8);
      if ( v16 )
      {
        if ( RtlEqualUnicodeString(String1, v16, (a5 & 0x40) != 0) )
          break;
      }
    }
  }
  if ( !a8 )
  {
    DesktopEx2 = 0;
LABEL_11:
    ObfReferenceObject(i);
    *a10 = i;
    goto LABEL_12;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
    goto LABEL_11;
  }
  DesktopEx2 = -1073741771;
LABEL_12:
  if ( !v14 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return DesktopEx2;
}
