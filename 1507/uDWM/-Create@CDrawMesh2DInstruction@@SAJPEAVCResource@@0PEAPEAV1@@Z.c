/*
 * XREFs of ?Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18006D448
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180083AF8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z @ 0x1800856F8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x180086DBC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawMesh2DInstruction::Create(
        struct CResource *a1,
        struct CResource *a2,
        struct CDrawMesh2DInstruction **a3)
{
  __int64 v6; // rax
  struct CDrawMesh2DInstruction *v7; // rdi
  unsigned int v8; // ebx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v7 = (struct CDrawMesh2DInstruction *)v6;
  v8 = 0;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CDrawMesh2DInstruction::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = (CBaseObject *)*((_QWORD *)v7 + 2);
    if ( v9 )
      CBaseObject::Release(v9);
    *((_QWORD *)v7 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v10 = (CBaseObject *)*((_QWORD *)v7 + 3);
    if ( v10 )
      CBaseObject::Release(v10);
    *((_QWORD *)v7 + 3) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *a3 = v7;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x32u);
  }
  return v8;
}
