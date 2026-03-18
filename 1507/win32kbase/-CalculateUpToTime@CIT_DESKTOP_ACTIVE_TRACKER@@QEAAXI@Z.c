/*
 * XREFs of ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80
 * Callers:
 *     ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C0014D5C (-UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00187A0 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00834BC (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime(CIT_DESKTOP_ACTIVE_TRACKER *this, int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = a2 - *((_DWORD *)this + 2);
  if ( a2 != *((_DWORD *)this + 2) )
  {
    if ( *(_BYTE *)this )
    {
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v2 > (int)v3 - *((_DWORD *)this + 2) )
      {
        v2 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)this + 2);
        a2 = v3;
      }
      *((_DWORD *)this + 3) += v2;
    }
    *((_DWORD *)this + 2) = a2;
  }
}
