/*
 * XREFs of Crashdump_InitializeDeviceContext @ 0x1C0033DFC
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0034910 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0016F34 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C00364A0 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C0037904 (Crashdump_UsbDevice_Initialize.c)
 */

__int64 __fastcall Crashdump_InitializeDeviceContext(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // r14
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r13
  PVOID v18; // rax
  int v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]

  v8 = DeviceSlot_LocateDeviceByPortPath(a1, a4, &v21);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v10 = v21;
  LOBYTE(v9) = *(_BYTE *)(v21 + 135);
  v20 = *(_DWORD *)(a4 + 4);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 424) + 16LL);
  v11 = v22;
  v8 = Crashdump_UsbDevice_Initialize(a5, a2, a3, v9, v22, v21, v20);
  if ( v8 < 0 )
    return (unsigned int)v8;
  PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0xE8uLL, 0x43434858u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0xE8uLL);
  v8 = Crashdump_Endpoint_Initialize((_DWORD)v13, a2, a5, 1, 0, v11);
  if ( v8 < 0 )
    goto LABEL_13;
  *(_QWORD *)(a5 + 152) = v13;
  v13 = 0LL;
  if ( !a3 || (v14 = 0LL, !*(_DWORD *)a3) )
  {
LABEL_12:
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_13:
    if ( v13 )
      ExFreePoolWithTag(v13, 0x43434858u);
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(a3 + 8);
    v15 = (*(unsigned __int8 *)(v23 + 8 * v14) >> 7) + 2 * (*(_BYTE *)(v23 + 8 * v14) & 0x7Fu);
    v16 = *(_QWORD *)(v10 + 8 * v15 + 168) == 0LL;
    LODWORD(v21) = (*(unsigned __int8 *)(v23 + 8 * v14) >> 7) + 2 * (*(_BYTE *)(v23 + 8 * v14) & 0x7F);
    v17 = (unsigned int)v15;
    if ( v16 )
      break;
    v18 = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0xE8uLL, 0x43434858u);
    v13 = v18;
    if ( !v18 )
    {
      v8 = -1073741670;
      goto LABEL_12;
    }
    memset(v18, 0, 0xE8uLL);
    v8 = Crashdump_Endpoint_Initialize((_DWORD)v13, a2, a5, v21, *(_DWORD *)(v23 + 8 * v14 + 4), v22);
    if ( v8 < 0 )
      goto LABEL_13;
    *(_QWORD *)(a5 + 8 * v17 + 144) = v13;
    v14 = (unsigned int)(v14 + 1);
    v13 = 0LL;
    if ( (unsigned int)v14 >= *(_DWORD *)a3 )
      goto LABEL_12;
  }
  return (unsigned int)-1073741811;
}
