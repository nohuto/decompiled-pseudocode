/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x18009A590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_qzq @ 0x18009AE2C (Template_qzq.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this)
{
  int v1; // eax
  __int64 v3; // rax
  CAudioSrv *v4; // rdi
  int v5; // eax
  __int64 v6; // rax
  CAudioSrv *v7; // rdi
  __int64 v8; // rax
  CAudioSrv *v9; // rdi
  int v10; // ebx
  int v11; // r8d
  int v12; // ecx
  const wchar_t *v13; // r9
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    switch ( v1 )
    {
      case 1:
        v6 = *((_QWORD *)this + 2);
        v7 = g_AudioService;
        *((_QWORD *)this + 2) = 0LL;
        v14 = v6;
        v5 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v14);
        break;
      case 2:
        v8 = *((_QWORD *)this + 2);
        v9 = g_AudioService;
        *((_QWORD *)this + 2) = 0LL;
        v14 = v8;
        v5 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v14);
        break;
      case 3:
        v5 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 64LL))(g_AudioService);
        break;
      default:
        return;
    }
  }
  else
  {
    v3 = *((_QWORD *)this + 2);
    v4 = g_AudioService;
    *((_QWORD *)this + 2) = 0LL;
    v14 = v3;
    v5 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v14);
  }
  v10 = v5;
  if ( v5 < 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
    {
      v11 = *((_DWORD *)this + 2);
      v12 = v11;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v11 == 1 )
        {
          v13 = L"DeviceRemoval";
        }
        else
        {
          v12 = v11 - 2;
          if ( v11 == 2 )
          {
            v13 = L"DeviceQueryRemove";
          }
          else if ( v11 == 3 )
          {
            v13 = L"DeviceSync";
          }
          else
          {
            v13 = L"UNKNOWN";
          }
        }
      }
      else
      {
        v13 = L"DeviceArrival";
      }
      Template_qzq(v12, (unsigned int)&EVT_AUDIOSRV_FAIL_DEVICE_EVENT_WORKER, v11, (_DWORD)v13, v5);
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
        v10);
    }
  }
}
