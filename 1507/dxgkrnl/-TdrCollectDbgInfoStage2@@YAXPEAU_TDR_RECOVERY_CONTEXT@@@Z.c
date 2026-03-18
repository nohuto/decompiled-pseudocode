/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013D930
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0127350 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C0124B0C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C013C858 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C013C898 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C013C940 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C013C9D0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C013CB74 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013E4B0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     DmmCollectTdrDiagInfo @ 0x1C01754CC (DmmCollectTdrDiagInfo.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  bool v2; // al
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  unsigned int *v12; // rbx
  char *v13; // rax
  char *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned int *v21; // rbx
  CTDR_DUMP_BUFFER *v22; // rcx
  _DWORD *v23; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4) == 6;
  if ( *((_QWORD *)a1 + 353) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 355);
    if ( v3 )
    {
      if ( !v2 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 1976LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v23, v4, 0x2000);
            v6 = DmmCollectTdrDiagInfo(a1, v5);
            if ( v6 == -2147483643 )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
            }
            else if ( v6 < 0 )
            {
              *((_DWORD *)a1 + 25) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v23) )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
              v11[3] = a1;
              v11[4] = v5;
              v11[5] = 0x2000LL;
              WdLogEvent5_WdAssertion(v11);
            }
            if ( v23 )
              *v23 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v12 = (unsigned int *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
          *((_QWORD *)a1 + 354) = v12[6];
          *((_DWORD *)a1 + 32) = 5;
          TdrUpdateDbgReport(a1, 1);
        }
        v13 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 7, 0x804u);
        v14 = v13;
        if ( v13 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v23, v13, 2048);
          v15 = DxgkCollectCoreDbgInfo(a1, v14);
          if ( v15 == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( v15 < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v23) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
            v20[3] = a1;
            v20[4] = v14;
            v20[5] = 2048LL;
            WdLogEvent5_WdAssertion(v20);
          }
          if ( v23 )
            *v23 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v21 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v21);
        *((_QWORD *)a1 + 354) = v21[6];
        *((_DWORD *)a1 + 32) = 7;
        TdrUpdateDbgReport(a1, 1);
      }
      v22 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 355);
      if ( v22 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v22);
      *((_QWORD *)a1 + 355) = 0LL;
    }
  }
}
