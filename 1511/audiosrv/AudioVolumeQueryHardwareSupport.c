/*
 * XREFs of AudioVolumeQueryHardwareSupport @ 0x180039E20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x18000F090 (-QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioVolumeQueryHardwareSupport(CVolumeStrip **a1, unsigned int *a2)
{
  __int64 (__fastcall *v2)(CVolumeStrip *, unsigned int *); // rdi

  v2 = *(__int64 (__fastcall **)(CVolumeStrip *, unsigned int *))(*(_QWORD *)*a1 + 56LL);
  if ( v2 == CVolumeStrip::QueryHardwareSupport )
    return CVolumeStrip::QueryHardwareSupport(*a1, a2);
  else
    return v2(*a1, a2);
}
