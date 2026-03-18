/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C025AC44
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AA4A0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00E73E0 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  char *v4; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  result = a1->pvRbrush;
  if ( !result )
  {
    if ( bUMPDSecurityGateEx() )
    {
      pvRbrush = a1[3].pvRbrush;
      if ( !pvRbrush )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg() == NULL\n",
            404LL);
        return 0LL;
      }
      if ( !pvRbrush[6] )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg()->hdev() == NULL\n",
            410LL);
        return 0LL;
      }
    }
    if ( !(unsigned int)bGetRealizedBrush(
                          *(struct BRUSH **)&a1[5].iSolidColor,
                          (struct EBRUSHOBJ *)a1,
                          *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2816LL)) )
    {
      v4 = (char *)a1->pvRbrush;
      if ( v4 )
      {
        EngFreeUserMem(v4 - 16);
        a1->pvRbrush = 0LL;
      }
      return 0LL;
    }
    if ( !a1->pvRbrush )
      return 0LL;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)((char *)a1->pvRbrush - 16),
        *(struct BRUSH **)&a1[5].iSolidColor,
        0);
    return a1->pvRbrush;
  }
  return result;
}
