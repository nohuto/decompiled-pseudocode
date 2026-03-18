/*
 * XREFs of UsbhValidateSerialNumberString @ 0x1C0028B30
 * Callers:
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

char __fastcall UsbhValidateSerialNumberString(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  unsigned __int16 *v13; // r9
  _DWORD *v14; // r10
  unsigned __int16 v15; // ax
  _WORD *v16; // rcx
  int v18; // [rsp+48h] [rbp-10h]

  v8 = a1;
  FdoExt(a1, a2, a3, (__int64)a4);
  v12 = PdoExt(a2, v9, v10, v11);
  v13 = *(unsigned __int16 **)(a3 + 8);
  v14 = v12;
  if ( *v13 )
  {
    v15 = *v13;
    v16 = *(_WORD **)(a3 + 8);
    while ( v15 )
    {
      if ( v15 < 0x20u || v15 > 0x7Fu || v15 == 44 )
      {
        LOBYTE(v18) = 0;
        UsbhException(
          v8,
          *((unsigned __int16 *)v14 + 710),
          39,
          (int)v13,
          *(_DWORD *)(a3 + 4),
          -1073741811,
          -1072693248,
          usbfile_dq_c,
          283,
          v18);
        goto LABEL_13;
      }
      v15 = *++v16;
    }
    if ( a4 )
      *a4 = 0;
    return 1;
  }
  else
  {
    LOBYTE(v18) = 0;
    *a5 = 1;
    UsbhException(
      v8,
      *((unsigned __int16 *)v12 + 710),
      39,
      (int)v13,
      *(_DWORD *)(a3 + 4),
      -1073741811,
      -1072693248,
      usbfile_dq_c,
      270,
      v18);
LABEL_13:
    if ( a4 )
      *a4 = -1072693248;
    return 0;
  }
}
