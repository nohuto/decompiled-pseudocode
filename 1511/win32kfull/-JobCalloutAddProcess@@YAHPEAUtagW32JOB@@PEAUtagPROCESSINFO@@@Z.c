/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D0650
 * Callers:
 *     UserJobCallout @ 0x1C00CEC90 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00D05A8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D06D0 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( *(_QWORD *)a2 && (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
  {
    *((_QWORD *)a2 + 91) = a1;
    v4 = *((unsigned int *)a1 + 8);
    if ( *((_DWORD *)a1 + 7) != (_DWORD)v4 )
    {
LABEL_8:
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * (unsigned int)(*((_DWORD *)a1 + 7))++) = a2;
      SetProcessFlags(a1, a2);
      return 1LL;
    }
    if ( (_DWORD)v4 )
      v5 = UserReAllocPool(*((_QWORD *)a1 + 5), 8 * v4, 8LL * (unsigned int)(v4 + 4), 2020242261LL);
    else
      v5 = Win32AllocPool(32LL);
    if ( v5 )
    {
      *((_DWORD *)a1 + 8) += 4;
      *((_QWORD *)a1 + 5) = v5;
      goto LABEL_8;
    }
  }
  return 0LL;
}
