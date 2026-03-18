/*
 * XREFs of ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x18010753C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry::ProcessSetTransform(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY_SETTRANSFORM *a3)
{
  unsigned int v5; // esi
  float *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4

  v5 = 0;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 7));
  v6 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  64LL);
  *((_QWORD *)this + 7) = v6;
  if ( v6 )
  {
    v7 = *((double *)a3 + 1);
    *v6 = v7;
    v8 = *((double *)a3 + 2);
    *(float *)(*((_QWORD *)this + 7) + 4LL) = v8;
    *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) = 0;
    v9 = *((double *)a3 + 3);
    *(float *)(*((_QWORD *)this + 7) + 16LL) = v9;
    v10 = *((double *)a3 + 4);
    *(float *)(*((_QWORD *)this + 7) + 20LL) = v10;
    *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 7) + 28LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 7) + 32LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 7) + 36LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 7) + 40LL) = 1065353216;
    *(_DWORD *)(*((_QWORD *)this + 7) + 44LL) = 0;
    *(float *)(*((_QWORD *)this + 7) + 48LL) = *((double *)a3 + 5);
    *(_QWORD *)(*((_QWORD *)this + 7) + 52LL) = COERCE_UNSIGNED_INT(*((double *)a3 + 6));
    *(_DWORD *)(*((_QWORD *)this + 7) + 60LL) = 1065353216;
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Fu);
  }
  return v5;
}
