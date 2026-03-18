/*
 * XREFs of ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0299B90
 * Callers:
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02954D0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKKKKPEAPEAX@Z @ 0x1C0295660 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKKKKPEAPEAX@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

void __fastcall vSetupDevBitmap(struct PDEVOBJ *a1, struct SURFACE *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a2 + 28) |= 0x4000u;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2196LL) & 0x100) == 0 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v4, **(HPALETTE **)(*(_QWORD *)a1 + 1832LL));
    v3 = v4;
    v4 = 0LL;
    *((_QWORD *)a2 + 15) = v3;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v4);
  }
}
