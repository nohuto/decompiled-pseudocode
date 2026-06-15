/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x180082D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     Template_qzq @ 0x1800835FC (Template_qzq.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this)
{
  int v1; // eax
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edi
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    switch ( v1 )
    {
      case 1:
        v5 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = 0LL;
        v11 = v5;
        v4 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)g_AudioService + 48LL))(
               g_AudioService,
               &v11);
        break;
      case 2:
        v6 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = 0LL;
        v11 = v6;
        v4 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)g_AudioService + 56LL))(
               g_AudioService,
               &v11);
        break;
      case 3:
        v4 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 64LL))(g_AudioService);
        break;
      default:
        return;
    }
  }
  else
  {
    v3 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    v11 = v3;
    v4 = (*(__int64 (__fastcall **)(CAudioSrv *, __int64 *))(*(_QWORD *)g_AudioService + 40LL))(g_AudioService, &v11);
  }
  v7 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
    {
      v8 = *((_DWORD *)this + 2);
      v9 = v8;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v8 == 1 )
        {
          v10 = L"DeviceRemoval";
        }
        else
        {
          v9 = v8 - 2;
          if ( v8 == 2 )
          {
            v10 = L"DeviceQueryRemove";
          }
          else if ( v8 == 3 )
          {
            v10 = L"DeviceSync";
          }
          else
          {
            v10 = L"UNKNOWN";
          }
        }
      }
      else
      {
        v10 = L"DeviceArrival";
      }
      Template_qzq(v9, (unsigned int)&EVT_AUDIOSRV_FAIL_DEVICE_EVENT_WORKER, v8, (_DWORD)v10, v4);
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids,
        v7);
    }
  }
}
