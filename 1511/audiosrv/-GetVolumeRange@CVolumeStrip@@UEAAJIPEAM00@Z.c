/*
 * XREFs of ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x18000F1A0
 * Callers:
 *     AudioVolumeGetVolumeRange @ 0x180039BE0 (AudioVolumeGetVolumeRange.c)
 * Callees:
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18003A7C0 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeRange(CVolumeStrip *this, unsigned int a2, float *a3, float *a4, float *a5)
{
  CVolumeControlBase *v5; // rbx
  __int64 (__fastcall *v6)(CVolumeControlBase *__hidden, unsigned int, float *, float *, float *); // rdi

  v5 = (CVolumeControlBase *)*((_QWORD *)this + 30);
  v6 = *(__int64 (__fastcall **)(CVolumeControlBase *__hidden, unsigned int, float *, float *, float *))(*(_QWORD *)v5 + 152LL);
  if ( v6 == CVolumeControlBase::GetVolumeRange )
    return CVolumeControlBase::GetVolumeRange(*((CVolumeControlBase **)this + 30), a2, a3, a4, a5);
  else
    return v6(v5, a2, a3, a4, a5);
}
