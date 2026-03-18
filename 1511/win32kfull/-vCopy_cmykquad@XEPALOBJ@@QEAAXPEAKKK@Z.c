/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, unsigned int *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  bool v6; // cf
  bool v7; // zf
  void *v8; // rcx

  v4 = *(_QWORD *)this;
  v6 = a4 < *(_DWORD *)(*(_QWORD *)this + 28LL);
  v7 = a4 == *(_DWORD *)(*(_QWORD *)this + 28LL);
  v8 = *(void **)(*(_QWORD *)this + 128LL);
  if ( !v6 && !v7 )
    a4 = *(_DWORD *)(v4 + 28);
  memmove(v8, a2, 4LL * a4);
  XEPALOBJ::vUpdateTime(this);
}
