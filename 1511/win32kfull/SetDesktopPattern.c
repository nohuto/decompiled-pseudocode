/*
 * XREFs of SetDesktopPattern @ 0x1C00ED9CC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C00EDB08 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1C01141B0 (RecolorDeskPattern.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C01FF388 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  const wchar_t *v2; // rdi
  unsigned int v3; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v5; // rcx
  __int16 *v7; // rdx
  __int64 v8; // r9
  wchar_t v9; // ax
  __int16 v10; // cx
  HBITMAP v11; // rax
  __int16 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+42h] [rbp-BEh]
  int v14; // [rsp+4Ah] [rbp-B6h]
  __int16 v15; // [rsp+4Eh] [rbp-B2h]
  wchar_t Str2[24]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v17[264]; // [rsp+80h] [rbp-80h] BYREF

  v2 = a2;
  v3 = 0;
  memset(v17, 0, 520);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &word_1C0153C60, v17, 260, 0) )
      return v3;
    v2 = v17;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v17[0] && _wcsicmp(v2, Str2) )
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
    v7 = &v12;
    v15 = 0;
    v8 = 8LL;
    v9 = *v2;
    do
    {
      v10 = 0;
      while ( v9 && (unsigned __int16)(v9 - 48) > 9u )
        v9 = *++v2;
      while ( 1 )
      {
        v9 = *v2;
        if ( *v2 < 0x30u || v9 > 0x39u )
          break;
        ++v2;
        v10 = v9 + 2 * (5 * v10 - 24);
      }
      *v7++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL, &v12);
    if ( v11 )
    {
      SetGlobalDesktopPattern(v11);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 3572LL));
    if ( SolidBrush )
    {
      v5 = *(HBRUSH *)(gpsi + 3704LL);
      if ( v5 )
      {
        GreMarkDeletableBrush(v5);
        GreDeleteObject(*(_QWORD *)(gpsi + 3704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 3704LL) = SolidBrush;
    }
  }
  return v3;
}
