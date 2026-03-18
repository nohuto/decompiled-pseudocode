/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // edi
  BOOL v8; // ebx
  DC *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (unsigned int)a1;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GreSetDCOwnerEx(v5, a2, a3, a4) != 0;
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v8;
}
