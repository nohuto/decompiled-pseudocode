/*
 * XREFs of ?GFCM_SYSMET@@YAHHH@Z @ 0x1C00614B8
 * Callers:
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C006125C (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C011D5A8 (-DrawCaptionButtons@@YAXHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GFCM_SYSMET(unsigned int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx

  v2 = (int)a1;
  if ( a2
    && ((unsigned int)IsDPIAbsoluteSysMet(a1)
     || (unsigned int)IsDPIDWMSysMet(v4)
     && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 408)
       ? (v11 = 0)
       : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
         v11)) )
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 2268);
  }
  else
  {
    return *(unsigned int *)(gpsi + 4 * v2 + 1880);
  }
}
