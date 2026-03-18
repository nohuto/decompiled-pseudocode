/*
 * XREFs of CreateFontFromUserProfile @ 0x140123A40
 * Callers:
 *     UserSetFont @ 0x1401249BC (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x140123BA0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, _OWORD *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  __int64 v17; // r8
  _OWORD v19[5]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v20; // [rsp+70h] [rbp-39h]
  int v21; // [rsp+78h] [rbp-31h]
  struct tagLOGFONTW v22; // [rsp+80h] [rbp-29h] BYREF
  __int16 v23; // [rsp+DCh] [rbp+33h]

  memset_0(v19, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v22, a1, a3);
    a2 = v19;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v19[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v19[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v19[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v19[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v19[4] = v10;
    v20 = v9;
    v21 = (int)LogFontFromUserProfile;
  }
  v11 = *a2;
  v12 = a2[1];
  *(_DWORD *)&v22.lfFaceName[30] = *((_DWORD *)a2 + 22);
  *(_OWORD *)&v22.lfHeight = v11;
  v13 = a2[2];
  v23 = 256;
  *(_OWORD *)&v22.lfWeight = v12;
  v14 = a2[3];
  *(_OWORD *)&v22.lfFaceName[2] = v13;
  v15 = a2[4];
  *(_OWORD *)&v22.lfFaceName[10] = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a2 + 10);
  *(_OWORD *)&v22.lfFaceName[18] = v15;
  *(_QWORD *)&v22.lfFaceName[26] = v14;
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW((__int128 *)&v22.lfHeight);
  if ( FontIndirectW )
  {
    memset_0(&v22, 0, sizeof(v22));
    if ( (unsigned int)GreExtGetObjectW(FontIndirectW, 92, &v22) && v22.lfHeight == *(_DWORD *)a2 )
    {
      LOBYTE(v17) = 10;
      HmgSetOwner(FontIndirectW, 0LL, v17);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
