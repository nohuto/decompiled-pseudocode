/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009C02C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C009B86C (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ??$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009C19C (--$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPA.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(
        const struct DMMVIDPN *a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // rsi
  struct _D3DKMT_GETPATHSMODALITY *v6; // r15
  char *v7; // rsi
  __int64 v8; // rbx
  char *v9; // r12
  bool v10; // cf
  unsigned int v11; // ebp
  char *v12; // rdi
  char v13; // bp
  char *v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+50h] [rbp+8h]
  unsigned int v20; // [rsp+54h] [rbp+Ch]

  v4 = *((_QWORD *)a1 + 6);
  v5 = (_QWORD *)((char *)a1 + 120);
  v6 = a2;
  if ( (_QWORD *)*v5 != v5 )
  {
    v7 = (char *)(*v5 - 8LL);
    if ( v7 )
    {
      LODWORD(v8) = v19;
      v9 = (char *)a1 + 120;
      do
      {
        v10 = *((_WORD *)v6 + 10) != 0;
        v11 = 0;
        while ( v10 )
        {
          v12 = (char *)v6 + 216 * v11;
          if ( (*((_DWORD *)v12 + 12) & 0x7000) == 0x7000 )
          {
            if ( !*(_QWORD *)(v4 + 8) )
            {
              v16 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
              WdLogEvent5_WdAssertion(v16);
            }
            a2 = *(struct _D3DKMT_GETPATHSMODALITY **)(v4 + 8);
            a1 = (const struct DMMVIDPN *)*(unsigned int *)(*((_QWORD *)a2 + 2) + 252LL);
            if ( *((_DWORD *)v12 + 14) == (_DWORD)a1 )
            {
              if ( !a2 )
              {
                v17 = WdLogNewEntry5_WdAssertion(a1, 0LL, 0LL, a4);
                WdLogEvent5_WdAssertion(v17);
              }
              a1 = *(const struct DMMVIDPN **)(*(_QWORD *)(v4 + 8) + 16LL);
              if ( *((_DWORD *)v12 + 15) == HIDWORD(*(_QWORD *)((char *)a1 + 252)) )
              {
                a1 = (const struct DMMVIDPN *)*(unsigned int *)(*((_QWORD *)v7 + 11) + 24LL);
                if ( *((_DWORD *)v12 + 16) == (_DWORD)a1 )
                {
                  a1 = (const struct DMMVIDPN *)*(unsigned int *)(*((_QWORD *)v7 + 12) + 24LL);
                  if ( *((_DWORD *)v12 + 17) == (_DWORD)a1 )
                  {
                    v13 = 0;
                    if ( (*((_BYTE *)v6 + 24) & 1) != 0 && (*((_DWORD *)v12 + 12) & 0x100) != 0 )
                    {
                      v8 = *(_QWORD *)(v12 + 132);
                      v13 = 1;
                      v20 = HIDWORD(v8);
                    }
                    _BmlFillOnePathModalityFromVidPn<_D3DKMT_PATHMODALITY_DESCRIPTOR>(v7, v12 + 48, 0LL);
                    if ( v13 && *(_QWORD *)(v12 + 132) != __PAIR64__(v20, v8) )
                      *((_DWORD *)v12 + 12) &= ~0x20000u;
                    break;
                  }
                }
              }
            }
          }
          else
          {
            v18 = WdLogNewEntry5_WdWarning(a1, a2, 0LL, a4);
            *(_QWORD *)(v18 + 24) = v11;
            *(_QWORD *)(v18 + 32) = v6;
            WdLogEvent5_WdWarning(v18);
          }
          v10 = ++v11 < *((unsigned __int16 *)v6 + 10);
        }
        v14 = (char *)*((_QWORD *)v7 + 1);
        if ( v14 == v9 )
          v7 = 0LL;
        else
          v7 = v14 - 8;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
