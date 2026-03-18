/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166A50
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0145CF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C014D56C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0165914 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0165954 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0165A00 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0165AA0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0165C60 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0167650 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     DmmCollectTdrDiagInfo @ 0x1C01A34E4 (DmmCollectTdrDiagInfo.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  bool v2; // al
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned int *v9; // rbx
  char *v10; // rax
  char *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int *v15; // rbx
  CTDR_DUMP_BUFFER *v16; // rcx
  _DWORD *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4) == 6;
  if ( *((_QWORD *)a1 + 355) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
    if ( v3 )
    {
      if ( !v2 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 2128LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v17, v4, 0x2000);
            v6 = DmmCollectTdrDiagInfo(a1, v5);
            if ( v6 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v6 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v17) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v8 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
              v8[3] = a1;
              v8[4] = v5;
              v8[5] = 0x2000LL;
              WdLogEvent5_WdAssertion(v8);
            }
            if ( v17 )
              *v17 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v9 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v9);
          *((_QWORD *)a1 + 356) = v9[6];
          *((_DWORD *)a1 + 36) = 5;
          TdrUpdateDbgReport(a1, 1);
        }
        v10 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 7, 0x804u);
        v11 = v10;
        if ( v10 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v17, v10, 2048);
          v12 = DxgkCollectCoreDbgInfo(a1, v11);
          if ( v12 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v12 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v17) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
            v14[3] = a1;
            v14[4] = v11;
            v14[5] = 2048LL;
            WdLogEvent5_WdAssertion(v14);
          }
          if ( v17 )
            *v17 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v15 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v15);
        *((_QWORD *)a1 + 356) = v15[6];
        *((_DWORD *)a1 + 36) = 7;
        TdrUpdateDbgReport(a1, 1);
      }
      v16 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
      if ( v16 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v16);
      *((_QWORD *)a1 + 357) = 0LL;
    }
  }
}
