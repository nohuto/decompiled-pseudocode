/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x18008C01C
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18008BE04 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x18008C524 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x180128184 (--1CAnalogSwapChain@@MEAA@XZ.c)
 *     ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x180139550 (--_GCSwapChainBase@@MEAAPEAXI@Z.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18013CAE0 (--1CStandardSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CSwapChainBase::~CSwapChainBase(CSwapChainBase *this)
{
  __int64 v1; // rdi
  CMILPoolResource *v3; // rcx
  void *v4; // rcx

  v1 = 0LL;
  *(_QWORD *)this = &CSwapChainBase::`vftable'{for `CMILPoolResource'};
  for ( *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
        (unsigned int)v1 < *((_DWORD *)this + 70);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CMILPoolResource **)(*((_QWORD *)this + 32) + 8 * v1);
    if ( v3 )
      CMILPoolResource::Release(v3);
  }
  v4 = (void *)*((_QWORD *)this + 25);
  if ( v4 )
    DeleteObject(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 32);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  CD3DResource::~CD3DResource(this);
}
