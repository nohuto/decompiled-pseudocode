/*
 * XREFs of UsbhGetProductIdString @ 0x1C0027D34
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0 (UsbhPdoPnp_QueryDeviceText.c)
 * Callees:
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C0027E94 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0027ED0 (UsbhGetStringFromDevice.c)
 *     UsbhLanguageSupported @ 0x1C0027FC8 (UsbhLanguageSupported.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhGetProductIdString(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // bp
  __int64 v8; // rcx
  _DWORD *v9; // r13
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v11; // rbx
  int StringFromDevice; // edi
  __int64 v13; // rcx
  int v14; // r15d
  void *v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rsi
  _WORD *v18; // rdi
  __int64 i; // rcx
  char v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-40h]
  int v23[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+20h] BYREF

  v6 = a3;
  v9 = PdoExt(a2, a2, a3, a4);
  if ( *(_QWORD *)(a4 + 8) && *(_WORD *)a4 == v6 )
    return 0LL;
  if ( !(unsigned __int8)UsbhLanguageSupported(v8, a2, v6) )
    return 3221225659LL;
  UsbhFreeID(a4);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    v21 = *((_BYTE *)v9 + 1407);
    v24 = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (unsigned int)v23, (_DWORD)v11, (__int64)&v24, v6, v21);
    v13 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v13 == -1073741824 || (v14 = v24, !(unsigned __int8)UsbhValidateStringDescriptor(v13, v11, v24, v23)) )
    {
      LOBYTE(v22) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v9 + 710),
        38,
        (int)v11,
        v24,
        StringFromDevice,
        v23[0],
        usbfile_idstring_c,
        1560,
        v22);
      v15 = v11;
    }
    else
    {
      v15 = v11;
      v16 = (*v11 >> 1) - 1;
      if ( *v11 >> 1 != 1 )
      {
        v17 = v11 + 2;
        v18 = v11;
        for ( i = v16; i; --i )
          *v18++ = *v17++;
        *(_WORD *)&v11[2 * v16] = 0;
        *(_DWORD *)(a4 + 4) = v14;
        *(_QWORD *)(a4 + 8) = v11;
        *(_WORD *)a4 = v6;
        return 0LL;
      }
    }
    ExFreePoolWithTag(v15, 0);
    return 3221225659LL;
  }
  return 3221225626LL;
}
