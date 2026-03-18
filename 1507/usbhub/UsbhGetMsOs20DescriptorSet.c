/*
 * XREFs of UsbhGetMsOs20DescriptorSet @ 0x1C003FC00
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhGetMsOs20DescriptorSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbx
  PVOID PoolWithTag; // rax
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // edi
  void *v13; // rcx
  _BYTE v14[2]; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+42h] [rbp-26h]
  __int16 v16; // [rsp+46h] [rbp-22h]
  __int16 v17; // [rsp+80h] [rbp+18h] BYREF

  v7 = PdoExt(a2, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a3 + 4), 0x42554855u);
  *((_QWORD *)v7 + 351) = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, *(unsigned __int16 *)(a3 + 4));
  v9 = *((_QWORD *)v7 + 351);
  if ( v9 )
  {
    v11 = *((_QWORD *)v7 + 147);
    v14[1] = *(_BYTE *)(a3 + 6);
    v16 = *(_WORD *)(a3 + 4);
    v17 = v16;
    v14[0] = -64;
    v15 = 458752;
    v12 = UsbhSyncSendCommandToDevice(v11, a2, v14, v9, &v17);
    if ( v12 >= 0 )
    {
      *((_WORD *)v7 + 1398) = v17;
    }
    else
    {
      Log(a1, 4, 1297297969, 0LL, 0LL);
      v13 = (void *)*((_QWORD *)v7 + 351);
      *((_WORD *)v7 + 1398) = 0;
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0);
        *((_QWORD *)v7 + 351) = 0LL;
      }
    }
    return (unsigned int)v12;
  }
  else
  {
    Log(a1, 4, 1297297968, 0LL, 0LL);
    result = 3221225626LL;
    *((_WORD *)v7 + 1398) = 0;
  }
  return result;
}
