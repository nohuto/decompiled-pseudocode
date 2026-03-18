/*
 * XREFs of ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x1800F5D70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    *((_QWORD *)this + 9));
  v6 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  64LL);
  *((_QWORD *)this + 9) = v6;
  if ( v6 )
  {
    v7 = *((double *)a3 + 1);
    *v6 = v7;
    v8 = *((double *)a3 + 2);
    *(float *)(*((_QWORD *)this + 9) + 4LL) = v8;
    *(_DWORD *)(*((_QWORD *)this + 9) + 8LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 9) + 12LL) = 0;
    v9 = *((double *)a3 + 3);
    *(float *)(*((_QWORD *)this + 9) + 16LL) = v9;
    v10 = *((double *)a3 + 4);
    *(float *)(*((_QWORD *)this + 9) + 20LL) = v10;
    *(_DWORD *)(*((_QWORD *)this + 9) + 24LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 9) + 28LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 9) + 32LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 9) + 36LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 9) + 40LL) = 1065353216;
    *(_DWORD *)(*((_QWORD *)this + 9) + 44LL) = 0;
    *(float *)(*((_QWORD *)this + 9) + 48LL) = *((double *)a3 + 5);
    *(_QWORD *)(*((_QWORD *)this + 9) + 52LL) = COERCE_UNSIGNED_INT(*((double *)a3 + 6));
    *(_DWORD *)(*((_QWORD *)this + 9) + 60LL) = 1065353216;
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Fu);
  }
  return v5;
}
