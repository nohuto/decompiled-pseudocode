/*
 * XREFs of ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEAVCVisual@@PEBV1@@Z @ 0x1800599D8
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z @ 0x180059B30 (-Update@CCpuClippingData@@QEAAJPEAVCVisual@@PEBV1@W4Enum@CpuClippingMode@@@Z.c)
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCpuClippingData::UpdateScopeTransforms(
        CCpuClippingData *this,
        struct CVisual *a2,
        const struct CCpuClippingData *a3)
{
  unsigned int v3; // esi
  _OWORD *v6; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( *(_DWORD *)this != 4 )
  {
    v6 = 0LL;
    if ( a3 && *(_DWORD *)a3 != 4 )
      v6 = (_OWORD *)*((_QWORD *)a3 + 2);
    if ( !*((_QWORD *)this + 2) )
    {
      v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             64LL);
      *((_QWORD *)this + 2) = v8;
      if ( !v8 )
      {
        v10 = 291;
LABEL_16:
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v10);
        return v3;
      }
    }
    if ( *((_QWORD *)a2 + 46) )
    {
      if ( !*((_QWORD *)this + 3) )
      {
        v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               64LL);
        *((_QWORD *)this + 3) = v9;
        if ( !v9 )
        {
          v10 = 300;
          goto LABEL_16;
        }
      }
    }
    else if ( *((_QWORD *)this + 3) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 3));
      *((_QWORD *)this + 3) = 0LL;
    }
    CVisual::CalcEffectiveTransform(
      (__int64)a2,
      *(_DWORD *)this,
      v6,
      &v11,
      *((struct D2DMatrix **)this + 2),
      *((_QWORD *)this + 3));
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 352LL);
  }
  return v3;
}
