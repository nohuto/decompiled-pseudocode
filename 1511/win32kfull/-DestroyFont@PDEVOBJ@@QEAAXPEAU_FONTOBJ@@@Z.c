/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C001D1A0
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00272FC (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0295B20 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C029B5F4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C001B08C (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001B0D0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UnmapPrintKView @ 0x1C01023DC (UnmapPrintKView.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  BOOL v4; // ebx
  void (__fastcall *v5)(struct _FONTOBJ *); // rbx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[56]; // [rsp+28h] [rbp-50h] BYREF

  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *((_DWORD *)a2[1].pvProducer + 17) == 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v4 )
    UnmapPrintKView(*((_QWORD *)a2[1].pvProducer + 10));
  v5 = *(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3064LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v7, this);
    v5(a2);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v7);
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}
