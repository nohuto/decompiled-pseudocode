/*
 * XREFs of sub_1406B9E7C @ 0x1406B9E7C
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404DB0E4 (ExpHwidProcessInterface.c)
 * Callees:
 *     sub_1404F5C98 @ 0x1404F5C98 (sub_1404F5C98.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404F7188 (ExpHwidGetDevicePropertyData.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1406E59D0 (PnpGetDeviceInstancePropertyData.c)
 */

__int64 __fastcall sub_1406B9E7C(__int64 a1, __int64 a2)
{
  int v3; // r10d
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  sub_1404F5C98(a2, a2);
  result = ExpHwidGetDevicePropertyData(0LL, v3, &DEVPKEY_Device_InstanceId, 18, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v11 = 0;
    v12 = 0;
    result = PnpGetDeviceInstancePropertyData(v8, v5, v6, v7, v9, (__int64)&v10, (__int64)&v11, (__int64)&v12);
    if ( (int)result >= 0 && v11 == 1 && v12 == 17 && v10 == -1 )
      *(_BYTE *)(a2 + 34) = 1;
    else
      *(_BYTE *)(a2 + 34) = 3;
    *(_DWORD *)(a2 + 36) = 0;
    *(_WORD *)(a2 + 32) = 4096;
  }
  return result;
}
