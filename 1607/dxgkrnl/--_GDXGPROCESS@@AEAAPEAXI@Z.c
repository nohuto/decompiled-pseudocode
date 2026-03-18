/*
 * XREFs of ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001CEA0
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C00A2908 (--1DXGPROCESS@@AEAA@XZ.c)
 */

DXGPROCESS *__fastcall DXGPROCESS::`scalar deleting destructor'(DXGPROCESS *P)
{
  DXGPROCESS::~DXGPROCESS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
