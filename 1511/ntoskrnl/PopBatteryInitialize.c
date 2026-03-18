/*
 * XREFs of PopBatteryInitialize @ 0x140636B2C
 * Callers:
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     IoSynchronousCallDriver @ 0x1400EB0E0 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopPrepareIoctl @ 0x14054CA20 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  IRP *v2; // rcx
  NTSTATUS result; // eax
  int v4; // eax
  const char *v5; // rcx
  __int128 v6; // xmm1
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 v10; // [rsp+20h] [rbp-98h]
  __int64 v11; // [rsp+28h] [rbp-90h]
  int v12; // [rsp+40h] [rbp-78h]
  int v13; // [rsp+48h] [rbp-70h]
  int v14; // [rsp+50h] [rbp-68h]
  int v15; // [rsp+58h] [rbp-60h]
  int v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+68h] [rbp-50h]
  _BYTE v18[36]; // [rsp+70h] [rbp-48h] BYREF
  int v19; // [rsp+98h] [rbp-20h] BYREF
  char v20; // [rsp+9Ch] [rbp-1Ch]

  memset(v18, 0, sizeof(v18));
  v2 = *(IRP **)(a1 + 56);
  *(_QWORD *)v18 = *(unsigned int *)(a1 + 108);
  PopPrepareIoctl(v2, 0x294044u, 0, (struct _IRP *)v18, 0xCu, 0x24u);
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v4 = *(_DWORD *)&v18[32];
    v5 = "non-rechargeable";
    v6 = *(_OWORD *)&v18[16];
    v20 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v18;
    *(_OWORD *)(a1 + 128) = v6;
    *(_DWORD *)(a1 + 144) = v4;
    v7 = *(_BYTE *)(a1 + 116) == 0;
    v19 = *(_DWORD *)(a1 + 120);
    if ( !v7 )
      v5 = "rechargeable";
    v17 = *(_DWORD *)(a1 + 144);
    v16 = *(_DWORD *)(a1 + 140);
    v15 = *(_DWORD *)(a1 + 136);
    v14 = *(_DWORD *)(a1 + 132);
    v13 = *(_DWORD *)(a1 + 128);
    v12 = *(_DWORD *)(a1 + 124);
    LODWORD(v11) = *(_DWORD *)(a1 + 112);
    LODWORD(v10) = *(_DWORD *)(a1 + 108);
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      v10,
      v11,
      v5,
      &v19,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    *(_DWORD *)(a1 + 104) = 3;
    v8 = (__int64 *)(a1 + 64);
    v9 = (__int64 **)qword_1402DE3F8;
    *v8 = (__int64)&qword_1402DE3F0;
    v8[1] = (__int64)v9;
    if ( *v9 != &qword_1402DE3F0 )
      __fastfail(3u);
    *v9 = v8;
    ++dword_1402DE3D4;
    ++dword_1402DE438;
    result = 0;
    qword_1402DE3F8 = (__int64)v8;
    byte_1402DE3D8 = 1;
  }
  return result;
}
