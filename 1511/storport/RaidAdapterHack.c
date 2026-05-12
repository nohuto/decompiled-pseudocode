/*
 * XREFs of RaidAdapterHack @ 0x1C000AAD8
 * Callers:
 *     RaDriverAddDevice @ 0x1C000A930 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 *     RaDeleteBus @ 0x1C0050E94 (RaDeleteBus.c)
 *     RaInitializeBus @ 0x1C0050EC8 (RaInitializeBus.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0053944 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING v6; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v7[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v8; // [rsp+70h] [rbp-39h]
  unsigned int (__fastcall *v9)(__int64, __int64, _WORD *, _QWORD, int); // [rsp+A0h] [rbp-9h]
  _WORD v10[32]; // [rsp+B0h] [rbp+7h] BYREF

  v4 = 0;
  memset(v10, 0, sizeof(v10));
  result = RaInitializeBus(v7, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( v9(v8, 4LL, v10, 0LL, 64) >= 0xF
      && v10[0] == 5197
      && (v10[1] == 5632 || (unsigned __int16)(v10[1] + 22528) <= 1u) )
    {
      RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
      RtlInitUnicodeString(&v6, L"MSISupported");
      v3 = PortRegistryWriteDeviceKey(
             *(_QWORD *)(a1 + 32),
             (unsigned int)&DestinationString,
             (unsigned int)&v6,
             4,
             (__int64)&v4,
             4);
      if ( v3 < 0
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          67LL,
          &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
          (unsigned int)v3);
      }
    }
    return RaDeleteBus(v7);
  }
  return result;
}
