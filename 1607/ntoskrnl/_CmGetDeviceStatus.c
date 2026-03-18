/*
 * XREFs of _CmGetDeviceStatus @ 0x1404F78AC
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404CF88C (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404F7394 (PiCMGetDeviceStatus.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x14064879C (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404F8854 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        int a1,
        const WCHAR *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int v13; // r12d
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
  v13 = (int)a2;
  inited = RtlInitUnicodeStringEx(&v16, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&v16, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, v13, a3, 11, (__int64)&a5, (__int64)&v17, (__int64)&a7, 0)
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
