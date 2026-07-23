/*
 * XREFs of PiCMGetDeviceDepth @ 0x140647BF8
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     PiGetDeviceDepth @ 0x1403F29D4 (PiGetDeviceDepth.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     _CmValidateDeviceName @ 0x1404E0950 (_CmValidateDeviceName.c)
 *     PiCMReturnDepthResultData @ 0x14064870C (PiCMReturnDepthResultData.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  const WCHAR *v12; // rdi
  int inited; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  char v16[4]; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  PCWSTR SourceString; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-14h]
  unsigned int v21; // [rsp+60h] [rbp-10h]

  v6 = a6;
  v9 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, v16);
  if ( v11 >= 0 )
  {
    v12 = SourceString;
    if ( SourceString && !v17 && v18 == 1 && !v20 && a3 && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v10, SourceString);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v12);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth((__int64)&DestinationString, &a6);
          v9 = (unsigned int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v11 = PiCMReturnDepthResultData((unsigned int)inited, v9, v21, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v16);
  return (unsigned int)v11;
}
