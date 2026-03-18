/*
 * XREFs of _CmGetDeviceStatus @ 0x14045BF1C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x14045BD84 (PiCMGetDeviceStatus.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14045C2F8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x140614004 (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140441D70 (_NtPlugPlayGetDeviceStatus.c)
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
  int inited; // esi
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
    inited = NtPlugPlayGetDeviceStatus(a1, (__int64)&v16, (__int64)a4, (__int64)v7, (__int64)v9, 0);
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
