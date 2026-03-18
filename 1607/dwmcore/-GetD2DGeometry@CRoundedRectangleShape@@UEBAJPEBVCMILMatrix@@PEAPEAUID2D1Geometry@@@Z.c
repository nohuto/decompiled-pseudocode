/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18018AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x18018A548 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v6; // edi
  _BOOL8 v7; // r9
  float *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx

  v6 = 0;
  v7 = *((_QWORD *)this + 7) == 0LL;
  if ( !a2 )
  {
    v13 = *((_QWORD *)this + 8);
    if ( !v13 )
      goto LABEL_13;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64, struct ID2D1Geometry **, _BOOL8))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 32LL))(
      WPF::g_pProcessHeap,
      v13,
      a3,
      v7);
    *((_QWORD *)this + 8) = 0LL;
    goto LABEL_12;
  }
  v8 = (float *)*((_QWORD *)this + 8);
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, struct ID2D1Geometry **, _BOOL8))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           68LL,
           a3,
           v7);
    v10 = v9;
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a2 + 3);
      *(_DWORD *)(v9 + 64) = *((_DWORD *)a2 + 16);
    }
    else
    {
      v10 = 0LL;
    }
    *((_QWORD *)this + 8) = v10;
    if ( !v10 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
      return v6;
    }
    goto LABEL_14;
  }
  if ( !CMILMatrix::IsEqualTo<0>(v8, (float *)a2) )
  {
    *(_OWORD *)v12 = *(_OWORD *)v11;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v12 + 48) = *(_OWORD *)(v11 + 48);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(v11 + 64);
LABEL_12:
    LOBYTE(v7) = 1;
  }
LABEL_13:
  if ( v7 )
  {
LABEL_14:
    v14 = CRoundedRectangleShape::BuildRoundedRectangleShape(this);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x52u);
      return v6;
    }
  }
  *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
  v15 = *((_QWORD *)this + 7);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return v6;
}
