/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0032050
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  bool v2; // zf
  PVOID v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = WPP_MAIN_CB.DeviceLock.Header.LockNV == 0;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v3 = *(PVOID *)this;
  if ( !v2 && v3 >= WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    if ( gpentHmgrStacks )
    {
      v4 = (__int64)((unsigned __int128)(((__int64)v3 - (unsigned __int64)WPP_MAIN_CB.Dpc.SystemArgument2)
                                       * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
      RECSTACKBACKTRACE((unsigned __int16)((v4 >> 63) + v4));
    }
  }
}
