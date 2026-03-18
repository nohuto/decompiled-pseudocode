/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B7744
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
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
  v8 = *(void **)(*(_QWORD *)this + 120LL);
  if ( !v6 && !v7 )
    a4 = *(_DWORD *)(v4 + 28);
  memmove(v8, a2, 4LL * a4);
  XEPALOBJ::vUpdateTime(this);
}
