/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00764AC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int i; // esi
  _QWORD *v2; // rdi
  __int64 v3; // rbx

  if ( (_DWORD)a1 == 2 )
  {
    for ( i = 1; i < gcMaxHmgr; ++i )
    {
      if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i + 14) == 5 )
      {
        v2 = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * i);
        if ( v2 )
        {
          if ( v2[30] )
          {
            v3 = v2[32];
            if ( v3 == PsGetCurrentProcessWin32Process(a1) )
            {
              v2[32] = 0LL;
              v2[31] = 0LL;
            }
          }
        }
      }
    }
  }
}
