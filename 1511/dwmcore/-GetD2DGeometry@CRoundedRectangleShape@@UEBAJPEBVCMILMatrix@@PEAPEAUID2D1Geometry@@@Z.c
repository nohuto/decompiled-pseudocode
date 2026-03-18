/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180159840
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801591E8 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v6; // ebp
  bool v7; // di
  _OWORD *v8; // rbx
  _OWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rdi

  v6 = 0;
  v7 = *((_QWORD *)this + 7) == 0LL;
  if ( !a2 )
  {
    if ( !*((_QWORD *)this + 8) )
      goto LABEL_13;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    goto LABEL_12;
  }
  v8 = (_OWORD *)*((_QWORD *)this + 8);
  if ( !v8 )
  {
    v9 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     64LL);
    if ( v9 )
    {
      *v9 = *(_OWORD *)a2;
      v9[1] = *((_OWORD *)a2 + 1);
      v9[2] = *((_OWORD *)a2 + 2);
      v9[3] = *((_OWORD *)a2 + 3);
    }
    else
    {
      v9 = 0LL;
    }
    *((_QWORD *)this + 8) = v9;
    if ( !v9 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x33u);
      return v6;
    }
    goto LABEL_14;
  }
  if ( memcmp_0(*((const void **)this + 8), a2, 0x40uLL) )
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
LABEL_12:
    v7 = 1;
  }
LABEL_13:
  if ( v7 )
  {
LABEL_14:
    v10 = CRoundedRectangleShape::BuildRoundedRectangleShape(this);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4Au);
      return v6;
    }
  }
  *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*((_QWORD *)this + 7));
  return v6;
}
