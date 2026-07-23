/*
 * XREFs of PiCMDeleteDeviceKey @ 0x1406470A0
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 *     PiCMConvertDeviceKeyType @ 0x1404B9BE0 (PiCMConvertDeviceKeyType.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 *     _CmDeleteDeviceRegKey @ 0x1406D85AC (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  __int16 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx
  NTSTATUS inited; // edi
  int v16; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  char v20[4]; // [rsp+48h] [rbp-41h] BYREF
  int v21; // [rsp+4Ch] [rbp-3Dh]
  int v22; // [rsp+50h] [rbp-39h]
  __int64 v23; // [rsp+58h] [rbp-31h]
  int v24; // [rsp+64h] [rbp-25h]
  int v25; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  WCHAR SourceString[8]; // [rsp+80h] [rbp-9h] BYREF

  v18 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  Value = 0;
  v16 = 0;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, v20);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v23 && v22 == 1 && a3 && a4 >= 8 )
      {
        v9 = PiCMConvertDeviceKeyType(v21, &v16);
        if ( v9 >= 0 )
        {
          if ( (v10 & 0xFF00) == 0x200 && v24 == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, &v18) >= 0 )
            {
              v11 = 0LL;
              if ( *(_QWORD *)&PiPnpRtlCtx )
                v11 = **(_QWORD **)&PiPnpRtlCtx;
              v12 = 0;
              if ( (int)SysCtxRegOpenKey(
                          v11,
                          v18,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  if ( v9 < 0 )
                    break;
                  LODWORD(v18) = 5;
                  inited = PnpCtxRegEnumKey(v13, Handle, v12, SourceString, &v18);
                  if ( inited >= 0 )
                  {
                    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                    if ( inited >= 0 )
                    {
                      inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                      if ( inited >= 0 )
                      {
                        v9 = CmDeleteDeviceRegKey(PiPnpRtlCtx, v23);
                        if ( v9 == -1073741772 )
                          v9 = 0;
                      }
                    }
                  }
                  ++v12;
                }
                while ( inited >= 0 );
              }
            }
          }
          else
          {
            v9 = CmDeleteDeviceRegKey(PiPnpRtlCtx, v23);
          }
        }
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
    if ( Handle )
      ZwClose(Handle);
    v8 = PiCMReturnBasicResultData(v9, v25, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v20);
  return (unsigned int)v8;
}
