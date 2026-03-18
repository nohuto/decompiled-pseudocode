/*
 * XREFs of HmgFreeDcAttr @ 0x1C000B098
 * Callers:
 *     GdiThreadCallout @ 0x1C000AF20 (GdiThreadCallout.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     bFreeDCAttributesWorker @ 0x1C00C0600 (bFreeDCAttributesWorker.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process();
    v3 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v4 = (__int64 *)(v3 + 192);
      if ( (__int64 *)*v4 == v4 || (v5 = *v4, *(_DWORD *)(*v4 + 16) == 9) )
      {
        v5 = PALLOCMEM2(0x60uLL);
        if ( !v5 )
          return GreReleaseHmgrSemaphore();
        v6 = *v4;
        *(_QWORD *)v5 = *v4;
        *(_QWORD *)(v5 + 8) = v4;
        if ( *(__int64 **)(v6 + 8) != v4 )
          __fastfail(3u);
        *(_QWORD *)(v6 + 8) = v5;
        *v4 = v5;
        *(_DWORD *)(v5 + 16) = 0;
      }
      *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 16))++ + 24) = a1;
      *(_QWORD *)(v3 + 40) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
