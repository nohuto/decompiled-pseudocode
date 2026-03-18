/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x180079F9C
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800B9248 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x180168034 (--1CAnalogSwapChain@@MEAA@XZ.c)
 *     ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x18017A760 (--_GCSwapChainBase@@MEAAPEAXI@Z.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18017D5E8 (--1CStandardSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  CMILPoolResource *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = 0LL;
  *(_QWORD *)this = &CSwapChainBase::`vftable'{for `CMILPoolResource'};
  for ( *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
        (unsigned int)v3 < *((_DWORD *)this + 70);
        v3 = (unsigned int)(v3 + 1) )
  {
    v5 = *(CMILPoolResource **)(*((_QWORD *)this + 32) + 8 * v3);
    if ( v5 )
      CMILPoolResource::Release(v5);
  }
  v6 = (void *)*((_QWORD *)this + 25);
  if ( v6 )
    DeleteObject(v6);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 256, a2, a3);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 224, v7, v8);
  CD3DResource::~CD3DResource(this);
}
