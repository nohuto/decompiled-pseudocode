/*
 * XREFs of UsbhBuildCompatibleID @ 0x1C00074EC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhBuildClassCompatibleID @ 0x1C0007888 (UsbhBuildClassCompatibleID.c)
 *     UsbhMakeId @ 0x1C00084B0 (UsbhMakeId.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00289CC (UsbhBuildDeviceCompatibleID.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 Id; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _OWORD *PoolWithTag; // rax
  _OWORD *v12; // rdi
  int v13; // [rsp+20h] [rbp-28h]
  __int16 v14; // [rsp+28h] [rbp-20h]
  __int16 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  Log(a1, 4096, 1667451204, a2, 0LL);
  if ( !v6 )
  {
    v15 = 0;
    v14 = 0;
    LOWORD(v13) = 2;
    Id = UsbhMakeId(0LL, L"USB\\UNKNOWN", 0LL, &v16, v13, v14, v15, 0LL);
    if ( Id )
    {
      *(_QWORD *)(a3 + 8) = Id;
      *(_DWORD *)(a3 + 4) = v16;
      return 0LL;
    }
    return 3221225626LL;
  }
  v10 = *(unsigned int *)(PdoExt(a2) + 1412);
  if ( (v10 & 0x40) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x44uLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x44uLL);
      *v12 = xmmword_1C005F0B0;
      v12[1] = xmmword_1C005F0C0;
      v12[2] = xmmword_1C005F0D0;
      v12[3] = xmmword_1C005F0E0;
      *((_DWORD *)v12 + 16) = 0;
      *(_QWORD *)(a3 + 8) = v12;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v10 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(v10, v9, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
