/*
 * XREFs of ?GFCM_SYSMET@@YAHHH@Z @ 0x1C005647C
 * Callers:
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C0056220 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00F4884 (-DrawCaptionButtons@@YAXHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GFCM_SYSMET(unsigned int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // ecx

  v2 = (int)a1;
  if ( a2
    && ((unsigned int)IsDPIAbsoluteSysMet(a1)
     || (unsigned int)IsDPIDWMSysMet(v4)
     && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       ? (v5 = 0)
       : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
         v5)) )
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 2268);
  }
  else
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 1880);
  }
}
