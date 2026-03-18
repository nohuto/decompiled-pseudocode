/*
 * XREFs of ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18018A908
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x18018A548 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateFullRectD2DGeometry(
        const struct MilPoint2F *a1,
        struct ID2D1PathGeometry **a2)
{
  unsigned int v2; // xmm0_4
  unsigned int v4; // xmm1_4
  int D2DFactoryNoRef; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  struct CD2DFactory *v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+38h]

  v2 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 1);
  v14 = 0LL;
  v13 = 0LL;
  v15 = __PAIR64__(v4, v2);
  v10 = *((_QWORD *)a1 + 3);
  v11 = *((_QWORD *)a1 + 11);
  v12 = *((_QWORD *)a1 + 8);
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v14);
  v6 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v9 = 243;
  }
  else
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v14 + 3) + 80LL))(
                        *((_QWORD *)v14 + 3),
                        a2);
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v9 = 244;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 136LL))(*a2, &v13);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF6u);
        goto LABEL_10;
      }
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, v15, 0LL);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 80LL))(v13, v10);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 80LL))(v13, v11);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 80LL))(v13, v12);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 64LL))(v13, 1LL);
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
      v6 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
        goto LABEL_10;
      v9 = 254;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v9);
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
