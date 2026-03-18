/*
 * XREFs of ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180072820
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18010AB20 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::FlushAllDevices(CD3DDeviceManager *this)
{
  unsigned int i; // r14d
  __int64 v3; // rsi
  char *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = 0; i < *((_DWORD *)this + 32); *(_BYTE *)(v3 + 1039) = 0 )
  {
    v3 = *(_QWORD *)(32LL * i + *((_QWORD *)this + 12));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 560) + 888LL))(*(_QWORD *)(v3 + 560));
    ++i;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
