/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013973C
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C001E1A8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     _DxgDbgTakeSnapshot_::_9_::_AUTO::__AUTO @ 0x1C0139708 (_DxgDbgTakeSnapshot_--_9_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v12; // eax
  int Snapshot; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // eax
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    *(_OWORD *)Src = 0LL;
    v12 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0);
    if ( v12 )
    {
      v14 = v12 + 4096;
      Src[0] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v12 + 4096), 0x52445476u);
      if ( Src[0] )
      {
        v19 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = a1;
        *(_QWORD *)(v19 + 32) = v4;
        WdLogEvent5_WdEvent(v19);
        v20 = TdrCollectBugcheckSecondaryDumpData((_DWORD *)Src[0], v14, 1);
        Snapshot = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, Src[0], v20, &Src[1], a3);
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
    DxgDbgTakeSnapshot_::_9_::_AUTO::__AUTO((__int64)Src);
    return (unsigned int)Snapshot;
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = a1;
    *(_QWORD *)(v10 + 32) = v4;
    WdLogEvent5_WdEvent(v10);
    return 3221225506LL;
  }
}
