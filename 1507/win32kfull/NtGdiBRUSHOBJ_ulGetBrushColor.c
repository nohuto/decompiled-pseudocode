/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02AAE80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C025AF30 (BRUSHOBJ_ulGetBrushColor.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(unsigned __int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  ULONG BrushColor; // esi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  BrushColor = 0;
  v7 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
  v8 = v7;
  if ( v7 )
  {
    v9 = a1;
    if ( a1 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    if ( (*(_QWORD *)(v9 + 16) & 8) != 0 && (*(_DWORD *)(v8 + 128) & 0x10) != 0 )
      *(_DWORD *)(v8 + 16) |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor((BRUSHOBJ *)v8);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 108);
  return BrushColor;
}
