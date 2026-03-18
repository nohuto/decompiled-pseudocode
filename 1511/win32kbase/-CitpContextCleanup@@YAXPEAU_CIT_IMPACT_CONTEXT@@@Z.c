/*
 * XREFs of ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064EB0
 * Callers:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064E70 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065028 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00664A8 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 */

void __fastcall CitpContextCleanup(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  void *v5; // rcx
  ULONG v6; // eax
  unsigned __int8 *v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  void *v16; // rcx
  int v17; // r8d
  int v18; // r8d
  void *v19; // [rsp+20h] [rbp-18h]

  LODWORD(v4) = 0;
  CitpInteractionSummariesFlush(a1, a2, a3);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v5 = (void *)*((_QWORD *)a1 + 52);
    if ( v5 )
    {
      v6 = RtlLengthSid(v5);
      v7 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
      v4 = 314159LL;
      v8 = v6;
      if ( v6 >= 8uLL )
      {
        v9 = (unsigned __int64)v6 >> 3;
        v8 = v6 - 8 * v9;
        do
        {
          v10 = v7[6] + 37 * (v7[5] + 37 * (v7[4] + 37 * (v7[3] + 37 * (v7[2] + 37 * (v7[1] + 37 * (*v7 + 37 * v4))))));
          v11 = v7[7];
          v7 += 8;
          v4 = v11 + 37 * v10;
          --v9;
        }
        while ( v9 );
      }
      if ( (unsigned __int64)(v8 - 1) <= 6 )
      {
        v12 = v8 - 1;
        if ( !v12 )
        {
LABEL_14:
          LODWORD(v4) = *v7 + 37 * v4;
          goto LABEL_15;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
LABEL_13:
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_14;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
LABEL_12:
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_13;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
LABEL_11:
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_12;
        }
        v17 = v15 - 1;
        if ( !v17 )
        {
LABEL_25:
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_11;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
LABEL_24:
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_25;
        }
        if ( v18 == 1 )
        {
          LODWORD(v4) = *v7++ + 37 * v4;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_15:
  CitpUpdateActiveBootId(v4, 0, 0LL, 0LL, v19);
  CitpContextTrackingDataCleanup(a1);
  if ( *((_QWORD *)a1 + 52) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 52) = 0LL;
  }
  v16 = (void *)*((_QWORD *)a1 + 100);
  if ( v16 )
  {
    ZwClose(v16);
    *((_QWORD *)a1 + 100) = 0LL;
  }
}
