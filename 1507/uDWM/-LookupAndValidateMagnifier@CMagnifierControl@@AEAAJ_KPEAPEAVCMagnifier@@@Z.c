/*
 * XREFs of ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x180072E7C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007341C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x180072DD8 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 */

__int64 __fastcall CMagnifierControl::LookupAndValidateMagnifier(
        CMagnifierControl *this,
        __int64 a2,
        struct CMagnifier **a3)
{
  unsigned int v3; // ebx
  _QWORD *Element; // rax

  v3 = 0;
  if ( (dword_1800BD408 & 1) == 0 )
  {
    dword_1800BD344 = -2147023728;
    dword_1800BD408 |= 1u;
  }
  Element = CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 64),
              a2);
  if ( Element )
  {
    *a3 = (struct CMagnifier *)Element[1];
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR(0x14u, &dword_1800BD344, 1LL, -2147023728, 0x1B6u);
  }
  return v3;
}
