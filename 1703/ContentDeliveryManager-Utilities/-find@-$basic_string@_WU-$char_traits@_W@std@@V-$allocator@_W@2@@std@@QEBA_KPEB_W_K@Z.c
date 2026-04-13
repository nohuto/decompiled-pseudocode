/*
 * XREFs of ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x1800498F4
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180047454 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180065484 (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x180065B18 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, _WORD *a2, unsigned __int64 a3)
{
  __int16 v3; // bp
  char *v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char *v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rax
  char *v13; // r8
  unsigned __int64 v14; // rbx
  _WORD *v15; // rcx
  char *v16; // r11
  int v17; // eax
  __int64 v18; // rcx

  v3 = *a2;
  v5 = a1;
  if ( !*a2 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !v6 )
  {
LABEL_6:
    if ( a3 <= *((_QWORD *)a1 + 2) )
      return a3;
  }
  v7 = *((_QWORD *)a1 + 2);
  if ( a3 < v7 )
  {
    v8 = v7 - a3;
    if ( v6 <= v8 )
    {
      v9 = 1 - v6 + v8;
      if ( *((_QWORD *)a1 + 3) < 8uLL )
        v10 = a1;
      else
        v10 = *(char **)a1;
      v11 = &v10[2 * a3];
      while ( 1 )
      {
        if ( v9 )
        {
          v12 = v9;
          v13 = v11;
          while ( *(_WORD *)v13 != v3 )
          {
            v13 += 2;
            if ( !--v12 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          v13 = 0LL;
        }
        if ( !v13 )
          break;
        if ( !v6 )
          goto LABEL_27;
        v14 = v6;
        v15 = a2;
        v16 = v13;
        while ( *(_WORD *)v16 == *v15 )
        {
          v16 += 2;
          ++v15;
          if ( !--v14 )
          {
            v17 = 0;
            goto LABEL_24;
          }
        }
        v17 = *(_WORD *)v16 < *v15 ? -1 : 1;
LABEL_24:
        if ( !v17 )
        {
LABEL_27:
          if ( *((_QWORD *)v5 + 3) >= 8uLL )
            v5 = *(char **)v5;
          return (v13 - v5) >> 1;
        }
        v18 = v13 - v11;
        v11 = v13 + 2;
        v9 += -1 - (v18 >> 1);
      }
    }
  }
  return -1LL;
}
