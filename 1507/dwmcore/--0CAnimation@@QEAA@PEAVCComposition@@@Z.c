/*
 * XREFs of ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180048020
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CAnimation *__fastcall CAnimation::CAnimation(CAnimation *this, struct CComposition *a2)
{
  __int64 v2; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 11) = &CAnimation::`vftable';
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 64) = -1;
  *((_QWORD *)this + 31) = (char *)this + 88;
  v2 = *((_QWORD *)a2 + 59);
  *((_QWORD *)this + 15) = v2;
  *((_QWORD *)this + 22) = v2;
  *((_QWORD *)this + 24) = v2;
  return this;
}
