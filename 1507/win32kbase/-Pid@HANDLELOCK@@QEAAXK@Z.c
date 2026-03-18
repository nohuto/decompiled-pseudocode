/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003C470
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 0;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v3 = *(_QWORD *)this;
  if ( !v2 && v3 >= *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
  {
    if ( gpentHmgrStacks )
    {
      v4 = (__int64)((unsigned __int128)((__int64)(v3 - *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement)
                                       * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
      RECSTACKBACKTRACE((unsigned __int16)((v4 >> 63) + v4));
    }
  }
}
