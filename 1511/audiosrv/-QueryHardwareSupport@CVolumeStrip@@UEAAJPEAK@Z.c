/*
 * XREFs of ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x18000F090
 * Callers:
 *     AudioVolumeQueryHardwareSupport @ 0x180039E20 (AudioVolumeQueryHardwareSupport.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::QueryHardwareSupport(CVolumeStrip *this, unsigned int *a2)
{
  unsigned int v4; // esi

  if ( !a2 )
    return 2147500035LL;
  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30)) == 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31)) )
    v4 |= 2u;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32)) )
    v4 |= 4u;
  *a2 = v4;
  return 0LL;
}
