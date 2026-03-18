/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C028F6F0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C0279220 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
