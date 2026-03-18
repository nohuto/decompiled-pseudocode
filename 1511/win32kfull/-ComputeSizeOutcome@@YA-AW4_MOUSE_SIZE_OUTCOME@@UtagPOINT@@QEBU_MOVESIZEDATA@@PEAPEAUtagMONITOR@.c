/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0205010
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C0206224 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02058A4 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeSizeOutcome(struct tagPOINT a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax
  struct tagMONITOR *v8; // r8
  int v9; // edx
  int v11; // eax
  int v12; // [rsp+40h] [rbp+18h] BYREF
  struct tagMONITOR *v13; // [rsp+48h] [rbp+20h] BYREF

  v7 = HitTargetAndMonitorFromPoint(
         a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v13,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v12);
  v8 = v13;
  v9 = v12;
  *a3 = v13;
  *a4 = v9;
  if ( v7 )
  {
    if ( (v9 == 3 || !v9) && (unsigned int)(*(_DWORD *)(a2 + 160) - 1) <= 1 )
      return 1LL;
    v11 = *(_DWORD *)(a2 + 216);
    if ( v11 == 4 )
    {
      return 5LL;
    }
    else if ( v8 == *(struct tagMONITOR **)(a2 + 208) && v9 == v11 )
    {
      return 2LL;
    }
    else if ( v8 == *(struct tagMONITOR **)(a2 + 208) && v9 == v11 )
    {
      return 0LL;
    }
    else
    {
      return 3LL;
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 216) == 4 )
      return 1LL;
    return 4LL;
  }
}
