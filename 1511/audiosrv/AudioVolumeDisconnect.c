/*
 * XREFs of AudioVolumeDisconnect @ 0x180039910
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall AudioVolumeDisconnect(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rbx
  __int64 (__fastcall *v3)(CVolumeStrip *); // rdi

  v1 = *a1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, v1);
  }
  v3 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v1 + 16LL);
  if ( v3 == CVolumeStrip::Release )
    CVolumeStrip::Release(v1);
  else
    v3(v1);
  *a1 = 0LL;
  return 0LL;
}
