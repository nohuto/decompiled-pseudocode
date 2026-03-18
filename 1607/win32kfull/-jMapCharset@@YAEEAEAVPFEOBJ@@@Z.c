/*
 * XREFs of ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C002802C
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00254DC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C0026F48 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C0027B60 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0027C60 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

char __fastcall jMapCharset(unsigned __int8 a1, struct PFEOBJ *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int8 v6; // dl
  _BYTE *v7; // rax
  char v8; // r10
  _BYTE *v9; // r8
  PFEOBJ *v11; // r11
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *v13; // r8
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // r9

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v5 = *(int *)(v4 + 40);
  if ( !(_DWORD)v5 )
    return *(_BYTE *)(v4 + 44);
  v6 = a1;
  if ( a1 == 1 )
    v6 = MAPPER::DefaultCharset;
  v7 = (_BYTE *)(v4 + v5);
  v8 = *(_BYTE *)(v4 + v5);
  v9 = v7 + 16;
  while ( v7 < v9 )
  {
    if ( *v7 == v6 )
      return v6;
    if ( *v7 == 1 )
      break;
    ++v7;
  }
  if ( *(_QWORD *)(v2 + 128) )
  {
    PFEOBJ::pGetLinkedFontList(a2);
    while ( 1 )
    {
      LinkedFontList = PFEOBJ::pGetLinkedFontList(v11);
      if ( v13 == LinkedFontList )
        break;
      Flink = v13[2].Flink[2].Flink;
      Blink_low = SLODWORD(Flink[2].Blink);
      if ( (_DWORD)Blink_low )
      {
        v16 = (char *)Flink + Blink_low;
        v17 = v16 + 16;
        while ( v16 < v17 )
        {
          if ( *v16 == v6 )
            return v6;
          if ( *v16 == 1 )
            break;
          ++v16;
        }
      }
      else if ( BYTE4(Flink[2].Blink) == v6 )
      {
        return v6;
      }
    }
  }
  return v8;
}
