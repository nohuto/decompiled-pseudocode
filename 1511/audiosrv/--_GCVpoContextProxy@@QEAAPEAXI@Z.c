/*
 * XREFs of ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180001888
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x1800016A0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerCloseVpoContext @ 0x180001860 (AudioServerCloseVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x180089C90 (AudioServerGetEndpointVpoContext.c)
 *     VPOCONTEXT_rundown @ 0x18008A730 (VPOCONTEXT_rundown.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

CVpoContextProxy *__fastcall CVpoContextProxy::`scalar deleting destructor'(CVpoContextProxy *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 2));
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 1));
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
