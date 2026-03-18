/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C0047BB8
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C00482A4 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(
        CFlipToken *this,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_QWORD *)this + 19) = 1LL;
  *((_DWORD *)this + 60) = -1;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_WORD *)this + 62) = 0;
  *((_WORD *)this + 72) = 0;
  *((_DWORD *)this + 37) = 0;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_WORD *)this + 110) = 0;
  *((_BYTE *)this + 222) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)((char *)this + 196) = 1065353216LL;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = 1065353216LL;
  *((_DWORD *)this + 54) = 0;
  return result;
}
