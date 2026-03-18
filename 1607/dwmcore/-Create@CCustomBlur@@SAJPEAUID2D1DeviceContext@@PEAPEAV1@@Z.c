/*
 * XREFs of ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x180169CFC
 * Callers:
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x180123E14 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x180169EB4 (-Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall CCustomBlur::Create(struct ID2D1DeviceContext *a1, struct CCustomBlur **a2)
{
  __int64 v4; // rax
  CCustomBlur *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  v5 = (CCustomBlur *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v4 = &CCustomBlur::`vftable';
    *(_DWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (**(void (__fastcall ***)(CCustomBlur *))v5)(v5);
    v6 = CCustomBlur::Initialize(v5, a1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return v7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x28u);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26u);
  }
  if ( v5 )
    (*(void (__fastcall **)(CCustomBlur *))(*(_QWORD *)v5 + 8LL))(v5);
  return v7;
}
