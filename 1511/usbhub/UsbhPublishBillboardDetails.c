/*
 * XREFs of UsbhPublishBillboardDetails @ 0x1C0054BFC
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C00090F0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

void __fastcall UsbhPublishBillboardDetails(PDEVICE_OBJECT Pdo, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbp
  __int64 v6; // rsi
  ULONG Size; // r15d
  _BYTE *PoolWithTag; // rax
  _BYTE *Data; // rbx
  __int64 v10; // r10
  unsigned int v11; // r9d
  int v12; // edx
  unsigned __int8 v13; // cf
  NTSTATUS updated; // eax
  int v15; // r8d
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-28h] BYREF

  v5 = PdoExt((__int64)Pdo, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 300);
  Size = 8 * *(unsigned __int8 *)(v6 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x42554855u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    *Data = *(_BYTE *)(v6 + 4);
    Data[1] = *(_BYTE *)(v6 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v6 + 8), 0x20u);
    v10 = 0LL;
    if ( *(_BYTE *)(v6 + 4) )
    {
      v11 = 0;
      do
      {
        *(_WORD *)&Data[8 * v10 + 4] = *(_WORD *)(v6 + 4 * v10 + 44);
        Data[8 * v10 + 6] = *(_BYTE *)(v6 + 4 * v10 + 46);
        v12 = 2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, v11 + 1);
        v13 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v11);
        v11 += 2;
        *(_DWORD *)&Data[8 * v10 + 8] = v13 | v12;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *(unsigned __int8 *)(v6 + 4) );
    }
    updated = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, Size, Data);
    if ( updated >= 0 )
    {
      updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL);
      if ( updated >= 0 )
      {
LABEL_10:
        ExFreePoolWithTag(Data, 0);
        return;
      }
      v15 = 1885626931;
    }
    else
    {
      v15 = 1885626930;
    }
    Log(*((_QWORD *)v5 + 147), 256, v15, updated, (__int64)Pdo);
    goto LABEL_10;
  }
  Log(*((_QWORD *)v5 + 147), 256, 1885496369, Size, (__int64)Pdo);
}
