/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C00204E0
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001F340 (UsbhConfigureUsbHub.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetDescriptor @ 0x1C00206F4 (UsbhGetDescriptor.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  unsigned __int16 v7; // di
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rbx
  __int64 Descriptor; // rdi
  __int64 v11; // r9
  unsigned __int16 v12; // r10
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  unsigned __int16 v18; // [rsp+78h] [rbp+10h]

  v6 = -1;
  FdoExt(a1, (__int64)a2, a3, a4);
  *a2 = 0LL;
  v7 = 255;
  v18 = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v7);
    Descriptor = (int)UsbhGetDescriptor(a1, v15, 0);
    Log(a1, 8, 1734894385, v18, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    if ( v12 < 9u )
    {
      LOBYTE(v17) = 0;
      v16 = 3933;
      goto LABEL_12;
    }
    Log(a1, 8, 1734894386, v11, v9[1]);
    if ( v9[1] <= v12 )
    {
      Log(a1, 8, 1734894387, (__int64)v9, Descriptor);
      *a2 = v9;
      return (unsigned int)Descriptor;
    }
    if ( !v6 )
    {
      LOBYTE(v17) = 0;
      v16 = 3951;
LABEL_12:
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v9, v12, -1073741823, -1, usbfile_hub_c, v16, v17);
LABEL_13:
      ExFreePoolWithTag(v9, 0);
      return (unsigned int)Descriptor;
    }
    ++v6;
    Log(a1, 8, 1734894418, v13, Descriptor);
    v7 = v9[1];
    v18 = v7;
    ExFreePoolWithTag(v9, 0);
  }
}
