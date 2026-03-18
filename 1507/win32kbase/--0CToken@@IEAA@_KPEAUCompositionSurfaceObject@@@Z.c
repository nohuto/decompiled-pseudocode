/*
 * XREFs of ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C00482A4
 * Callers:
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0047BB8 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00E0990 (-CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00E127C (-CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENT.c)
 * Callees:
 *     <none>
 */

CToken *__fastcall CToken::CToken(CToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  *((_QWORD *)this + 3) = 6LL;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 44) = 0;
  *((_BYTE *)this + 90) = 0;
  *((_DWORD *)this + 13) = 0;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 4) = a3;
  ObReferenceObjectByPointer(a3, 3u, ExCompositionObjectType, 0);
  return this;
}
