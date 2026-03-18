/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9F14
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02AF940 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C02AF950 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     STROBJ_bEnum @ 0x1C01002D0 (STROBJ_bEnum.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02A998C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02B7380 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rdi
  char *v15; // rax
  char *v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rcx
  ULONG pc; // [rsp+20h] [rbp-48h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-40h] BYREF
  struct _GLYPHPOS *v22; // [rsp+30h] [rbp-38h]
  struct UMPDOBJ *v23; // [rsp+38h] [rbp-30h]
  struct UMPDOBJ *v24; // [rsp+40h] [rbp-28h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v23 = ThreadCurrentObj;
  v24 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v11
    || (!a4 ? (v12 = STROBJ_bEnum(v11, &pc, &ppgpos)) : (v12 = STROBJ_bEnumPositionsOnly(v11, &pc, &ppgpos)),
        (v13 = v12, v12 == -1)
     || (v14 = pc, pc > 0x1A0AAA)
     || (v15 = UMPDOBJ::_AllocUserMem(v10, 24 * pc, 0), v16 = v15, (v22 = (struct _GLYPHPOS *)v15) == 0LL)) )
  {
    if ( v10 )
      --*((_DWORD *)v10 + 108);
    return 0xFFFFFFFFLL;
  }
  memmove(v15, ppgpos, 24 * v14);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct _GLYPHPOS **)W32UserProbeAddress;
  *a3 = v22;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v14;
  if ( (_DWORD)v14 )
  {
    v17 = v16 + 8;
    v18 = (unsigned int)v14;
    do
    {
      *v17 = 0LL;
      v17 += 3;
      --v18;
    }
    while ( v18 );
  }
  if ( v10 )
    --*((_DWORD *)v10 + 108);
  return v13;
}
