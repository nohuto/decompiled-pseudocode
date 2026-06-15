/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x18006D4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     floorf_0 @ 0x180048C26 (floorf_0.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v6; // ebx
  unsigned int v8; // r15d
  unsigned int v9; // eax
  float v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 && a3 )
  {
    *a2 = 0;
    *a3 = *((_DWORD *)this + 3);
    v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v10);
    if ( v6 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids);
      }
      v8 = *((_DWORD *)this + 3) - 1;
      v9 = (int)floorf_0((float)((float)(int)v8 * v10) + 0.5);
      if ( v9 < v8 )
        v8 = v9;
      *a2 = v8;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v8, *a3);
      }
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v6);
  }
  return (unsigned int)v6;
}
