/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A5590
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18000866C (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800A48C0 (-Initialize@CInteraction@@MEAAJXZ.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A53F0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800A57A4 (--0QpcTimeConverter@@QEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  char *v2; // rcx
  CInteractionContextWrapper *result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h]

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_OWORD *)((char *)this + 248) = CMILMatrix::Identity;
  *(_QWORD *)&v4 = 0LL;
  *(_OWORD *)((char *)this + 264) = xmmword_1801EAD20;
  *(_OWORD *)((char *)this + 280) = xmmword_1801EAD30;
  *(_OWORD *)((char *)this + 296) = xmmword_1801EAD40;
  *((_DWORD *)this + 78) = dword_1801EAD50;
  *((_DWORD *)this + 79) = 0;
  *((_QWORD *)this + 40) = 1065353216LL;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *((_DWORD *)this + 85) = 0;
  *((_QWORD *)this + 43) = 1065353216LL;
  *((_DWORD *)this + 88) = 0;
  *(_QWORD *)((char *)this + 356) = 1065353216LL;
  *((_DWORD *)this + 91) = 0;
  *((_QWORD *)this + 46) = 1065353216LL;
  *((_DWORD *)this + 94) = 0;
  *(_QWORD *)((char *)this + 380) = 1065353216LL;
  *((_DWORD *)this + 97) = 0;
  *((_QWORD *)this + 49) = 1065353216LL;
  *((_DWORD *)this + 100) = 0;
  *(_QWORD *)((char *)this + 404) = 1065353216LL;
  *((_DWORD *)this + 103) = 0;
  *((_QWORD *)this + 52) = 1065353216LL;
  *((_DWORD *)this + 106) = 0;
  *(_QWORD *)((char *)this + 428) = 1065353216LL;
  *((_DWORD *)this + 109) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_WORD *)this + 234) = 0;
  *((_QWORD *)&v4 + 1) = LODWORD(FLOAT_1_0);
  *((_OWORD *)this + 28) = v4;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 472) = 0;
  v2 = (char *)this + 480;
  *((_DWORD *)v2 + 4) = 0;
  v2[20] = 0;
  *((_QWORD *)v2 + 1) = v2;
  *(_QWORD *)v2 = v2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 560));
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  result = this;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 156) = 0;
  return result;
}
