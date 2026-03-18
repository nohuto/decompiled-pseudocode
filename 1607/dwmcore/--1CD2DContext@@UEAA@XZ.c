/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x18007E3D4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180173350 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this, a2);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 368, v3, v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 328, v5, v6);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 192, v7, v8);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 136, v9, v10);
}
