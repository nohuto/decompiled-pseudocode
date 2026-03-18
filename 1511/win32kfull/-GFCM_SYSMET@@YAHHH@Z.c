/*
 * XREFs of ?GFCM_SYSMET@@YAHHH@Z @ 0x1C001805C
 * Callers:
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C0017E00 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00FB7E0 (-DrawCaptionButtons@@YAXHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
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
     && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
       ? (v5 = 0)
       : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
         v5)) )
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 2268);
  }
  else
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 1880);
  }
}
