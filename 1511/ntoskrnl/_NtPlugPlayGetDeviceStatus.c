/*
 * XREFs of _NtPlugPlayGetDeviceStatus @ 0x140441D70
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _CmIsDevicePresent @ 0x1404B01E0 (_CmIsDevicePresent.c)
 * Callees:
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x14043F424 (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v10; // r11
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 2, v11);
  if ( (int)result >= 0 )
  {
    if ( v11[0] )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int))v11[0])(
                 v10,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6);
      if ( (_DWORD)result == -2147483643 )
        return 3221225507LL;
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
