/*
 * XREFs of ??1CSwapChainBase@@MEAA@XZ @ 0x180072B20
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x180073A58 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800B5864 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x18013E290 (--1CAnalogSwapChain@@MEAA@XZ.c)
 *     ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x18014A0F0 (--_GCSwapChainBase@@MEAAPEAXI@Z.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18014CA80 (--1CStandardSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 256);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 224);
  CD3DResource::~CD3DResource(this);
}
