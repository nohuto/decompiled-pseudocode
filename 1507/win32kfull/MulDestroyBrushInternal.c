/*
 * XREFs of MulDestroyBrushInternal @ 0x1C029A260
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02942F0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?DestroyTable@MULTIBRUSH@@QEAAXXZ @ 0x1C02945C0 (-DestroyTable@MULTIBRUSH@@QEAAXXZ.c)
 */

void __fastcall MulDestroyBrushInternal(void *a1)
{
  struct _BRUSHOBJ v1; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v2[64]; // [rsp+48h] [rbp-40h] BYREF

  if ( a1 )
  {
    v1.iSolidColor = -1;
    v1.flColorType = 0;
    v1.pvRbrush = a1;
    MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v2, &v1, -1, 0LL, 0LL, 1);
    MULTIBRUSH::DestroyTable((MULTIBRUSH *)v2);
  }
}
