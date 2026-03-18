/*
 * XREFs of ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C02AA354
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

HDEV __fastcall ValidateAndReferencePDEV(HDEV a1)
{
  HDEV i; // rbx
  HDEV v4; // [rsp+38h] [rbp+10h] BYREF

  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  for ( i = (HDEV)gppdevList; i; i = (HDEV)*((_QWORD *)i + 3) )
  {
    v4 = i;
    if ( i == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v4);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return i;
}
