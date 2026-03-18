/*
 * XREFs of ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00D05A8
 * Callers:
 *     UserJobCallout @ 0x1C00CEC90 (UserJobCallout.c)
 * Callees:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D0650 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D06D0 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall UpdateJob(struct tagW32JOB *a1)
{
  struct tagPROCESSINFO *i; // rbx

  for ( i = (struct tagPROCESSINFO *)gppiList; i; i = (struct tagPROCESSINFO *)*((_QWORD *)i + 44) )
  {
    if ( PsGetProcessJob(*(_QWORD *)i) == *((_QWORD *)a1 + 1) )
    {
      if ( *((_QWORD *)i + 91) )
        SetProcessFlags(a1, i);
      else
        JobCalloutAddProcess(a1, i);
    }
  }
}
