/*
 * XREFs of ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00F6D48
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpSaveKeyGet(struct _CIT_SAVE_KEY *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  ULONG v4; // eax
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // eax

  v2 = a2;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  if ( a2 )
  {
    v4 = RtlLengthSid(a2);
    v5 = v4;
    v6 = 314159LL;
    if ( v4 >= 8uLL )
    {
      v7 = (unsigned __int64)v4 >> 3;
      v5 = v4 - 8 * v7;
      do
      {
        v8 = v2[6] + 37 * (v2[5] + 37 * (v2[4] + 37 * (v2[3] + 37 * (v2[2] + 37 * (v2[1] + 37 * (*v2 + 37 * v6))))));
        v9 = v2[7];
        v2 += 8;
        v6 = v9 + 37 * v8;
        --v7;
      }
      while ( v7 );
    }
    if ( (unsigned __int64)(v5 - 1) > 6 )
      goto LABEL_20;
    v10 = v5 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                {
LABEL_20:
                  *(_DWORD *)a1 = v6;
                  goto LABEL_21;
                }
                LODWORD(v6) = *v2++ + 37 * v6;
              }
              LODWORD(v6) = *v2++ + 37 * v6;
            }
            LODWORD(v6) = *v2++ + 37 * v6;
          }
          LODWORD(v6) = *v2++ + 37 * v6;
        }
        LODWORD(v6) = *v2++ + 37 * v6;
      }
      LODWORD(v6) = *v2++ + 37 * v6;
    }
    LODWORD(v6) = *v2 + 37 * v6;
    goto LABEL_20;
  }
LABEL_21:
  v16 = -1;
  if ( qword_1C011E580 / 0x989680uLL <= 0xFFFFFFFF )
    v16 = qword_1C011E580 / 0x989680uLL;
  *((_DWORD *)a1 + 1) = v16;
  *((_QWORD *)a1 + 1) = qword_1C011E5E8;
}
