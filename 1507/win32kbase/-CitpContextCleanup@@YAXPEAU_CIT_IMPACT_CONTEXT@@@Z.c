/*
 * XREFs of ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0071164
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0071124 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0057ECC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 */

void __fastcall CitpContextCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  void *v3; // rcx
  ULONG v4; // eax
  unsigned __int8 *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  unsigned int i; // ebx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  void *v19; // rcx
  int v20; // r8d
  int v21; // r8d
  void *v22; // [rsp+20h] [rbp-18h]

  LODWORD(v2) = 0;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = (void *)*((_QWORD *)a1 + 52);
    if ( v3 )
    {
      v4 = RtlLengthSid(v3);
      v5 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
      v2 = 314159LL;
      v6 = v4;
      if ( v4 >= 8uLL )
      {
        v7 = (unsigned __int64)v4 >> 3;
        v6 = v4 - 8 * v7;
        do
        {
          v8 = v5[6] + 37 * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * (v5[1] + 37 * (*v5 + 37 * v2))))));
          v9 = v5[7];
          v5 += 8;
          v2 = v9 + 37 * v8;
          --v7;
        }
        while ( v7 );
      }
      if ( (unsigned __int64)(v6 - 1) <= 6 )
      {
        v10 = v6 - 1;
        if ( !v10 )
        {
LABEL_14:
          LODWORD(v2) = *v5 + 37 * v2;
          goto LABEL_15;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_13:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_14;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
LABEL_12:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_13;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
LABEL_11:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_12;
        }
        v20 = v13 - 1;
        if ( !v20 )
        {
LABEL_38:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_11;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
LABEL_37:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_38;
        }
        if ( v21 == 1 )
        {
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_37;
        }
      }
    }
  }
LABEL_15:
  CitpUpdateActiveBootId(v2, 0, 0LL, 0LL, v22);
  for ( i = 0; i < *((_DWORD *)a1 + 90); ++i )
  {
    v15 = *((_QWORD *)a1 + 38) + 168LL * i;
    if ( *(_BYTE *)(v15 + 34) )
    {
      --*((_DWORD *)a1 + 91);
    }
    else if ( *(_BYTE *)(v15 + 35) )
    {
      --*((_DWORD *)a1 + 92);
    }
    v16 = (_QWORD *)(v15 + 16);
    v17 = *(_QWORD *)(v15 + 16);
    v18 = *(_QWORD **)(v15 + 24);
    if ( *(_QWORD *)(v17 + 8) != v15 + 16 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *(_QWORD *)(v15 + 24) = v15 + 16;
    *v16 = v16;
    *(_QWORD *)v15 = 0LL;
    CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v15 + 40));
  }
  if ( *((_QWORD *)a1 + 38) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 38) = 0LL;
  }
  *((_DWORD *)a1 + 90) = 0;
  if ( *((_QWORD *)a1 + 50) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 50) = 0LL;
  }
  *((_DWORD *)a1 + 102) = 0;
  if ( *((_QWORD *)a1 + 49) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 49) = 0LL;
  }
  if ( *((_QWORD *)a1 + 52) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 52) = 0LL;
  }
  v19 = (void *)*((_QWORD *)a1 + 96);
  if ( v19 )
  {
    ZwClose(v19);
    *((_QWORD *)a1 + 96) = 0LL;
  }
}
