/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BBEC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BAAC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  wil::critical_section::lock(a1, &lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
      *(_DWORD *)a1);
  }
  if ( !*((_DWORD *)a1 + 1) && *(_DWORD *)a1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    v3 = *(_QWORD *)(v2 + 200);
    if ( v3 && (v4 = *(_QWORD *)(v2 + 176)) != 0 )
    {
      if ( v3 > v4 )
        v4 = v3;
    }
    else
    {
      v4 = 0LL;
    }
    v5 = 0LL;
    v6 = lpMem;
    while ( 1 )
    {
      v7 = v6;
      if ( !v6 )
        break;
      v6 = (_QWORD *)*v6;
      v8 = v7[2];
      if ( *(_DWORD *)v8 && *(_DWORD *)(v8 + 360) )
      {
        v9 = *(_QWORD *)(v8 + 40);
        v10 = *(_QWORD *)(v9 + 200);
        if ( v10 && (v5 = *(_QWORD *)(v9 + 176)) != 0 )
        {
          if ( v10 > v5 )
            v5 = v10;
        }
        else
        {
          v5 = 0LL;
        }
        break;
      }
    }
    if ( v4 > v5 )
      TsSessionNewPrimaryConsoleAudioSession(a1);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
