/*
 * XREFs of ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x18001C904
 * Callers:
 *     ?CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x180091F88 (-CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CPrimitiveGroup::AddFilledPolygonToD2DSink(struct ID2D1GeometrySink *a1, struct D2D_POINT_2F *a2)
{
  void (__fastcall *v4)(struct ID2D1GeometrySink *, _QWORD, _QWORD); // rbx

  v4 = *(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL);
  if ( (float)((float)(a2[2].y - a2[1].y) * (float)(a2[1].x - a2->x)) <= (float)((float)(a2[2].x - a2[1].x)
                                                                               * (float)(a2[1].y - a2->y)) )
  {
    v4(a1, *(_QWORD *)&a2[3], 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *a2);
  }
  else
  {
    v4(a1, *a2, 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[3]);
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
}
