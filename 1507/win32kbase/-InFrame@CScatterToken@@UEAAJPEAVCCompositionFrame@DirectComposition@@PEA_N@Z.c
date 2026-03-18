/*
 * XREFs of ?InFrame@CScatterToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C00E1390
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A3ECC (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?CanReleaseToFrame@CScatterToken@@IEAAJPEBVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C00E11E0 (-CanReleaseToFrame@CScatterToken@@IEAAJPEBVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 */

__int64 __fastcall CScatterToken::InFrame(
        CompositionSurfaceObject **this,
        struct DirectComposition::CCompositionFrame *a2,
        bool *a3)
{
  int CanReleaseToFrame; // ecx
  CompositionSurfaceObject *v6; // rcx
  bool v8; // [rsp+48h] [rbp+20h] BYREF

  CanReleaseToFrame = CScatterToken::CanReleaseToFrame((CScatterToken *)this, a2, a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v6 = this[4];
    *((_DWORD *)this + 6) = 3;
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(v6, (const struct CToken *)this, &v8);
    if ( CanReleaseToFrame >= 0 )
      *((_BYTE *)this + 96) = v8;
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)CanReleaseToFrame;
}
