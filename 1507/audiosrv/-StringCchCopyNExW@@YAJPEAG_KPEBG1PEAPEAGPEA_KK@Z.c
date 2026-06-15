/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180028950
 * Callers:
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x180012B98 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180021BB0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180026930 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002D8FC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18003C558 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 * Callees:
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  __int16 *v4; // r10
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  signed __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  unsigned __int64 v14; // r11

  v4 = (__int16 *)a3;
  v7 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( a2 )
LABEL_28:
      *(_WORD *)a1 = 0;
    return v7;
  }
  if ( a4 >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
    if ( a2 )
      goto LABEL_28;
    return v7;
  }
  if ( !a3 )
  {
    v4 = &word_1800B1B90;
    a4 = 0LL;
  }
  v7 = 0;
  if ( !a2 )
  {
    if ( a4 )
    {
      if ( *v4 )
      {
        v7 = -2147024774;
        if ( !a1 )
          return (unsigned int)-2147024809;
      }
    }
    return v7;
  }
  v8 = a4 - a2;
  v9 = a2;
  v10 = (char *)v4 - a1;
  v11 = (unsigned __int16 *)a1;
  v12 = 0LL;
  while ( v8 + v9 )
  {
    v13 = *(unsigned __int16 *)((char *)v11 + v10);
    if ( !v13 )
      break;
    *v11 = v13;
    ++v12;
    ++v11;
    if ( !--v9 )
    {
      --v11;
      v7 = -2147024774;
      --v12;
      break;
    }
  }
  v14 = a2 - v12;
  *v11 = 0;
  if ( (v7 & 0x80000000) != 0 || v14 <= 1 || 2 * v14 <= 2 )
    return v7;
  memset_0(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  return v7;
}
