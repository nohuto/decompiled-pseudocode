/*
 * XREFs of IoctlToNVMe @ 0x1C0009BF0
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     IoctlFirmwareProcess @ 0x1C00097FC (IoctlFirmwareProcess.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C00098A8 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0009ABC (IoctlSetTemperatureThresholdProcess.c)
 *     SglToPrp @ 0x1C000C614 (SglToPrp.c)
 *     CompareId @ 0x1C000EE0C (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  int v5; // ecx
  unsigned int ProtocolInfoProcess; // eax
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  SrbDataBuffer = GetSrbDataBuffer(a2, &v10);
  v5 = *(_DWORD *)(SrbDataBuffer + 16);
  if ( v5 == 1771392 )
  {
    ProtocolInfoProcess = IoctlFirmwareProcess(a1, a2);
    goto LABEL_12;
  }
  if ( v5 == 2954240 )
  {
    v7 = SrbDataBuffer + 4;
    if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)SrbDataBuffer + 4, 8, 0LL) )
    {
      ProtocolInfoProcess = IoctlQueryProtocolInfoProcess(a1, a2);
      goto LABEL_12;
    }
    if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v7, 8, 0LL) )
    {
      ProtocolInfoProcess = IoctlQueryTemperatureInfoProcess(a1, a2);
      goto LABEL_12;
    }
LABEL_10:
    *(_BYTE *)(a2 + 3) = 6;
    v8 = -1056964602;
    goto LABEL_13;
  }
  if ( v5 != 3002880 || !(unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)SrbDataBuffer + 4, 8, 0LL) )
    goto LABEL_10;
  ProtocolInfoProcess = IoctlSetTemperatureThresholdProcess(a1, a2);
LABEL_12:
  v8 = ProtocolInfoProcess;
LABEL_13:
  if ( !*(_BYTE *)(a2 + 3) )
    SglToPrp(a1, a2);
  return v8;
}
