/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A83F8
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180003710 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800A7AA0 (-Initialize@CInteraction@@MEAAJXZ.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A80A4 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  CInteractionContextWrapper *v1; // r9
  CInteractionContextWrapper *result; // rax
  char v3; // r10

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 33) = 0;
  *((_OWORD *)this + 9) = IdentityMatrix;
  *((_OWORD *)this + 10) = *(&IdentityMatrix + 1);
  *(__m256 *)((char *)this + 176) = ymmword_18019E9D0;
  *((_QWORD *)this + 26) = 1065353216LL;
  *((_DWORD *)this + 54) = 0;
  *(_QWORD *)((char *)this + 220) = 1065353216LL;
  *((_DWORD *)this + 57) = 0;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_DWORD *)this + 60) = 0;
  *(_QWORD *)((char *)this + 244) = 1065353216LL;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 32) = 1065353216LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 1065353216LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *((_DWORD *)this + 75) = 0;
  *((_QWORD *)this + 38) = 1065353216LL;
  *((_DWORD *)this + 78) = 0;
  *(_QWORD *)((char *)this + 316) = 1065353216LL;
  *((_DWORD *)this + 81) = 0;
  *((_QWORD *)this + 41) = 0LL;
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  result = v1;
  *((_BYTE *)v1 + 80) = v3;
  return result;
}
