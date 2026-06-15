/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180023190 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002EF50 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800545C0 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800740AC (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C508 (-Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     memset @ 0x180036D30 (memset.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const WCHAR *v4; // r10
  int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  signed __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  unsigned __int64 v14; // r11

  v4 = a3;
  v7 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( v7 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v7;
    goto LABEL_28;
  }
  if ( a4 >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
    if ( !a2 )
      return (unsigned int)v7;
LABEL_28:
    *(_WORD *)a1 = 0;
    return (unsigned int)v7;
  }
  if ( !a3 )
  {
    v4 = &pwsz;
    a4 = 0LL;
  }
  v7 = 0;
  if ( a2 )
  {
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
    if ( v7 >= 0 && v14 > 1 && 2 * v14 > 2 )
      memset(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  }
  else if ( a4 )
  {
    if ( *v4 )
    {
      v7 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v7;
}
