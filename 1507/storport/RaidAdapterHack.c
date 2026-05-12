/*
 * XREFs of RaidAdapterHack @ 0x1C00214D8
 * Callers:
 *     RaDriverAddDevice @ 0x1C0008830 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     WPP_SF_D @ 0x1C00256F0 (WPP_SF_D.c)
 *     RaGetBusData @ 0x1C0025DBC (RaGetBusData.c)
 *     PortRegistryWriteDeviceKey @ 0x1C004FBE4 (PortRegistryWriteDeviceKey.c)
 *     RaInitializeBus @ 0x1C004FC4C (RaInitializeBus.c)
 *     RaDeleteBus @ 0x1C00535E4 (RaDeleteBus.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // eax
  int v5; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING v7; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v8[80]; // [rsp+60h] [rbp-49h] BYREF
  _WORD v9[32]; // [rsp+B0h] [rbp+7h] BYREF

  v5 = 0;
  memset(v9, 0, sizeof(v9));
  result = RaInitializeBus(v8, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaGetBusData((unsigned int)v8, 4, (unsigned int)v9, v3, 64) >= 0xF
      && v9[0] == 5197
      && (v9[1] == 5632 || (unsigned __int16)(v9[1] + 22528) <= 1u) )
    {
      RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
      RtlInitUnicodeString(&v7, L"MSISupported");
      v4 = PortRegistryWriteDeviceKey(
             *(_QWORD *)(a1 + 32),
             (unsigned int)&DestinationString,
             (unsigned int)&v7,
             4,
             (__int64)&v5,
             4);
      if ( v4 < 0
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          67LL,
          &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
          (unsigned int)v4);
      }
    }
    return RaDeleteBus(v8);
  }
  return result;
}
