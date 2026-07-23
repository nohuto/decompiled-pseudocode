/*
 * XREFs of PiCMSetProblem @ 0x140648880
 * Callers:
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406487A0 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14015C650 (ZwPlugPlayControl.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmGetDeviceStatus @ 0x1404DA838 (_CmGetDeviceStatus.c)
 */

NTSTATUS __fastcall PiCMSetProblem(PCWSTR SourceString, int a2, int a3)
{
  NTSTATUS result; // eax
  int v7; // edi
  unsigned int v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-30h] BYREF
  _BYTE DestinationString[40]; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+A0h] [rbp+30h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF

  v11 = 0;
  v12 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return -1073741811;
  result = CmGetDeviceStatus(PiPnpRtlCtx, SourceString, 0, &v12, &v11, &v9, v8);
  if ( result < 0 )
    return result;
  v7 = v11;
  if ( a2 )
  {
    if ( (v12 & 0x400) != 0 && v11 != a2 && a3 != 2 )
      return -1073741811;
  }
  memset(DestinationString, 0, sizeof(DestinationString));
  RtlInitUnicodeString((PUNICODE_STRING)DestinationString, SourceString);
  *(_DWORD *)&DestinationString[20] = 1024;
  if ( a2 )
  {
    *(_DWORD *)&DestinationString[16] = 1;
    *(_DWORD *)&DestinationString[24] = a2;
  }
  else
  {
    *(_DWORD *)&DestinationString[16] = 2;
    *(_DWORD *)&DestinationString[24] = v7;
  }
  return ZwPlugPlayControl(PlugPlayControlDeviceStatus, DestinationString, 0x28u);
}
