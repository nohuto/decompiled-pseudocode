/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0162400
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0023378 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C01623CC (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  int Snapshot; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    *(_OWORD *)Src = 0LL;
    v9 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0);
    if ( v9 )
    {
      v11 = v9 + 4096;
      Src[0] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 4096), 0x52445476u);
      if ( Src[0] )
      {
        v13 = WdLogNewEntry5_WdEvent(v12);
        *(_QWORD *)(v13 + 24) = a1;
        *(_QWORD *)(v13 + 32) = v4;
        WdLogEvent5_WdEvent(v13);
        v14 = TdrCollectBugcheckSecondaryDumpData((_DWORD *)Src[0], v11, 1);
        Snapshot = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, Src[0], v14, &Src[1], a3);
        if ( Snapshot >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src[1], *a3);
            Snapshot = 0;
          }
          else
          {
            Snapshot = 1075707914;
          }
        }
      }
      else
      {
        Snapshot = -1073741801;
      }
    }
    else
    {
      Snapshot = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO((__int64)Src);
    return (unsigned int)Snapshot;
  }
  else
  {
    v7 = WdLogNewEntry5_WdEvent(v6);
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = v4;
    WdLogEvent5_WdEvent(v7);
    return 3221225506LL;
  }
}
