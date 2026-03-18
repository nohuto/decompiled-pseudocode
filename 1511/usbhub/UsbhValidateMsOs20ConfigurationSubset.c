/*
 * XREFs of UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052EB0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C00402A8 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20ConfigurationSubset(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v8; // r9
  int v9; // r8d
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rbp
  unsigned __int16 *v12; // rdi
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r10
  _BYTE v18[64]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v19; // [rsp+B0h] [rbp+18h] BYREF

  memset(v18, 0, 0x38uLL);
  if ( *a3 != 8 )
  {
    v8 = *a3;
    v9 = 1447252784;
LABEL_18:
    Log(a1, 256, v9, v8, 0LL);
    return 0;
  }
  v10 = a3[3];
  v8 = v10;
  if ( v10 < 0xCu )
  {
    v9 = 1447252785;
    goto LABEL_18;
  }
  v11 = (unsigned __int64)a3 + v10;
  if ( v11 > a4 )
  {
    v9 = 1447252786;
    goto LABEL_18;
  }
  v12 = a3 + 4;
  v19 = v12;
  v13 = 1;
  do
  {
    v14 = v12[1];
    if ( (unsigned int)v14 < 8 )
    {
      v15 = 2 * v14;
      v16 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + v15);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 8 * v15 + 8) )
      {
        Log(a1, 256, 1447252787, v12[1], 0LL);
        v13 = 0;
      }
      v13 = v16(a1, v18, v12, v11) != 0 ? v13 : 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v11, &v19) )
    {
      v8 = 0LL;
      v9 = 1447252788;
      goto LABEL_18;
    }
    v12 = v19;
  }
  while ( v19 );
  if ( v13 == 1 )
    *a2 |= 8u;
  return v13;
}
