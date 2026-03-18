/*
 * XREFs of ?StartHoldingFrame@@YAHPEAUtagPOINTERHOLDINGFRAME@@_KKK@Z @ 0x1C02307DC
 * Callers:
 *     ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230830 (-StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z.c)
 * Callees:
 *     ?AllocPointerInfoNodeList@@YAPEAUtagPOINTERINFONODE@@K@Z @ 0x1C022E3D8 (-AllocPointerInfoNodeList@@YAPEAUtagPOINTERINFONODE@@K@Z.c)
 */

__int64 __fastcall StartHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  struct tagPOINTERINFONODE *v7; // rax
  __int64 result; // rax

  v4 = a3 + a4;
  if ( a3 + a4 < a3 )
    return 0LL;
  v7 = AllocPointerInfoNodeList(v4);
  *((_QWORD *)a1 + 8) = v7;
  if ( !v7 )
    return 0LL;
  *((_DWORD *)a1 + 9) = 0;
  result = 1LL;
  *((_DWORD *)a1 + 8) = v4;
  *((_QWORD *)a1 + 3) = a2;
  return result;
}
