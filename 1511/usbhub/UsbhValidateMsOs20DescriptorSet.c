/*
 * XREFs of UsbhValidateMsOs20DescriptorSet @ 0x1C0053000
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C00402A8 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSet(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  _DWORD *v6; // rax
  unsigned __int16 v7; // r9
  _DWORD *v8; // rdi
  char v9; // si
  unsigned __int16 v10; // cx
  unsigned __int16 *v11; // rdx
  int v12; // r8d
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v19; // [rsp+60h] [rbp+18h] BYREF

  v6 = PdoExt(a2, a2, (__int64)a3, a4);
  v7 = *((_WORD *)a3 + 2);
  v8 = v6;
  v9 = 1;
  v10 = *((_WORD *)v6 + 1402);
  v11 = (unsigned __int16 *)*((_QWORD *)v6 + 352);
  if ( v10 != v7 )
  {
    v12 = 1447907120;
    v18 = v7;
LABEL_3:
    Log(a1, 256, v12, v10, v18);
    return 0;
  }
  if ( v10 < 0xAu )
  {
    v18 = 0LL;
    v12 = 1447907121;
    goto LABEL_3;
  }
  if ( *v11 != 10 )
  {
    Log(a1, 256, 1447907122, *v11, 0LL);
    return 0;
  }
  v14 = v11[4];
  if ( v7 != v14 )
  {
    Log(a1, 256, 1447907123, v7, v14);
    return 0;
  }
  v15 = *((_DWORD *)v11 + 1);
  if ( v15 > *a3 )
  {
    Log(a1, 256, 1447907124, v15, *a3);
    return 0;
  }
  v16 = (unsigned __int64)v11 + v14;
  v19 = v11;
  do
  {
    v17 = v11[1];
    if ( v17 < 8 )
    {
      v9 = ((unsigned __int8 (__fastcall *)(__int64, _DWORD *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v11[1]))(
             a1,
             v8 + 700,
             v11,
             v16) != 0
         ? v9
         : 0;
      if ( v17 - 1 > 1 && (v8[700] & 0x18) != 0 )
      {
        Log(a1, 256, 1447907125, 0LL, 0LL);
        v9 = 0;
      }
    }
    if ( !UsbhGetNextMsOs20Descriptor(v16, &v19) )
    {
      Log(a1, 256, 1447907126, 0LL, 0LL);
      v9 = 0;
    }
    v11 = v19;
  }
  while ( v19 );
  return v9;
}
