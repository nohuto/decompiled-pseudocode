/*
 * XREFs of ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800910EC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwLinearGradientBrushPoolManager@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x180091238 (--0CHwLinearGradientBrushPoolManager@@IEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBrushPool::Init(CHwBrushPool *this, struct CD3DDeviceLevel1 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  CHwLinearGradientBrushPoolManager *v6; // rax
  CHwLinearGradientBrushPoolManager *v7; // rax
  _QWORD *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         72LL);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = a2;
    *(_QWORD *)v5 = &CHwBrush::`vftable';
    *(_QWORD *)(v5 + 16) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 32) = a2;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)v5 = &CHwSolidBrush::`vftable'{for `CHwBrush'};
    *(_QWORD *)(v5 + 16) = &CHwSolidBrush::`vftable'{for `CHwConstantMilColorFColorSource'};
    *(_QWORD *)(v5 + 64) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)this = v5;
  if ( !v5 )
  {
    v10 = 81;
LABEL_17:
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v10);
    return v4;
  }
  v6 = (CHwLinearGradientBrushPoolManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                              WPF::g_pProcessHeap,
                                              96LL);
  if ( v6 )
    v7 = CHwLinearGradientBrushPoolManager::CHwLinearGradientBrushPoolManager(v6, a2);
  else
    v7 = 0LL;
  *((_QWORD *)this + 1) = v7;
  if ( !v7 )
  {
    v10 = 84;
    goto LABEL_17;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   40LL);
  if ( v8 )
  {
    v8[1] = a2;
    *v8 = &CHwBitmapBrush::`vftable';
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 2) = v8;
  if ( !v8 )
  {
    v10 = 87;
    goto LABEL_17;
  }
  return v4;
}
