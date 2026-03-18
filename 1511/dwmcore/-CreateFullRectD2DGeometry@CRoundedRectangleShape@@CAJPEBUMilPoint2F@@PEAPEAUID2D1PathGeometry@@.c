/*
 * XREFs of ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801595B4
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801591E8 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateFullRectD2DGeometry(
        const struct MilPoint2F *a1,
        struct ID2D1PathGeometry **a2)
{
  unsigned int v2; // xmm0_4
  unsigned int v4; // xmm1_4
  int D2DFactoryNoRef; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  struct CD2DFactory *v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h]

  v2 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 1);
  v15 = 0LL;
  v14 = 0LL;
  v16 = __PAIR64__(v4, v2);
  v11 = *((_QWORD *)a1 + 3);
  v12 = *((_QWORD *)a1 + 11);
  v13 = *((_QWORD *)a1 + 8);
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v15);
  v6 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v15 + 3) + 80LL))(
           *((_QWORD *)v15 + 3),
           a2);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 136LL))(*a2, &v14);
      v6 = v8;
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, v16, 0LL);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v11);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v12);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, v13);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 1LL);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF6u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEEu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xECu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xEBu);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v6;
}
