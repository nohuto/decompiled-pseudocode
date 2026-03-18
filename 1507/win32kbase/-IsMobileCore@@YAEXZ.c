/*
 * XREFs of ?IsMobileCore@@YAEXZ @ 0x1C0080038
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007F8C0 (CheckDwmProcessSecurityIdentifier.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C04F0 (DwmSetProcessBreakOnTerminate.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1C00800D8 (ApiSetResolveToHost.c)
 */

char __fastcall IsMobileCore(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rbx
  int v6; // r8d
  char v7; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _WORD v9[12]; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = byte_1C00FE63C;
  if ( byte_1C00FE63C == -1 )
  {
    v2 = 0;
    v10 = 0;
    CurrentProcess = PsGetCurrentProcess(a1, a2);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    RtlInitUnicodeString(&DestinationString, L"ext-ms-win-mobilecore-boot-l1-1-0");
    if ( (int)ApiSetResolveToHost(
                *(_QWORD *)(ProcessPeb + 104),
                (unsigned int)&DestinationString,
                v6,
                (unsigned int)&v10,
                (__int64)v9) < 0 )
    {
      v7 = v10;
    }
    else
    {
      if ( !v10 )
      {
LABEL_8:
        byte_1C00FE63C = v2;
        return v2;
      }
      v7 = v9[0] != 0 ? v10 : 0;
    }
    if ( v7 )
      v2 = 1;
    goto LABEL_8;
  }
  return v2;
}
