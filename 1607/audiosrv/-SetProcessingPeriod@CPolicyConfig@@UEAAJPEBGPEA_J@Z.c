/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x18006F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x18006F754 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, __int64 *a3)
{
  int v4; // ebx
  struct IMMDevice *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                        + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v6);
  if ( v4 < 0 || (v4 = CPolicyConfig::SetProcessingPeriodInternal(v6, a3), v4 < 0) )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 3373, v4);
  if ( v6 )
    ((void (__fastcall *)(struct IMMDevice *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v4;
}
