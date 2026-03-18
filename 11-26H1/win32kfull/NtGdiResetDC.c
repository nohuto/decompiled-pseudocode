/*
 * XREFs of NtGdiResetDC @ 0x1401558D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140155A74 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiResetDC(HDC a1, struct _devicemodeW *a2, void *a3, struct _DRIVER_INFO_2W *a4, void *a5)
{
  struct _devicemodeW *v8; // rdi
  struct _DRIVER_INFO_2W *v9; // rsi
  struct _devicemodeW *v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-A4h]
  struct _devicemodeW *v15; // [rsp+38h] [rbp-A0h]
  struct _DRIVER_INFO_2W *v16; // [rsp+40h] [rbp-98h]
  _QWORD v17[14]; // [rsp+50h] [rbp-88h] BYREF

  v8 = 0LL;
  v15 = 0LL;
  v13 = 0;
  v9 = 0LL;
  v16 = 0LL;
  if ( !a2 || (v10 = CaptureDEVMODEW(a2), v8 = v10, (v15 = v10) != 0LL) )
    LODWORD(v10) = 1;
  v14 = (unsigned int)v10;
  v11 = 0;
  if ( (_DWORD)v10 )
  {
    if ( !a4 || (v9 = CaptureDriverInfo2W(a4), (v16 = v9) != 0LL) )
      v11 = 1;
  }
  v14 = v11;
  if ( v11 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v17, a1);
    if ( v17[0] )
      v11 = GrepResetDC((struct XDCOBJ *)v17, v8, &v13, v9, a5);
    else
      v11 = 0;
    if ( v11 )
      GreProbeAndWriteToUntrustedVa(a3, 4uLL, &v13, 4uLL, 1uLL);
    else
      EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
  }
  if ( v8 )
    FreeThreadBufferWithTag(v8, a2, a3);
  vFreeDriverInfo2(v9);
  return v11;
}
