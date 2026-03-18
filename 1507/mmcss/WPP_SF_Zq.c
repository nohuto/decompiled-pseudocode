/*
 * XREFs of WPP_SF_Zq @ 0x1C0003F18
 * Callers:
 *     CiDispatchInitialize @ 0x1C000D140 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  const wchar_t *v1; // rdx
  __int64 v2; // r8
  PDEVICE_OBJECT v4[3]; // [rsp+60h] [rbp-18h] BYREF

  v1 = (const wchar_t *)MEMORY[0x1C000F028];
  v4[0] = CiDeviceObject;
  if ( MEMORY[0x1C000F028] )
  {
    v2 = 26LL;
  }
  else
  {
    v2 = 10LL;
    v1 = L"NULL";
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64, __int64, const wchar_t *, __int64, PDEVICE_OBJECT *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids,
           21LL,
           0x1C000F020LL,
           2LL,
           v1,
           v2,
           v4,
           8LL,
           0LL);
}
