/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C001E298
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C001D920 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C001DB44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C001DECC (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001F280 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C00204E4 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0268A2C (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A6BC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C001AE64 (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r10
  unsigned int *v6; // r11
  __int64 *v9; // rsi
  unsigned int v10; // eax
  __int64 *v11; // rdx
  unsigned __int16 v12; // ax
  const unsigned __int16 *v13; // rcx
  int v14; // eax
  bool v15; // zf
  unsigned int v17; // eax

  v5 = a4;
  v6 = a3;
  v9 = 0LL;
  if ( a2 )
  {
    v10 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    goto LABEL_3;
  }
  if ( a4 )
  {
    v17 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v17 = *((_DWORD *)a4 + 1);
    v10 = v17 % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
LABEL_3:
    if ( v6 )
      *v6 = v10;
    v11 = *(__int64 **)(*((_QWORD *)this + 1) + 8LL * v10 + 40);
    if ( !v11 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v14 = *((_DWORD *)v11 + 15);
        if ( v14 == 1 && *(_DWORD *)v5 == 1 )
          v15 = *((_DWORD *)v11 + 16) == *((_DWORD *)v5 + 1);
        else
          v15 = v14 == *(_DWORD *)v5;
        if ( v15 )
          return (struct _HASHBUCKET *)v11;
      }
      else if ( a2 && (!a5 || (v11[4] & 2) != 0) )
      {
        v12 = *a2;
        v13 = a2;
        if ( *a2 == *((_WORD *)v11 + 30) )
        {
          while ( v12 )
          {
            v12 = *++v13;
            if ( *v13 != *(const unsigned __int16 *)((char *)v13 + (char *)v11 - (char *)a2 + 60) )
              goto LABEL_16;
          }
          if ( a5 || (v11[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v11;
          v9 = v11;
        }
      }
LABEL_16:
      v11 = (__int64 *)*v11;
      if ( !v11 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
