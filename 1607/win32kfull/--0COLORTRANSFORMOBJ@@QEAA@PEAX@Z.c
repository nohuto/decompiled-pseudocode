/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0257CB0
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C00FDDB0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C01BF2F4 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1C0257F20 (BRUSHOBJ_hGetColorTransform.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B1D1C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B1FAC (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@QEAA@XZ @ 0x1C0257C50 (--0-$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(COLORTRANSFORMOBJ *this, void *a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>(this);
  LOBYTE(v4) = 14;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
