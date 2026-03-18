/*
 * XREFs of UsbhPdoCheckBootDeviceReady @ 0x1C0054020
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

char __fastcall UsbhPdoCheckBootDeviceReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  int v11; // edx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-30h] BYREF
  __int16 v16; // [rsp+34h] [rbp-2Ch]
  __int16 v17; // [rsp+36h] [rbp-2Ah]
  int v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-20h] BYREF
  _WORD v20[2]; // [rsp+44h] [rbp-1Ch] BYREF
  char v21; // [rsp+48h] [rbp-18h]

  v4 = 0;
  v5 = PdoExt(a1, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 147);
  FdoExt(v6, v7, v8, v9);
  v20[0] = 4;
  v20[1] = *((_WORD *)v5 + 710);
  v15 = 163;
  v21 = 0;
  v16 = *((_WORD *)v5 + 710);
  v17 = 4;
  v19 = 0;
  if ( (int)UsbhSyncSendCommand(v6, (__int64)&v15, (__int64)&v19, v20, v14, &v18) < 0 )
    goto LABEL_9;
  v10 = v5[680];
  if ( v10 == -1 || (v11 = v5[681], v11 == -1) )
  {
    if ( (BYTE2(v19) & 1) == v10 )
    {
LABEL_9:
      v4 = 1;
      KeSetEvent((PRKEVENT)v5 + 114, 0, 0);
      return v4;
    }
    v12 = (v19 & 1) == v5[681];
  }
  else
  {
    if ( (BYTE2(v19) & 1) != v10 )
      return v4;
    v12 = (v19 & 1) == v11;
  }
  if ( v12 )
    goto LABEL_9;
  return v4;
}
