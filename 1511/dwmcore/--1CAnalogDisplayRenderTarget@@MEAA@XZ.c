/*
 * XREFs of ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x18013D918
 * Callers:
 *     ??_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z @ 0x18013DA00 (--_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

void __fastcall CAnalogDisplayRenderTarget::~CAnalogDisplayRenderTarget(CAnalogDisplayRenderTarget *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 41);
  *(_QWORD *)this = &CAnalogDisplayRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 15) = &CAnalogDisplayRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CAnalogDisplayRenderTarget::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    *((_QWORD *)this + 41) = 0LL;
  }
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 504);
    v5 = v3;
    *(_DWORD *)(v3 + 508) = GetCurrentThreadId();
    v4 = *((_QWORD *)this + 20);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 560) + 888LL))(*(_QWORD *)(v4 + 560));
    *(_BYTE *)(v4 + 1039) = 0;
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v5);
  }
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
