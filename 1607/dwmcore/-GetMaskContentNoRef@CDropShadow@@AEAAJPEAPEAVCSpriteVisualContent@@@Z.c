/*
 * XREFs of ?GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z @ 0x18014F850
 * Callers:
 *     ?DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z @ 0x18014F460 (-DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x18012AD10 (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetMaskContentNoRef(CDropShadow *this, struct CSpriteVisualContent **a2)
{
  unsigned int v3; // edi
  struct CSpriteVisualContent *v5; // rcx
  CColorBrush *v6; // rax
  CColorBrush *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  float v13; // [rsp+3Ch] [rbp-1Ch]

  v3 = 0;
  v5 = *(struct CSpriteVisualContent **)(*((_QWORD *)this + 24) + 128LL);
  if ( v5 )
  {
    *a2 = v5;
  }
  else
  {
    if ( *((_QWORD *)this + 28) )
      goto LABEL_12;
    v6 = (CColorBrush *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          136LL);
    if ( v6 )
      v7 = CColorBrush::CColorBrush(v6, *((struct CComposition **)this + 2));
    else
      v7 = 0LL;
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28Fu);
      return v3;
    }
    (*(void (__fastcall **)(CColorBrush *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *((_QWORD *)this + 28);
    v12 = 0;
    v11 = 0LL;
    v13 = FLOAT_1_0;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, 0LL, 70LL, &v11);
    v3 = v9;
    if ( v9 >= 0 )
LABEL_12:
      *a2 = (struct CSpriteVisualContent *)*((_QWORD *)this + 28);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x298u);
  }
  return v3;
}
