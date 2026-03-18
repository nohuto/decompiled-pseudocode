/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AF960
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02A998C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02B73A0 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, ULONG a2, ULONG a3, char *a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rdi
  char *v12; // rax
  char *v13; // r15
  unsigned int AdvanceWidths; // edi
  size_t v15; // r8

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v11 || a3 > 0x271000 || (v12 = UMPDOBJ::_AllocUserMem(v10, 16 * a3, 0), (v13 = v12) == 0LL) )
  {
    if ( v10 )
      --*((_DWORD *)v10 + 108);
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v11, a2, a3, (POINTQF *)v12);
  if ( AdvanceWidths )
  {
    v15 = 16LL * a3;
    if ( (unsigned __int64)&a4[v15] > W32UserProbeAddress || &a4[v15] <= a4 || ((unsigned __int8)a4 & 7) != 0 )
      *W32UserProbeAddress = 0;
    memmove(a4, v13, v15);
  }
  if ( v10 )
    --*((_DWORD *)v10 + 108);
  return AdvanceWidths;
}
