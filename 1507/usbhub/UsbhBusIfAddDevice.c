/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C0015600
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetBusInterface @ 0x1C0017D60 (UsbhGetBusInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // r14
  _DWORD *v6; // rbx
  unsigned __int16 i; // r10
  __int64 BusInterface; // rbp
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  char v19; // al
  char v20; // cl
  char v21; // al
  int v22; // r10d
  int v23; // r10d
  int v25; // [rsp+48h] [rbp-30h]

  v5 = 9;
  v6 = FdoExt((__int64)a1, a2, a3, a4);
  for ( i = 328; ; i = 312 )
  {
    Log((__int64)a1, 8, 1198090289, i, v5);
    LODWORD(BusInterface) = UsbhGetBusInterface(a1, v6 + 1056, v5);
    Log((__int64)a1, 8, 1198090290, (int)BusInterface, v5);
    if ( (int)BusInterface >= 0 )
      break;
    LOBYTE(v25) = 0;
    UsbhException((int)a1, 0, 26, 0, 0, BusInterface, 0, usbfile_busif_c, 243, v25);
    if ( v5 != 9 )
      goto LABEL_4;
    v5 = 8;
  }
  v6[640] |= 4u;
LABEL_4:
  v9 = 96;
  v10 = 3;
  if ( (int)BusInterface >= 0 )
  {
    while ( 1 )
    {
      Log((__int64)a1, 8, 1198093617, v9, v10);
      BusInterface = (int)UsbhGetBusInterface(a1, v6 + 1138, v10);
      Log((__int64)a1, 8, 1198093618, BusInterface, v10);
      if ( (int)BusInterface >= 0 )
        break;
      LOBYTE(v25) = 0;
      UsbhException((int)a1, 0, 27, 0, 0, BusInterface, 0, usbfile_busif_c, 281, v25);
      if ( v10 != 3 )
        goto LABEL_10;
      v9 = 80;
      v10 = 2;
    }
    v6[640] |= 8u;
    v15 = FdoExt((__int64)a1, v11, v12, v13);
    if ( *((_QWORD *)v15 + 548) )
    {
      v18 = FdoExt((__int64)a1, v14, v16, v17);
      v19 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))v15 + 548))(*((_QWORD *)v15 + 529), *((_QWORD *)v18 + 149));
      LODWORD(BusInterface) = 0;
      v20 = 1;
      if ( v19 )
        goto LABEL_9;
    }
    else
    {
      LODWORD(BusInterface) = -1073741822;
    }
    v20 = 0;
LABEL_9:
    v21 = v20 ^ v6[640];
    *((_WORD *)v6 + 2400) = v10;
    v6[640] ^= v21 & 1;
LABEL_10:
    if ( (int)BusInterface >= 0 )
    {
      Log((__int64)a1, 8, 1198091569, 40LL, 0LL);
      UsbhGetBusInterface(a1, v6 + 1162, 0);
      Log((__int64)a1, 8, 1198091570, (int)BusInterface, 0LL);
      if ( v22 >= 0 )
        v6[640] |= 0x20000000u;
      Log((__int64)a1, 8, 1198093105, 48LL, 0LL);
      UsbhGetBusInterface(a1, v6 + 1172, 0);
      Log((__int64)a1, 8, 1198093106, (int)BusInterface, 0LL);
      if ( v23 >= 0 )
        v6[640] |= 0x800000u;
      Log((__int64)a1, 8, 1197895729, 64LL, 0LL);
      LODWORD(BusInterface) = UsbhGetBusInterface(a1, v6 + 1184, 0);
      Log((__int64)a1, 8, 1197895730, (int)BusInterface, 0LL);
      if ( (int)BusInterface >= 0 )
        v6[640] |= 0x80000000;
    }
  }
  Log((__int64)a1, 8, 1651730790, 0LL, (int)BusInterface);
  return (unsigned int)BusInterface;
}
