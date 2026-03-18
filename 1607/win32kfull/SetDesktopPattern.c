/*
 * XREFs of SetDesktopPattern @ 0x1C010CF14
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C010D04C (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1C01355A0 (RecolorDeskPattern.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C01F6B14 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v6; // rcx
  __int16 *v8; // rdx
  __int64 v9; // r9
  wchar_t v10; // ax
  __int16 v11; // cx
  HBITMAP v12; // rax
  __int16 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+42h] [rbp-BEh]
  int v15; // [rsp+4Ah] [rbp-B6h]
  __int16 v16; // [rsp+4Eh] [rbp-B2h]
  wchar_t Str2[24]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v18[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  memset(v18, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &qword_1C015B240, v18, 260, 0) )
      return v4;
    a2 = v18;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v18[0] && _wcsicmp(a2, Str2) )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v8 = &v13;
    v16 = 0;
    v9 = 8LL;
    v10 = *a2;
    do
    {
      v11 = 0;
      while ( v10 && (unsigned __int16)(v10 - 48) > 9u )
        v10 = *++a2;
      while ( 1 )
      {
        v10 = *a2;
        if ( *a2 < 0x30u || v10 > 0x39u )
          break;
        ++a2;
        v11 = v10 + 2 * (5 * v11 - 24);
      }
      *v8++ = v11;
      --v9;
    }
    while ( v9 );
    v12 = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL, &v13);
    if ( v12 )
    {
      SetGlobalDesktopPattern(v12);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 4964LL));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(gpsi + 5096LL);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_QWORD *)(gpsi + 5096LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 5096LL) = SolidBrush;
    }
  }
  return v4;
}
