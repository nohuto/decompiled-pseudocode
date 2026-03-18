/*
 * XREFs of ?IsMobileCore@@YAEXZ @ 0x1C007187C
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0071430 (CheckDwmProcessSecurityIdentifier.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00CD7A0 (DwmSetProcessBreakOnTerminate.c)
 *     UserIsMobileCore @ 0x1C00CD860 (UserIsMobileCore.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1C007191C (ApiSetResolveToHost.c)
 */

char __fastcall IsMobileCore(__int64 a1)
{
  char v1; // di
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rbx
  int v5; // r8d
  char v6; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _WORD v8[12]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = byte_1C011958C;
  if ( byte_1C011958C == -1 )
  {
    v1 = 0;
    v9 = 0;
    CurrentProcess = PsGetCurrentProcess(a1);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    RtlInitUnicodeString(&DestinationString, L"ext-ms-win-mobilecore-boot-l1-1-0");
    if ( (int)ApiSetResolveToHost(
                *(_QWORD *)(ProcessPeb + 104),
                (unsigned int)&DestinationString,
                v5,
                (unsigned int)&v9,
                (__int64)v8) < 0 )
    {
      v6 = v9;
    }
    else
    {
      if ( !v9 )
      {
LABEL_8:
        byte_1C011958C = v1;
        return v1;
      }
      v6 = v8[0] != 0 ? v9 : 0;
    }
    if ( v6 )
      v1 = 1;
    goto LABEL_8;
  }
  return v1;
}
