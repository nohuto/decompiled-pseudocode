/*
 * XREFs of VerifierEngCreateDriverObj @ 0x140349810
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x140318C60 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure((int)pvObj, (__int64)pFreeObjProc) )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
