/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003F720 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B1130 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004BCE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  __int64 Object; // rax
  _QWORD *v3; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  Object = AllocateObject(0xD8uLL);
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 88) = 0;
    *(_DWORD *)(Object + 92) = 0;
    *(_DWORD *)(Object + 96) = 0;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 80) = 120;
    *(_DWORD *)(Object + 84) = 1;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_DWORD *)(Object + 112) = 0x7FFFFFFF;
    *(_DWORD *)(Object + 116) = 0;
    *(_QWORD *)(Object + 40) = Object + 104 + (unsigned int)(4 * *(_DWORD *)(Object + 104) + 16);
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 216;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v3 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v3[1] = v3;
    *v3 = v3;
  }
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
