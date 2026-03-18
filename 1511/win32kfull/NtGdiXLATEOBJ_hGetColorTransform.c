/*
 * XREFs of NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AF250
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1C02B6B50 (BRUSHOBJ_hGetColorTransform.c)
 */

HANDLE __fastcall NtGdiXLATEOBJ_hGetColorTransform(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  HANDLE ColorTransform; // rbx
  struct UMPDOBJ *v5; // rdi
  BRUSHOBJ *v6; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  ColorTransform = 0LL;
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v6 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v6 )
      ColorTransform = BRUSHOBJ_hGetColorTransform(v6);
    --*((_DWORD *)v5 + 108);
  }
  return ColorTransform;
}
