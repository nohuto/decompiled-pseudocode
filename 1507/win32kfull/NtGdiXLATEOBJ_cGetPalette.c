/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C02AFED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02AAA08 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B76A0 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, ULONG a2, ULONG a3, char *a4)
{
  ULONG Palette; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  XLATEOBJ *v12; // r12
  ULONG *v13; // rax
  ULONG *v14; // rsi

  Palette = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v12 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v12 )
    {
      if ( a4 )
      {
        if ( a3 <= 0x9C4000 )
        {
          v13 = (ULONG *)PALLOCMEM2(4 * a3, 1886221639LL, 0);
          v14 = v13;
          if ( v13 )
          {
            Palette = XLATEOBJ_cGetPalette(v12, a2, a3, v13);
            if ( Palette )
              Palette &= -((unsigned int)bSafeCopyBits(a4, v14, 4 * a3) != 0);
            Win32FreePool(v14);
          }
        }
      }
    }
  }
  if ( v11 )
    --*((_DWORD *)v11 + 108);
  return Palette;
}
