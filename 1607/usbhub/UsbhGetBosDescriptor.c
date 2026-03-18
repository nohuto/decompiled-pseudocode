/*
 * XREFs of UsbhGetBosDescriptor @ 0x1C0054390
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043894 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001FEA0 (UsbhSyncSendCommandToDevice.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  void *v13; // rcx
  __int16 v14; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+42h] [rbp-Eh]
  __int16 v16; // [rsp+46h] [rbp-Ah]
  char v17; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int16 v18; // [rsp+9Ah] [rbp+4Ah]

  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  v14 = 1664;
  v15 = 3840;
  v16 = 5;
  *(_DWORD *)a3 = 5;
  result = UsbhSyncSendCommandToDevice(a1, a2, &v14, (__int64)&v17, a3);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v7[699] = 1073807371;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v18, 0x42554855u);
    *((_QWORD *)v7 + 299) = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v18);
    v10 = *((_QWORD *)v7 + 299);
    if ( v10 )
    {
      v16 = v18;
      *(_DWORD *)a3 = v18;
      v14 = 1664;
      v15 = 3840;
      v11 = UsbhSyncSendCommandToDevice(a1, a2, &v14, v10, a3);
      v12 = v11;
      if ( (v11 & 0xC0000000) == 0xC0000000 )
      {
        v13 = (void *)*((_QWORD *)v7 + 299);
        v7[699] = 1073807371;
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          *((_QWORD *)v7 + 299) = 0LL;
        }
      }
      Log(a1, 256, 1195528019, v12, 0LL);
      return (unsigned int)v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
