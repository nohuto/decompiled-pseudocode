/*
 * XREFs of PiCMDeleteClassKey @ 0x140612510
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReleaseObjectInputData @ 0x140443254 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteInstallerClass @ 0x140693F08 (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x1406942C4 (_CmDeleteInterfaceClass.c)
 */

__int64 __fastcall PiCMDeleteClassKey(ULONG64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  int v9; // eax
  char v11[4]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+34h] [rbp-34h]
  int v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  int v16; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, v11);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v14 && !v15 && a3 && a4 >= 8 && (unsigned int)(v13 - 2) <= 1 && (unsigned int)(v12 - 1) <= 1 )
      {
        if ( v13 == 3 )
          v9 = CmDeleteInterfaceClass(*(_QWORD *)&PiPnpRtlCtx, v14, 0LL);
        else
          v9 = CmDeleteInstallerClass(*(_QWORD *)&PiPnpRtlCtx, v14, 0LL);
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v9, v16, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v11);
  return (unsigned int)v8;
}
