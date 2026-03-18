/*
 * XREFs of ?CopyRectangle@CRectangleShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180158768
 * Callers:
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleShape::CopyRectangle(
        CRectangleShape *this,
        const struct CMILMatrix *a2,
        struct CRectangleShape **a3)
{
  unsigned int v4; // esi
  CRectangleShape *v5; // rax
  CRectangleShape *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v8 = *(_OWORD *)((char *)this + 8);
  v5 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            32LL);
  if ( v5 )
    v6 = CRectangleShape::CRectangleShape(v5, 0.0, 0.0, 0.0, 0.0);
  else
    v6 = 0LL;
  if ( v6 )
  {
    CRectangleShape::Set(v6, (const struct MilRectF *)&v8);
    *a3 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Cu);
  }
  return v4;
}
