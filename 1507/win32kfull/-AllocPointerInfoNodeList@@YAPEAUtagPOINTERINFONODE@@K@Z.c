/*
 * XREFs of ?AllocPointerInfoNodeList@@YAPEAUtagPOINTERINFONODE@@K@Z @ 0x1C022DFB0
 * Callers:
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022EDBC (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 *     ?StartHoldingFrame@@YAHPEAUtagPOINTERHOLDINGFRAME@@_KKK@Z @ 0x1C02303AC (-StartHoldingFrame@@YAHPEAUtagPOINTERHOLDINGFRAME@@_KKK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINFONODE *__fastcall AllocPointerInfoNodeList(unsigned int a1)
{
  unsigned __int64 v1; // rcx

  if ( a1 && (v1 = 216LL * a1, v1 <= 0xFFFFFFFF) && (_DWORD)v1 )
    return (struct tagPOINTERINFONODE *)Win32AllocPoolZInit((unsigned int)v1, 1701868373LL);
  else
    return 0LL;
}
