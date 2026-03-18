/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C00D1D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // edx
  DeadzonePalmTelemetry **v5; // rcx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+40h] [rbp+8h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    41,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( v2 < 5 && (v5 = *(DeadzonePalmTelemetry ***)(a1 + 8LL * v2 + 416)) != 0LL )
    {
      RIMDeadzone::Release(v5);
      Win32FreePool();
      *(_QWORD *)(a1 + 8LL * v2 + 416) = 0LL;
      --*(_DWORD *)(a1 + 456);
      v6 = v9;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741811;
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      3,
      42,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  }
  v8 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Bu,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
    v8);
  return v6;
}
