/*
 * XREFs of ?BuildFromRectFs@CComplexShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18005BA6C
 * Callers:
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18005BBFC (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComplexShape::BuildFromRectFs(CD3DDeviceManager *a1, const struct MilRectF *a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  int D2DFactoryNoRef; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  struct CD2DFactory *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  struct ID2D1GeometrySink *v17; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = a3;
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v15);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x69u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v15 + 3) + 80LL))(*((_QWORD *)v15 + 3), &v16);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Bu);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v16 + 136LL))(v16, &v17);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Cu);
      }
      else
      {
        if ( (_DWORD)v6 )
        {
          v11 = v6;
          do
          {
            AddTransformedRectToD2DRgnGeometrySink(a2, 0LL, v17);
            a2 = (const struct MilRectF *)((char *)a2 + 16);
            --v11;
          }
          while ( v11 );
        }
        v12 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v17 + 72LL))(v17);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Cu);
        }
        else
        {
          v13 = v16;
          v16 = 0LL;
          *((_QWORD *)a1 + 1) = v13;
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v17 + 16LL))(v17);
  return v8;
}
