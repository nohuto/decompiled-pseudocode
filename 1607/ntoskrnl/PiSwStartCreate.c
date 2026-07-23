/*
 * XREFs of PiSwStartCreate @ 0x140645A68
 * Callers:
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PnpGetMultiSzLength @ 0x14051B1C0 (PnpGetMultiSzLength.c)
 */

NTSTATUS __fastcall PiSwStartCreate(
        size_t a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v16; // rbx
  NTSTATUS result; // eax
  _QWORD v18[16]; // [rsp+28h] [rbp-71h] BYREF
  size_t v19; // [rsp+B8h] [rbp+1Fh] BYREF

  v19 = a1;
  memset(&v18[1], 0, 0x70uLL);
  v18[1] = a2;
  v16 = a5;
  v18[0] = L"DRIVERENUM";
  v18[7] = a6;
  LODWORD(v18[8]) = a7;
  v18[9] = a8;
  v18[10] = a9;
  LODWORD(v18[11]) = a11;
  v18[12] = a10;
  LODWORD(v18[13]) = a13;
  v18[2] = a3;
  v18[14] = a12;
  v18[4] = a4;
  v18[6] = a5;
  if ( a4 )
  {
    result = PnpGetMultiSzLength(a4, 1024LL, &v19);
    if ( result < 0 )
      return result;
    LODWORD(v18[3]) = v19;
  }
  if ( v16 )
  {
    result = PnpGetMultiSzLength(v16, 1024LL, &v19);
    if ( result < 0 )
      return result;
    LODWORD(v18[5]) = v19;
  }
  return PiSwIrpStartCreateWorker((__int64)v18, 0LL);
}
