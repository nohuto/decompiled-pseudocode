/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800916C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 6) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 2;
  *(_QWORD *)((char *)this + 108) = 2LL;
  *((_QWORD *)this + 18) = (char *)this + 176;
  *((_QWORD *)this + 19) = (char *)this + 176;
  *((_DWORD *)this + 40) = 4;
  *(_QWORD *)((char *)this + 164) = 4LL;
  *((_QWORD *)this + 26) = (char *)this + 240;
  *((_QWORD *)this + 27) = (char *)this + 240;
  *((_DWORD *)this + 56) = 4;
  *(_QWORD *)((char *)this + 228) = 4LL;
  *((_QWORD *)this + 54) = (char *)this + 440;
  *((_DWORD *)this + 110) = 0;
  return this;
}
