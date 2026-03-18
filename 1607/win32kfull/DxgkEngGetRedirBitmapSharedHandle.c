/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C0260F70
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDxSharedSurface @ 0x1C00D6ACC (GreGetDxSharedSurface.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v7[48]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  int v9; // [rsp+90h] [rbp+18h] BYREF
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  v3 = v6[0];
  *a2 = 0LL;
  if ( v3 )
  {
    LODWORD(v8) = 0;
    GreGetDxSharedSurface(*(HWND *)(v3 + 488), a2, &v5, &v9, &v8, &v10);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v6);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v7);
}
