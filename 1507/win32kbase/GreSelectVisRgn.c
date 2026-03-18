/*
 * XREFs of GreSelectVisRgn @ 0x1C0044570
 * Callers:
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectVisRgn(int a1, HRGN a2, int a3)
{
  struct DC *v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  struct DC *v12; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  _BYTE v15[40]; // [rsp+58h] [rbp-28h] BYREF

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v15);
  v6 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v7 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v10, (struct _ENTRY *)v7, 0, (unsigned __int16)a1, 0);
    if ( v11 && v10 )
    {
      if ( *(_BYTE *)(v7 + 14) == 1 && *(_WORD *)(v7 + 12) == HIWORD(a1) )
      {
        v6 = *(struct DC **)v7;
        ++*(_DWORD *)(*(_QWORD *)v7 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v10);
  }
  v12 = v6;
  v8 = GreSelectVisRgnInternal(&v12, a2, a3);
  if ( v12 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v12);
    HmgDecrementShareReferenceCount(v12);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v15);
  return v8;
}
