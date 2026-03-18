/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C011261C
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00210EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0025F98 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B50A8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     cCapString @ 0x1C00607F4 (cCapString.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(WCHAR *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  __int64 v3; // r9
  WCHAR *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  WCHAR v9[32]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfsTable;
  v2 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v9, a1, 32);
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v4 = v9;
    v5 = v1 + 64 - (char *)v9;
    do
    {
      v6 = *(WCHAR *)((char *)v4 + v5);
      v7 = *v4 - (_DWORD)v6;
      if ( v7 )
        break;
      ++v4;
    }
    while ( (_DWORD)v6 );
    if ( !v7
      && ((v1[129] & 1) != 0 || v1[128] == v1[194])
      && (v1 != gpfsTable || (GetAppCompatFlags2(0x400u, v5, v6, v3) & 0x400) != 0) )
    {
      break;
    }
    v1 += 196;
  }
  return (struct _FONTSUB *)v1;
}
