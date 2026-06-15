/*
 * XREFs of ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18005929C
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180026E30 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct CVolumeStrip *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  *((_DWORD *)this + 62) = 1;
  *((_BYTE *)this + 252) = 0;
  *((_QWORD *)this + 32) = 0LL;
  return this;
}
