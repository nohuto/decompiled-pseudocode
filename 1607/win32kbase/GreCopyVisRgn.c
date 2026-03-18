/*
 * XREFs of GreCopyVisRgn @ 0x1C00767F0
 * Callers:
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0036830 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  struct DC *v5[2]; // [rsp+20h] [rbp-19h] BYREF
  _BYTE v6[32]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v7[8]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+77h] BYREF
  char v9; // [rsp+B8h] [rbp+7Fh] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 0, 0);
  if ( v5[0] && v7[0] )
  {
    AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v9, v5[0]);
    v8 = *((_QWORD *)v5[0] + 192);
    if ( v8 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v7, (struct RGNOBJ *)&v8) )
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v7);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v9);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v6);
  return v3;
}
