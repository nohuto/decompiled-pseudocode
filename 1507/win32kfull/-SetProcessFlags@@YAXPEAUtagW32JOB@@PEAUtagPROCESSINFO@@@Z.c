/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C007BE30
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C007BDB0 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C007BEF0 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  __int64 v4; // rcx

  if ( *((_DWORD *)a1 + 6) )
    *((_DWORD *)a2 + 3) |= 0x2000000u;
  else
    *((_DWORD *)a2 + 3) &= ~0x2000000u;
  KeAttachProcess(*(PRKPROCESS *)a2);
  v4 = *((_QWORD *)a2 + 37);
  if ( *((_DWORD *)a1 + 6) )
  {
    while ( v4 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 440) + 28LL) |= 0x20000000u;
      *(_DWORD *)(v4 + 448) |= 0x20000000u;
      v4 = *(_QWORD *)(v4 + 592);
    }
  }
  else
  {
    while ( v4 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 440) + 28LL) &= ~0x20000000u;
      *(_DWORD *)(v4 + 448) &= ~0x20000000u;
      v4 = *(_QWORD *)(v4 + 592);
    }
  }
  KeDetachProcess();
}
