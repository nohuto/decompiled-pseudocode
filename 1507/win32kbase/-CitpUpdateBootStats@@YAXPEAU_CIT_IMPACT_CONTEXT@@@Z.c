/*
 * XREFs of ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079728
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0018564 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 */

void __fastcall CitpUpdateBootStats(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  ULONG v3; // eax
  unsigned __int8 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  int v18; // r8d
  int v19; // r8d
  __int16 v20; // dx
  void *v21; // [rsp+20h] [rbp-18h]
  unsigned __int16 v22; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v23; // [rsp+50h] [rbp+18h] BYREF

  v22 = 0;
  LODWORD(v2) = 0;
  v23 = 0;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = RtlLengthSid(*((PSID *)a1 + 52));
    v4 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
    v2 = 314159LL;
    v5 = v3;
    if ( v3 >= 8uLL )
    {
      v6 = (unsigned __int64)v3 >> 3;
      v5 = v3 - 8 * v6;
      do
      {
        v7 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v2))))));
        v8 = v4[7];
        v4 += 8;
        v2 = v8 + 37 * v7;
        --v6;
      }
      while ( v6 );
    }
    if ( (unsigned __int64)(v5 - 1) <= 6 )
    {
      v9 = v5 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v18 = v12 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                    goto LABEL_14;
                  LODWORD(v2) = *v4++ + 37 * v2;
                }
                LODWORD(v2) = *v4++ + 37 * v2;
              }
              LODWORD(v2) = *v4++ + 37 * v2;
            }
            LODWORD(v2) = *v4++ + 37 * v2;
          }
          LODWORD(v2) = *v4++ + 37 * v2;
        }
        LODWORD(v2) = *v4++ + 37 * v2;
      }
      LODWORD(v2) = *v4 + 37 * v2;
    }
  }
LABEL_14:
  if ( (int)CitpUpdateActiveBootId(v2, 1u, &v23, &v22, v21) >= 0 )
  {
    v13 = v22;
    if ( v22 )
    {
      if ( *((_WORD *)a1 + 95) != v22 )
      {
        *((_WORD *)a1 + 95) = v22;
        CitpStatIncrement((unsigned __int16 *)a1 + 92, 1);
      }
      v14 = *((_WORD *)a1 + 93);
      if ( !v14 || v14 > v13 )
        *((_WORD *)a1 + 93) = v13;
      v15 = *((_WORD *)a1 + 94);
      if ( !v15 || v15 < v13 )
        *((_WORD *)a1 + 94) = v13;
      v16 = *((_WORD *)a1 + 314);
      if ( !v16 || v16 > v13 )
        *((_WORD *)a1 + 314) = v13;
      v17 = *((_WORD *)a1 + 315);
      if ( !v17 || v17 < v13 )
        *((_WORD *)a1 + 315) = v13;
      if ( v23 )
      {
        if ( v23 != v13 )
        {
          CitpStatIncrement((unsigned __int16 *)a1 + 96, 1);
          CitpStatIncrement((unsigned __int16 *)a1 + 303, v20);
          CitpPostUpdateUseInfoSave(a1, 0LL);
        }
      }
    }
  }
}
