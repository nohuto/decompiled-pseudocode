/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1C00D1BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C00E084C (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  const struct tagRIMDEADZONE *v4; // rbx
  int v6; // edx
  RIMDeadzone *v7; // rax
  RIMDeadzone *v8; // rsi
  int v9; // edx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    31,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  if ( *(_DWORD *)(a1 + 316) && *(_DWORD *)(a1 + 456) < 5u )
  {
    v7 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL);
    v8 = v7;
    if ( v7 )
    {
      v10 = RIMDeadzone::Initialize(v7, v4);
      if ( v10 < 0 )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          3,
          32,
          (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
        Win32FreePool();
      }
      else
      {
        v11 = 0LL;
        v12 = (_QWORD *)(a1 + 416);
        while ( *v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          ++v12;
          if ( (unsigned int)v11 >= 5 )
            goto LABEL_13;
        }
        *(_QWORD *)(a1 + 8 * v11 + 416) = v8;
        ++*(_DWORD *)(a1 + 456);
        *a3 = (unsigned int)v11;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  else
  {
    v10 = -1073741811;
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      33,
      (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
  }
LABEL_13:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x22u,
    (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids,
    v10);
  return (unsigned int)v10;
}
