/*
 * XREFs of ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003ACC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18003ABD0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800435B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::OnNotify(CVolumeHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  CVolumeStrip *v8; // rbx
  __int64 (__fastcall *v9)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *); // rdi
  int v10; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, this);
  }
  v7 = *(_QWORD *)&a3->Data1 - *((_QWORD *)this + 13);
  if ( *(_QWORD *)&a3->Data1 == *((_QWORD *)this + 13) )
    v7 = *(_QWORD *)a3->Data4 - *((_QWORD *)this + 14);
  if ( v7 )
  {
    CVolumeHardware::ReadChannelLevelsFromHardware(this);
    v8 = (CVolumeStrip *)*((_QWORD *)this + 10);
    v9 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *))(*(_QWORD *)v8 + 48LL);
    if ( v9 == CVolumeStrip::OnNotify )
      v10 = CVolumeStrip::OnNotify(v8, a2, a3);
    else
      v10 = v9(v8, a2, a3);
    v6 = v10;
    if ( v10 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x42u,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v10);
    }
  }
  return v6;
}
