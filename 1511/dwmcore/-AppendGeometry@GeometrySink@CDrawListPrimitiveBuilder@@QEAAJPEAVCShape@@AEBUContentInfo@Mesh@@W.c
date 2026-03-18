/*
 * XREFs of ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEAVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x1800178EC
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::GeometrySink::AppendGeometry(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v12; // eax
  __int64 v13; // r8
  int v14; // edi
  __int128 *v15; // rax
  __int64 v16; // rsi
  __int128 v17; // xmm0
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v8 = *a2;
  v21 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 16))(a2, 0LL, &v21);
  v14 = v12;
  if ( v12 < 0 )
  {
    v20 = 767;
LABEL_9:
    v19 = v12;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 212) = a5;
  v15 = a6;
  *(_DWORD *)(a1 + 208) = a4;
  v16 = v21;
  v17 = *v15;
  *(_BYTE *)(a1 + 232) = a7;
  *(_BYTE *)(a1 + 233) = a8;
  *(_OWORD *)(a1 + 216) = v17;
  *(_QWORD *)(a1 + 200) = a3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 96LL))(v16, 0LL, v13, a1 + 16);
  v14 = v12;
  if ( v12 < 0 )
  {
    v20 = 782;
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(a1 + 32);
  if ( v14 >= 0 )
    goto LABEL_4;
  v20 = 783;
  v19 = *(_DWORD *)(a1 + 32);
LABEL_11:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
LABEL_4:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  *(_QWORD *)(a1 + 200) = 0LL;
  return (unsigned int)v14;
}
