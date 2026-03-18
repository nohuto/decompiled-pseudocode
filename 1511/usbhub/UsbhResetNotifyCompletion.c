/*
 * XREFs of UsbhResetNotifyCompletion @ 0x1C0046CF0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhSetPdo_AllowIo @ 0x1C000CF18 (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 */

_DWORD *__fastcall UsbhResetNotifyCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int i; // esi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v11; // rbp
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx

  FdoExt(a1, a2, a3, a4)[1316] = 0;
  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1, v5, v6, v7);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v11 = *(_QWORD *)(PortData + 392);
    if ( v11 )
    {
      v12 = PdoExt(*(_QWORD *)(PortData + 392), v5, v6, v7);
      v13 = v12;
      if ( *((_BYTE *)v12 + 2716) )
      {
        if ( *((_QWORD *)v12 + 345) )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              3u,
              0x14u,
              (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
              a1);
          Log(a1, 4, 1380860721, 0LL, a1);
          UsbhSetPdo_AllowIo(v14, v11);
          *(_DWORD *)(*((_QWORD *)v13 + 345) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v13 + 345), 0);
          *((_QWORD *)v13 + 345) = 0LL;
        }
        else if ( (v12[353] & 4) != 0 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              3u,
              0x15u,
              (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
              a1);
          Log(a1, 4, 1380860722, 0LL, a1);
          UsbhSetPdo_AllowIo(v15, v11);
          *(_DWORD *)(*((_QWORD *)v13 + 346) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v13 + 346), 0);
        }
        else if ( v12[196] == 2 )
        {
          *((_BYTE *)v12 + 2717) = 1;
        }
      }
    }
  }
  return result;
}
