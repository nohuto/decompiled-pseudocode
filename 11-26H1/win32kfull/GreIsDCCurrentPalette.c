/*
 * XREFs of GreIsDCCurrentPalette @ 0x140331BE4
 * Callers:
 *     xxxRealizePalette @ 0x140292500 (xxxRealizePalette.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIsDCCurrentPalette(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  _QWORD v10[14]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, (HDC)a1, v3);
  if ( v10[0] )
  {
    v4 = *(_QWORD *)(v10[0] + 80LL);
    if ( v4 == *((_QWORD *)v3 + 470) )
      goto LABEL_8;
    if ( *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 208LL) == 1 )
    {
      v5 = (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000;
      v6 = (unsigned __int16)*((_DWORD *)v3 + 940) | (*((_DWORD *)v3 + 940) >> 8) & 0xFF0000u;
      if ( v5 == (_DWORD)v6 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
        v8 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( *((_QWORD *)v3 + 471) == v8 )
LABEL_8:
          v2 = 1;
      }
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v2;
}
