/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C00436C0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhValidateStringDescriptor @ 0x1C0027E94 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0027ED0 (UsbhGetStringFromDevice.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // r13
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdi
  int StringFromDevice; // eax
  __int64 v12; // rcx
  int v13; // r8d
  int v15; // r14d
  unsigned __int8 i; // r14
  int v17; // eax
  unsigned __int8 v18; // [rsp+30h] [rbp-30h]
  unsigned __int8 v19; // [rsp+30h] [rbp-30h]
  int v20; // [rsp+48h] [rbp-18h]
  int v21[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v22; // [rsp+A8h] [rbp+48h] BYREF

  v7 = PdoExt(a2, a2, a3, a4);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    LODWORD(v10) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v18 = *(_BYTE *)(a3 + 3);
      v22 = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)v21, (__int64)v9, &v22, 0x409u, v18);
      v10 = StringFromDevice;
      v12 = StringFromDevice & 0xC0000000;
      if ( (_DWORD)v12 == -1073741824 )
      {
        LOBYTE(v20) = 0;
        UsbhException(
          a1,
          *((unsigned __int16 *)v7 + 710),
          140,
          (int)v9,
          v22,
          StringFromDevice,
          v21[0],
          usbfile_bus_c,
          7521,
          v20);
        v13 = 4678194;
        goto LABEL_5;
      }
      v15 = v22;
      if ( !UsbhValidateStringDescriptor(v12, v9, v22, v21) )
      {
        LOBYTE(v20) = 0;
        UsbhException(a1, *((unsigned __int16 *)v7 + 710), 38, (int)v9, v15, v10, v21[0], usbfile_bus_c, 7533, v20);
        v13 = 4678195;
        goto LABEL_5;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v19 = *(_BYTE *)(a3 + 4LL * i + 47);
        v22 = 255;
        v17 = UsbhGetStringFromDevice(a1, a2, (__int64)v21, (__int64)v9, &v22, 0x409u, v19);
        v10 = v17;
        if ( (v17 & 0xC0000000) == 0xC0000000 )
        {
          LOBYTE(v20) = 0;
          UsbhException(a1, *((unsigned __int16 *)v7 + 710), 141, (int)v9, v22, v17, v21[0], usbfile_bus_c, 7558, v20);
          v13 = 4678196;
LABEL_5:
          Log(a1, 4, v13, 0LL, v10);
          break;
        }
        if ( !UsbhValidateStringDescriptor(3221225472LL, v9, v22, v21) )
        {
          LOBYTE(v20) = 0;
          UsbhException(a1, *((unsigned __int16 *)v7 + 710), 38, (int)v9, v22, v10, v21[0], usbfile_bus_c, 7570, v20);
          v13 = 4678197;
          goto LABEL_5;
        }
      }
    }
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v10;
  }
  else
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
}
