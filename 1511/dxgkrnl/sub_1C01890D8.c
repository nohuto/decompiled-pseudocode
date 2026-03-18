/*
 * XREFs of sub_1C01890D8 @ 0x1C01890D8
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0188F78 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     sub_1C01890A0 @ 0x1C01890A0 (sub_1C01890A0.c)
 *     sub_1C018924C @ 0x1C018924C (sub_1C018924C.c)
 */

__int64 __fastcall sub_1C01890D8(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = (int)a1;
  LODWORD(v4) = 0;
  if ( (_DWORD)a1 == -2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v3 == 15 )
  {
    *a2 = 0;
    *a3 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C0047ED8, 0LL);
    v11 = sub_1C01890A0((unsigned int)v3);
    if ( !v11 )
    {
      ExReleasePushLockEx(&qword_1C0047ED8, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C0047ED8, 0LL);
      v22 = sub_1C01890A0((unsigned int)v3);
      v11 = v22;
      if ( !v22 )
      {
        v12 = sub_1C018924C((unsigned int)v3, &v22);
        v4 = v12;
        if ( v12 == -1073741275 )
        {
          v17 = WdLogNewEntry5_WdDmmEvent(v14);
          *(_QWORD *)(v17 + 24) = v3;
          WdLogEvent5_WdDmmEvent(v17);
        }
        else if ( v12 < 0 )
        {
          v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          *(_QWORD *)(v18 + 24) = v3;
          *(_QWORD *)(v18 + 32) = v4;
          WdLogEvent5_WdWarning(v18);
        }
        v11 = v22;
      }
    }
    ExReleasePushLockEx(&qword_1C0047ED8, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v4 < 0 )
    {
      if ( v11 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v21);
      }
    }
    else
    {
      if ( !v11 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      *a2 = v11[3];
      *a3 = v11 + 4;
    }
    return (unsigned int)v4;
  }
}
