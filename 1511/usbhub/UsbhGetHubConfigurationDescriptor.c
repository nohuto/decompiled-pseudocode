/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C001CD1C
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001D394 (UsbhConfigureUsbHub.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhGetDescriptor @ 0x1C001BBA0 (UsbhGetDescriptor.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  unsigned __int16 v7; // di
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // r9
  __int64 Descriptor; // rdi
  __int64 v12; // r9
  unsigned __int16 v13; // r10
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-20h]
  unsigned __int16 v19; // [rsp+78h] [rbp+10h] BYREF

  v6 = -1;
  FdoExt(a1, (__int64)a2, a3, a4);
  *a2 = 0LL;
  v7 = 255;
  v19 = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v7);
    LOBYTE(v10) = 2;
    Descriptor = (int)UsbhGetDescriptor(a1, &v19, (__int64)v9, v10, v16, 0);
    Log(a1, 8, 1734894385, v19, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    if ( v13 < 9u )
    {
      LOBYTE(v18) = 0;
      v17 = 3933;
      goto LABEL_12;
    }
    Log(a1, 8, 1734894386, v12, v9[1]);
    if ( v9[1] <= v13 )
    {
      Log(a1, 8, 1734894387, (__int64)v9, Descriptor);
      *a2 = v9;
      return (unsigned int)Descriptor;
    }
    if ( !v6 )
    {
      LOBYTE(v18) = 0;
      v17 = 3951;
LABEL_12:
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v9, v13, -1073741823, -1, usbfile_hub_c, v17, v18);
LABEL_13:
      ExFreePoolWithTag(v9, 0);
      return (unsigned int)Descriptor;
    }
    ++v6;
    Log(a1, 8, 1734894418, v14, Descriptor);
    v7 = v9[1];
    v19 = v7;
    ExFreePoolWithTag(v9, 0);
  }
}
