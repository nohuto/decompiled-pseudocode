/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
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
  return this;
}
