/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1C00BF750
 * Callers:
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, int a4)
{
  int v5; // edi
  BOOL v8; // ebx
  DC *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (int)a1;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GreSetDCOwnerEx(v5, a2, a3, a4) != 0;
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v8;
}
