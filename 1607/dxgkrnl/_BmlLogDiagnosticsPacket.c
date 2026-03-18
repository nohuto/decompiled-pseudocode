/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C00BBCC4
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0004850 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0005F5C (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00BC048 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPR.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGDIAGNOSTICS **a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  DMMVIDPNTOPOLOGY *v14; // r12
  __int64 v15; // r13
  unsigned int v16; // r15d
  __int64 v17; // rdx
  unsigned int *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  DMMVIDPNTOPOLOGY *v28; // rbp
  __int64 v29; // rax
  _DWORD *v31; // [rsp+78h] [rbp+20h]

  v7 = 360 * *a4 + 64;
  v8 = operator new(v7, 0x63644356u, PagedPool);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v11 = 12;
    v11[1] = v7;
    v11[10] = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v11[12] = *a4;
    v13 = *((_DWORD *)a4 + 1);
    v11[14] = a2;
    v14 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    v11[13] = v13;
    v15 = *(_QWORD *)(a3 + 48);
    v16 = 0;
    if ( *a4 )
    {
      do
      {
        v17 = 104LL * v16;
        v18 = *(unsigned int **)&a4[v17 + 16];
        v19 = *v18;
        if ( (*v18 & 0x7000) == 0x7000 )
        {
          v20 = 90LL * v16;
          v11[v20 + 16] = v19;
          v11[v20 + 17] = v18[1];
          *(_QWORD *)&v11[v20 + 18] = *((_QWORD *)v18 + 1);
          v11[v20 + 20] = v18[4];
          v11[v20 + 21] = v18[5];
          v11[v20 + 32] = v18[6];
          *(_QWORD *)&v11[v20 + 24] = *(_QWORD *)(v18 + 7);
          *(_QWORD *)&v11[v20 + 26] = *(_QWORD *)(v18 + 9);
          *(_QWORD *)&v11[v20 + 28] = *(_QWORD *)(v18 + 11);
          *(_QWORD *)&v11[v20 + 30] = *(_QWORD *)(v18 + 13);
          *(_QWORD *)&v11[v20 + 22] = v18[16];
          v11[v20 + 33] = (int)(v18[18] << 29) >> 29;
          v11[v20 + 34] = v18[20];
          v11[v20 + 35] = v18[21];
          *(_OWORD *)&v11[v20 + 36] = *(_OWORD *)(v18 + 22);
          *(_OWORD *)&v11[v20 + 40] = *(_OWORD *)(v18 + 26);
          v11[v20 + 44] = v18[31];
          v11[v20 + 45] = v18[32];
          v11[v20 + 46] = v18[33];
          *(_QWORD *)&v11[v20 + 47] = *((_QWORD *)v18 + 17);
          v11[v20 + 84] = *(_DWORD *)&a4[v17 + 24];
          v11[v20 + 85] = *(_DWORD *)&a4[v17 + 28];
          LOWORD(v11[v20 + 86]) = *(_WORD *)&a4[v17 + 32];
          *(_QWORD *)&v11[v20 + 87] = *(_QWORD *)&a4[v17 + 36];
          *(_QWORD *)&v11[v20 + 89] = *(_QWORD *)&a4[v17 + 44];
          *(_QWORD *)&v11[v20 + 91] = *(_QWORD *)&a4[v17 + 52];
          v11[v20 + 93] = *(_DWORD *)&a4[v17 + 60];
          LOWORD(v11[v20 + 94]) = *(_WORD *)&a4[v17 + 64];
          HIWORD(v11[v20 + 94]) = *(_WORD *)&a4[v17 + 66];
          LOWORD(v11[v20 + 95]) = *(_WORD *)&a4[v17 + 68];
          HIWORD(v11[v20 + 95]) = *(_WORD *)&a4[v17 + 70];
          v11[v20 + 96] = *(_DWORD *)&a4[v17 + 72];
          v11[v20 + 97] = *(_DWORD *)&a4[v17 + 76];
          v11[v20 + 98] = *(_DWORD *)&a4[v17 + 80];
          v11[v20 + 99] = *(_DWORD *)&a4[v17 + 84];
          v11[v20 + 100] = *(_DWORD *)&a4[v17 + 88];
          v11[v20 + 102] = *(_DWORD *)&a4[v17 + 96];
          v11[v20 + 101] = *(_DWORD *)&a4[v17 + 92];
          v11[v20 + 104] = *(_DWORD *)&a4[v17 + 104];
          v11[v20 + 103] = *(_DWORD *)&a4[v17 + 100];
          *(_QWORD *)&v11[v20 + 52] = *((_QWORD *)v18 + 1);
          v11[v20 + 54] = v18[4];
          v11[v20 + 55] = v18[5];
          v31 = &v11[v20 + 50];
          *v31 = 28672;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v14);
          if ( FirstPath )
          {
            while ( 1 )
            {
              if ( !*(_QWORD *)(v15 + 8) )
              {
                v26 = WdLogNewEntry5_WdAssertion(v21);
                WdLogEvent5_WdAssertion(v26);
              }
              v23 = *(_QWORD *)(v15 + 8);
              v21 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 268LL);
              if ( v18[2] == (_DWORD)v21 )
              {
                if ( !v23 )
                {
                  v27 = WdLogNewEntry5_WdAssertion(v21);
                  WdLogEvent5_WdAssertion(v27);
                }
                v21 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL);
                if ( v18[3] == *(_DWORD *)(v21 + 272) )
                {
                  v21 = *(unsigned int *)(*((_QWORD *)FirstPath + 11) + 24LL);
                  if ( v18[4] == (_DWORD)v21 )
                  {
                    v21 = *(unsigned int *)(*((_QWORD *)FirstPath + 12) + 24LL);
                    if ( v18[5] == (_DWORD)v21 )
                      break;
                  }
                }
              }
              v28 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
              if ( v28 == (DMMVIDPNTOPOLOGY *)((char *)v14 + 24) )
                FirstPath = 0LL;
              else
                FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v28 - 8);
              if ( !FirstPath )
                goto LABEL_14;
            }
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR>(FirstPath, v31);
          }
        }
        else
        {
          v29 = WdLogNewEntry5_WdWarning(v12, v17, v19, 28672LL);
          *(_QWORD *)(v29 + 24) = v16;
          *(_QWORD *)(v29 + 32) = v18;
          WdLogEvent5_WdWarning(v29);
        }
LABEL_14:
        v12 = *a4;
        ++v16;
      }
      while ( v16 < (unsigned int)v12 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v11);
  }
  else
  {
    v25 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v25 + 24) = a4;
    *(_QWORD *)(v25 + 32) = *a4;
    WdLogEvent5_WdLowResource(v25);
    v10 = -1073741670;
  }
  operator delete(v11);
  return v10;
}
