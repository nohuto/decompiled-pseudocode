/*
 * XREFs of KeNumaInitialize @ 0x1407BCE94
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

__int64 KeNumaInitialize()
{
  __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-48h]
  __int64 (__fastcall *v2)(_QWORD); // [rsp+28h] [rbp-40h]
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // [rsp+38h] [rbp-30h]
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-20h]
  __int64 (__fastcall *v5)(__int16, _DWORD *); // [rsp+50h] [rbp-18h]
  __int64 (__fastcall *v6)(__int16, __int16, _DWORD *); // [rsp+58h] [rbp-10h]

  result = off_1402F37E8();
  if ( (int)result >= 0 )
  {
    KeNumberNodes = v1;
    KiNumaQueryProcessorNode = v2;
    KiQueryNodeCapacity = v5;
    KiQueryNodeDistance = v6;
    PnpQueryProximityNode = v3;
    result = (__int64)v4;
    PnpQueryProximityId = v4;
  }
  return result;
}
