/*
 * XREFs of BRUSHOBJ_pvGetRbrush @ 0x1C025ADE0
 * Callers:
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0293DF8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00E73E0 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  PVOID result; // rax
  void *v2; // rdi
  char *v4; // rcx
  char *pvRbrush; // rdx

  result = pbo->pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    if ( (unsigned int)bGetRealizedBrush(
                         *(struct BRUSH **)&pbo[5].iSolidColor,
                         (struct EBRUSHOBJ *)pbo,
                         *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)pbo[3].pvRbrush + 6) + 2816LL)) )
    {
      pvRbrush = (char *)pbo->pvRbrush;
      if ( pvRbrush )
      {
        vTryToCacheRealization(
          (struct EBRUSHOBJ *)pbo,
          (struct RBRUSH *)(pvRbrush - 16),
          *(struct BRUSH **)&pbo[5].iSolidColor,
          0);
        return pbo->pvRbrush;
      }
    }
    else
    {
      v4 = (char *)pbo->pvRbrush;
      if ( v4 )
      {
        Win32FreePool(v4 - 16);
        pbo->pvRbrush = 0LL;
      }
    }
    return v2;
  }
  return result;
}
