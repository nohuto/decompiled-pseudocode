/*
 * XREFs of ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0204B64
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02054EC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeMoveOutcome(unsigned __int64 a1, __int64 a2, struct tagMONITOR **a3, _DWORD *a4)
{
  int v7; // eax
  struct tagMONITOR *v8; // rcx
  bool v9; // zf
  int v10; // edx
  int v11; // eax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  int v16; // [rsp+50h] [rbp+18h] BYREF
  struct tagMONITOR *v17; // [rsp+58h] [rbp+20h] BYREF

  v7 = HitTargetAndMonitorFromPoint(
         (struct tagPOINT)a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v17,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v16);
  v8 = v17;
  v9 = v7 == 0;
  v10 = v16;
  v11 = *(_DWORD *)(a2 + 216);
  *a3 = v17;
  *a4 = v10;
  if ( v9 )
  {
    if ( v11 == 4 )
      return 5LL;
    else
      return 4LL;
  }
  else if ( v10 == 3 )
  {
    *a4 = 4;
    return 5 - (unsigned int)(v11 != 4);
  }
  else if ( v11 == 4 )
  {
    return 6LL;
  }
  else if ( v8 == *(struct tagMONITOR **)(a2 + 208) && v10 == v11 )
  {
    v13 = 1;
    if ( (*(_DWORD *)(a2 + 256) & 2) != 0
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 24LL) + 312LL)
      && (unsigned int)(v10 - 1) <= 1
      && !PtInRect((_DWORD *)(a2 + 240), a1) )
    {
      return v14;
    }
    return v13;
  }
  else if ( v8 == *(struct tagMONITOR **)(a2 + 208) && v10 == v11 )
  {
    return 0LL;
  }
  else
  {
    return 3LL;
  }
}
