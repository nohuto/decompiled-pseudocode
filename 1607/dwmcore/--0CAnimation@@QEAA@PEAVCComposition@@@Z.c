/*
 * XREFs of ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18003A968
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800B04E8 (--0CBaseAnimation@@QEAA@PEAVCComposition@@@Z.c)
 */

CAnimation *__fastcall CAnimation::CAnimation(CAnimation *this, struct CComposition *a2)
{
  __int64 v4; // rax

  CBaseAnimation::CBaseAnimation(this, a2);
  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 21) = &CAnimation::`vftable';
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 84) = -1;
  *((_QWORD *)this + 41) = (char *)this + 168;
  v4 = *((_QWORD *)a2 + 59);
  *((_QWORD *)this + 25) = v4;
  *((_QWORD *)this + 32) = v4;
  *((_QWORD *)this + 34) = v4;
  return this;
}
