/*
 * XREFs of ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1800688CC
 * Callers:
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180068638 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18001DCC8 (-HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 CTransform3DGroup::ProcessAppend(
        CTransform3DGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        ...)
{
  __m128i v4; // xmm0
  int v5; // esi
  __m128i v6; // xmm0
  int v8; // eax
  void *Src; // [rsp+58h] [rbp-8h]
  const void *v10; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va, a4);
  v4 = *a3;
  v5 = 0;
  v10 = a4;
  v6 = _mm_srli_si128(v4, 8);
  if ( v6.m128i_i32[1] )
  {
    v8 = UnmarshalResourceArray(&v10, va, (unsigned int)_mm_cvtsi128_si32(v6), 24LL);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8C6u);
    if ( v5 < 0 && Src )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  return (unsigned int)v5;
}
