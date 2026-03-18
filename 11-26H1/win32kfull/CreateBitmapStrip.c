/*
 * XREFs of CreateBitmapStrip @ 0x1400CE890
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CleanupOEMBitmaps @ 0x1402266F0 (CleanupOEMBitmaps.c)
 */

__int64 CreateBitmapStrip()
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized() )
    return 1LL;
  CleanupOEMBitmaps();
  v3 = 0;
  v4 = W32GetUserSessionState(v2, v1) + 43160;
  v5 = v4;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)v5 )
      HMAssignmentUnlock(v4 + 16LL * v3);
    *(_DWORD *)(v5 + 8) = i;
    ++v3;
    v5 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
