/*
 * XREFs of UsbhGetBosDescriptor @ 0x1C0053D80
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  void *v16; // rcx
  __int16 v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+42h] [rbp-Eh]
  __int16 v19; // [rsp+46h] [rbp-Ah]
  char v20; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int16 v21; // [rsp+9Ah] [rbp+4Ah]

  FdoExt(a1, a2, (__int64)a3, a4);
  v10 = PdoExt(a2, v7, v8, v9);
  v17 = 1664;
  v18 = 3840;
  v19 = 5;
  *(_DWORD *)a3 = 5;
  result = UsbhSyncSendCommandToDevice(a1, a2, &v17, (__int64)&v20, a3);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v10[697] = 1073807371;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v21, 0x42554855u);
    *((_QWORD *)v10 + 299) = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v21);
    v13 = *((_QWORD *)v10 + 299);
    if ( v13 )
    {
      v19 = v21;
      *(_DWORD *)a3 = v21;
      v17 = 1664;
      v18 = 3840;
      v14 = UsbhSyncSendCommandToDevice(a1, a2, &v17, v13, a3);
      v15 = v14;
      if ( (v14 & 0xC0000000) == 0xC0000000 )
      {
        v16 = (void *)*((_QWORD *)v10 + 299);
        v10[697] = 1073807371;
        if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
          *((_QWORD *)v10 + 299) = 0LL;
        }
      }
      Log(a1, 256, 1195528019, v15, 0LL);
      return (unsigned int)v15;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
