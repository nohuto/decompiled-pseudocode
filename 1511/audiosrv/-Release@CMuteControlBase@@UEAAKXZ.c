/*
 * XREFs of ?Release@CMuteControlBase@@UEAAKXZ @ 0x18006C990
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMuteControlBase::Release(CMuteControlBase *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMuteControlBase *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  return v1;
}
