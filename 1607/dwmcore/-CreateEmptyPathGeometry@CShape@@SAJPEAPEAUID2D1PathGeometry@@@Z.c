/*
 * XREFs of ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x180189BCC
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::CreateEmptyPathGeometry(struct ID2D1PathGeometry **a1)
{
  int D2DFactoryNoRef; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  struct ID2D1PathGeometry *v7; // rax
  struct ID2D1PathGeometry *v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  struct CD2DFactory *v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)a1, &v11);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x192u);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v11 + 3) + 80LL))(
           *((_QWORD *)v11 + 3),
           &v9);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x193u);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v9 + 136LL))(v9, &v10);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x196u);
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
        v3 = v6;
        if ( v6 >= 0 )
        {
          v7 = v9;
          v9 = 0LL;
          *a1 = v7;
          goto LABEL_12;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x197u);
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_12:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v3;
}
