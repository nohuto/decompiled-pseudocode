/*
 * XREFs of ??0CDXGIEnumeration@@AEAA@XZ @ 0x180036D44
 * Callers:
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800B6EA8 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::CDXGIEnumeration(CDXGIEnumeration *this)
{
  CDXGIEnumeration *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 14) = DrvQueryAdapterPopulationUniqueness();
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 27) = 0;
  return result;
}
