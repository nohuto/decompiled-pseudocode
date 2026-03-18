/*
 * XREFs of ?GetCurrentNodeWorldTransform@CGraphIterator@@QEAAJPEAVCMILMatrix@@PEA_N0@Z @ 0x18000A6A8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphIterator::GetCurrentNodeWorldTransform(
        CGraphIterator *this,
        struct CMILMatrix *a2,
        bool *a3,
        struct CMILMatrix *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // r12
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, struct CMILMatrix *, bool *, struct CMILMatrix *); // rdi
  int WorldTransform; // eax
  unsigned int v9; // ebx

  v4 = *((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 18);
  v6 = *((_QWORD *)this + 8);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct CMILMatrix *, bool *, struct CMILMatrix *))(*(_QWORD *)v4 + 24LL);
  if ( (char *)v7 == (char *)CVisual::GetWorldTransform )
    WorldTransform = CVisual::GetWorldTransform(v4, v6, v5, a2, a3, a4);
  else
    WorldTransform = v7(v4, v6, v5, a2, a3, a4);
  v9 = WorldTransform;
  if ( WorldTransform < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x10Fu);
  return v9;
}
