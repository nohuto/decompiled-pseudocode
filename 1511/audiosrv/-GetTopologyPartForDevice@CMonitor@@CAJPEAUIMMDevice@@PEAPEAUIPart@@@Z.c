/*
 * XREFs of ?GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z @ 0x1800969F0
 * Callers:
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180097FC4 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitor::GetTopologyPartForDevice(struct IMMDevice *a1, struct IPart **a2)
{
  int v3; // esi
  __int64 v5; // [rsp+70h] [rbp+30h] BYREF
  __int64 v6; // [rsp+80h] [rbp+40h] BYREF
  __int64 v7; // [rsp+88h] [rbp+48h]

  v7 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
         a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         1LL);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v6), v3 < 0)
    || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 64LL))(v6, &v5), v3 < 0)
    || (v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IPart **))v5)(
               v5,
               &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
               a2),
        v3 < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x48u,
        (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
        v3);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
