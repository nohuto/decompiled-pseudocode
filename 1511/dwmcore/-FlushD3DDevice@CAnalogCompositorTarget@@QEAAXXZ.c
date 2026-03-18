/*
 * XREFs of ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x18013D0C0
 * Callers:
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BA658 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x18013D7C4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

void __fastcall CAnalogCompositorTarget::FlushD3DDevice(CAnalogCompositorTarget *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
  {
    ++*(_DWORD *)(v1 + 504);
    v4 = v1;
    *(_DWORD *)(v1 + 508) = GetCurrentThreadId();
    v3 = *((_QWORD *)this + 12);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 560) + 888LL))(*(_QWORD *)(v3 + 560));
    *(_BYTE *)(v3 + 1039) = 0;
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v4);
  }
}
