/*
 * XREFs of ExpHwidAuthenticateHardwareId @ 0x1404D917C
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404BE6E8 (ExpHwidProcessInterface.c)
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 * Callees:
 *     sub_1404D90CC @ 0x1404D90CC (sub_1404D90CC.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1404DA098 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404DA114 (ExpHwidGetDevicePropertyData.c)
 */

__int64 __fastcall ExpHwidAuthenticateHardwareId(PDEVICE_OBJECT Pdo, __int64 a2)
{
  char v4; // si
  char v5; // bl
  char v6; // bp
  char v7; // al
  int DevicePropertyData; // eax
  __int64 result; // rax
  char v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (int)ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_IsPresent, 17LL, 1, &v10) < 0 )
  {
    v5 = 4;
  }
  else if ( v10 == -1 )
  {
    v6 = 1;
    v4 = 2;
    goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( (int)ExpHwidGetDevicePropertyData(Pdo, (int)a2 + 40) < 0 )
  {
    v5 |= 8u;
LABEL_22:
    v7 = 1;
    v4 |= 4u;
    goto LABEL_7;
  }
  if ( *(_WORD *)(a2 + 40) == 8 && **(_QWORD **)(a2 + 48) == *(_QWORD *)L"SWD" )
    goto LABEL_22;
  v7 = 0;
LABEL_7:
  if ( !v5 && v6 && !v7 && *(_DWORD *)(a2 + 36) >= 2u )
  {
    DevicePropertyData = ExpHwidGetDevicePropertyData(Pdo, (int)a2 + 72);
    if ( DevicePropertyData == -1073741772 )
      DevicePropertyData = 0;
    if ( DevicePropertyData < 0 )
      v5 = 2;
    if ( (int)ExpHwidGetDevicePropertyDataFixed(Pdo, 0LL, &DEVPKEY_Device_ReportedDeviceIdsHash, 7LL, 4, &v12) < 0 )
    {
      v5 |= 1u;
    }
    else
    {
      v11 = 0;
      if ( sub_1404D90CC(&v11, (__int16 *)(a2 + 56)) >= 0
        && sub_1404D90CC(&v11, (__int16 *)(a2 + 72)) >= 0
        && v11 == v12 )
      {
        v4 |= 1u;
      }
    }
  }
  *(_BYTE *)(a2 + 33) |= v5;
  result = 0LL;
  *(_BYTE *)(a2 + 32) = v4;
  return result;
}
