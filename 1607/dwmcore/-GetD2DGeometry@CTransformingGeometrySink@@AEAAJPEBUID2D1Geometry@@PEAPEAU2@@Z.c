/*
 * XREFs of ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18018A148
 * Callers:
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x18018A338 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformingGeometrySink::GetD2DGeometry(
        CTransformingGeometrySink *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  int D2DFactoryNoRef; // eax
  unsigned int v7; // ebx
  struct ID2D1Geometry **v8; // rsi
  int v9; // eax
  __int64 v10; // r8
  struct ID2D1Geometry *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct CD2DFactory *v16; // [rsp+50h] [rbp+8h] BYREF

  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v16);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v15 = 93;
  }
  else
  {
    v8 = (struct ID2D1Geometry **)((char *)this + 32);
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v16 + 3) + 80LL))(
                        *((_QWORD *)v16 + 3),
                        (char *)this + 32);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v15 = 95;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, char *))(*(_QWORD *)*v8 + 136LL))(*v8, (char *)this + 40);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x60u);
        goto LABEL_13;
      }
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int64, char *))(*(_QWORD *)a2 + 96LL))(
                          a2,
                          0LL,
                          v10,
                          (char *)this + 16);
      v7 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        v15 = 98;
      }
      else
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
        v7 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef >= 0 )
        {
          v11 = *v8;
          *v8 = 0LL;
          *a3 = v11;
          goto LABEL_13;
        }
        v15 = 100;
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v15);
LABEL_13:
  v12 = *((_QWORD *)this + 4);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 4) = 0LL;
  }
  v13 = *((_QWORD *)this + 5);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 5) = 0LL;
  }
  return v7;
}
