/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C00434A0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhValidateStringDescriptor @ 0x1C0028ED4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0028F10 (UsbhGetStringFromDevice.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // r12
  _DWORD *v8; // r15
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  int StringFromDevice; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // r8d
  int v16; // edi
  unsigned __int8 v17; // r14
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rcx
  int v22; // r8d
  int updated; // eax
  unsigned __int8 v24; // [rsp+30h] [rbp-50h]
  unsigned __int8 v25; // [rsp+30h] [rbp-50h]
  int v26; // [rsp+48h] [rbp-38h]
  unsigned __int16 v27[2]; // [rsp+50h] [rbp-30h] BYREF
  char v28; // [rsp+54h] [rbp-2Ch]
  char v29; // [rsp+55h] [rbp-2Bh]
  int v30; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+60h] [rbp-20h]
  unsigned __int64 v32; // [rsp+68h] [rbp-18h] BYREF
  char v33; // [rsp+70h] [rbp-10h]
  char v34; // [rsp+71h] [rbp-Fh]
  char v35; // [rsp+72h] [rbp-Eh]

  v31 = a2;
  v7 = 0;
  v29 = 0;
  v28 = 0;
  v8 = PdoExt(a2, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0xFFuLL);
  if ( *(_BYTE *)(a3 + 3) )
  {
    v24 = *(_BYTE *)(a3 + 3);
    v27[0] = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)&v30, (__int64)v10, v27, 0x409u, v24);
    v12 = StringFromDevice;
    v13 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v13 == -1073741824 )
    {
      LOBYTE(v26) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v8 + 710),
        140,
        (int)v10,
        v27[0],
        StringFromDevice,
        v30,
        usbfile_bus_c,
        7544,
        v26);
      v14 = 4678194;
LABEL_5:
      Log(a1, 4, v14, 0LL, v12);
LABEL_6:
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)v12;
    }
    v16 = v27[0];
    if ( !UsbhValidateStringDescriptor(v13, (unsigned __int8 *)v10, v27[0], &v30) )
    {
      LOBYTE(v26) = 0;
      UsbhException(a1, *((unsigned __int16 *)v8 + 710), 38, (int)v10, v16, v12, v30, usbfile_bus_c, 7556, v26);
      v14 = 4678195;
      goto LABEL_5;
    }
  }
  v17 = 0;
  if ( !*(_BYTE *)(a3 + 4) )
  {
LABEL_22:
    v32 = (unsigned __int64)v8;
    v33 = 1;
    v34 = v7;
    v35 = v28;
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_DEVICE_STATE, &v32, 11LL, 0LL, 0LL);
    LODWORD(v12) = updated;
    if ( updated >= 0 )
    {
      v8[356] |= 0x80000u;
    }
    else
    {
      Log(a1, 4, 4678198, 0LL, updated);
      LODWORD(v12) = 0;
    }
    goto LABEL_6;
  }
  while ( 1 )
  {
    v18 = v17;
    v32 = v17;
    if ( !*(_BYTE *)(a3 + 4LL * v17 + 47) )
      goto LABEL_14;
    v25 = *(_BYTE *)(a3 + 4LL * v17 + 47);
    v27[0] = 255;
    v19 = UsbhGetStringFromDevice(a1, v31, (__int64)&v30, (__int64)v10, v27, 0x409u, v25);
    v20 = v19;
    v21 = v19 & 0xC0000000;
    if ( (_DWORD)v21 == -1073741824 )
      break;
    if ( !UsbhValidateStringDescriptor(v21, (unsigned __int8 *)v10, v27[0], &v30) )
    {
      LOBYTE(v26) = 0;
      UsbhException(a1, *((unsigned __int16 *)v8 + 710), 38, (int)v10, v27[0], v20, v30, usbfile_bus_c, 7593, v26);
      v22 = 4678197;
      goto LABEL_21;
    }
    v18 = v32;
    v7 = v29;
LABEL_14:
    if ( ((*(_BYTE *)((v18 >> 2) + a3 + 8) >> (2 * (v17 % 4))) & 3) == 3 )
    {
      v28 = 1;
    }
    else
    {
      v7 = 1;
      v29 = 1;
    }
    if ( ++v17 >= *(_BYTE *)(a3 + 4) )
      goto LABEL_22;
  }
  LOBYTE(v26) = 0;
  UsbhException(a1, *((unsigned __int16 *)v8 + 710), 141, (int)v10, v27[0], v19, v30, usbfile_bus_c, 7581, v26);
  v22 = 4678196;
LABEL_21:
  Log(a1, 4, v22, 0LL, v20);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)v20;
}
