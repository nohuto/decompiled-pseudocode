/*
 * XREFs of SmStoreCreate @ 0x140697094
 * Callers:
 *     SmcStoreCreate @ 0x14069A674 (SmcStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwSetSystemInformation @ 0x14015D4D0 (ZwSetSystemInformation.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmStorePhysicalRequestIssue @ 0x14069722C (SmStorePhysicalRequestIssue.c)
 */

NTSTATUS __fastcall SmStoreCreate(int a1, __int64 a2, _DWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  NTSTATUS result; // eax
  int v9; // ecx
  _QWORD SystemInformation[3]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v12[12]; // [rsp+50h] [rbp-29h] BYREF

  SystemInformation[0] = 0x300000001LL;
  SystemInformation[1] = v12;
  SystemInformation[2] = 88LL;
  memset(v12, 0, 0x58uLL);
  v6 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v12[1] = *(_OWORD *)a2;
  v7 = *(_OWORD *)(a2 + 32);
  LODWORD(v12[0]) = v12[0] & 0xFFFFFF00 | 6;
  *(_OWORD *)&v12[5] = v7;
  v12[9] = *(_QWORD *)(a2 + 64);
  *(_OWORD *)&v12[3] = v6;
  *(_OWORD *)&v12[7] = *(_OWORD *)(a2 + 48);
  if ( a1 )
  {
    if ( a1 != 1 )
      return -1073741811;
    result = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18uLL);
    v9 = v12[10];
  }
  else
  {
    result = SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v11);
    v9 = v11;
  }
  if ( result >= 0 )
  {
    *a3 = v9;
    return 0;
  }
  return result;
}
