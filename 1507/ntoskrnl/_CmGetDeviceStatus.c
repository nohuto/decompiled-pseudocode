/*
 * XREFs of _CmGetDeviceStatus @ 0x1404DCCB8
 * Callers:
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404DA6E0 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404DBEC4 (PiCMGetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMSetProblem @ 0x14058B0D8 (PiCMSetProblem.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DCDE0 (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  NTSTATUS inited; // esi
  UNICODE_STRING v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v17 = 0;
  *v7 = 0;
  *v9 = 0;
  inited = RtlInitUnicodeStringEx(&v16, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&v16, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&a5, (__int64)&v17, (__int64)&a7)
        && a7 >= 4
        && (_DWORD)a5 == 4 )
      {
        v8 = v17;
      }
      if ( (v8 & 4) != 0 )
        *a4 |= 0x10u;
      if ( (*a4 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 |= 0x400u;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
