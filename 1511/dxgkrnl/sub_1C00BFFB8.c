/*
 * XREFs of sub_1C00BFFB8 @ 0x1C00BFFB8
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000496C (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0004EB0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C0334 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPR.c)
 */

__int64 __fastcall sub_1C00BFFB8(VIDPN_MGR *a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  DMMVIDPNTOPOLOGY *v17; // r12
  __int64 v18; // r13
  unsigned int v19; // r15d
  __int64 v20; // rdx
  unsigned int *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  DMMVIDPNTOPOLOGY *v31; // rbp
  __int64 v32; // rax
  _DWORD *v34; // [rsp+78h] [rbp+20h]

  v7 = 344 * *a4 + 64;
  v8 = operator new[](v7, 0x63644356u, PagedPool);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v14 = 12;
    v14[1] = v7;
    v14[10] = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    v14[12] = *a4;
    v16 = *((_DWORD *)a4 + 1);
    v14[14] = a2;
    v17 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    v14[13] = v16;
    v18 = *(_QWORD *)(a3 + 48);
    v19 = 0;
    if ( *a4 )
    {
      do
      {
        v20 = 104LL * v19;
        v21 = *(unsigned int **)&a4[v20 + 16];
        v22 = *v21;
        if ( (*v21 & 0x7000) == 0x7000 )
        {
          v23 = 86LL * v19;
          v14[v23 + 16] = v22;
          v14[v23 + 17] = v21[1];
          *(_QWORD *)&v14[v23 + 18] = *((_QWORD *)v21 + 1);
          v14[v23 + 20] = v21[4];
          v14[v23 + 21] = v21[5];
          v14[v23 + 32] = v21[6];
          *(_QWORD *)&v14[v23 + 24] = *(_QWORD *)(v21 + 7);
          *(_QWORD *)&v14[v23 + 26] = *(_QWORD *)(v21 + 9);
          *(_QWORD *)&v14[v23 + 28] = *(_QWORD *)(v21 + 11);
          *(_QWORD *)&v14[v23 + 30] = *(_QWORD *)(v21 + 13);
          *(_QWORD *)&v14[v23 + 22] = v21[16];
          v14[v23 + 33] = (int)(v21[18] << 29) >> 29;
          v14[v23 + 34] = v21[20];
          *(_OWORD *)&v14[v23 + 35] = *(_OWORD *)(v21 + 21);
          *(_OWORD *)&v14[v23 + 39] = *(_OWORD *)(v21 + 25);
          v14[v23 + 43] = v21[30];
          v14[v23 + 44] = v21[31];
          v14[v23 + 45] = v21[32];
          *(_QWORD *)&v14[v23 + 46] = *(_QWORD *)(v21 + 33);
          v14[v23 + 80] = *(_DWORD *)&a4[v20 + 24];
          v14[v23 + 81] = *(_DWORD *)&a4[v20 + 28];
          LOWORD(v14[v23 + 82]) = *(_WORD *)&a4[v20 + 32];
          *(_QWORD *)&v14[v23 + 83] = *(_QWORD *)&a4[v20 + 36];
          *(_QWORD *)&v14[v23 + 85] = *(_QWORD *)&a4[v20 + 44];
          *(_QWORD *)&v14[v23 + 87] = *(_QWORD *)&a4[v20 + 52];
          v14[v23 + 89] = *(_DWORD *)&a4[v20 + 60];
          LOWORD(v14[v23 + 90]) = *(_WORD *)&a4[v20 + 64];
          HIWORD(v14[v23 + 90]) = *(_WORD *)&a4[v20 + 66];
          LOWORD(v14[v23 + 91]) = *(_WORD *)&a4[v20 + 68];
          HIWORD(v14[v23 + 91]) = *(_WORD *)&a4[v20 + 70];
          v14[v23 + 92] = *(_DWORD *)&a4[v20 + 72];
          v14[v23 + 93] = *(_DWORD *)&a4[v20 + 76];
          v14[v23 + 94] = *(_DWORD *)&a4[v20 + 80];
          v14[v23 + 95] = *(_DWORD *)&a4[v20 + 84];
          v14[v23 + 96] = *(_DWORD *)&a4[v20 + 88];
          v14[v23 + 98] = *(_DWORD *)&a4[v20 + 96];
          v14[v23 + 97] = *(_DWORD *)&a4[v20 + 92];
          v14[v23 + 100] = *(_DWORD *)&a4[v20 + 104];
          v14[v23 + 99] = *(_DWORD *)&a4[v20 + 100];
          *(_QWORD *)&v14[v23 + 50] = *((_QWORD *)v21 + 1);
          v14[v23 + 52] = v21[4];
          v14[v23 + 53] = v21[5];
          v34 = &v14[v23 + 48];
          *v34 = 28672;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v17);
          if ( FirstPath )
          {
            while ( 1 )
            {
              if ( !*(_QWORD *)(v18 + 8) )
              {
                v29 = WdLogNewEntry5_WdAssertion(v24);
                WdLogEvent5_WdAssertion(v29);
              }
              v26 = *(_QWORD *)(v18 + 8);
              v24 = *(unsigned int *)(*(_QWORD *)(v26 + 16) + 252LL);
              if ( v21[2] == (_DWORD)v24 )
              {
                if ( !v26 )
                {
                  v30 = WdLogNewEntry5_WdAssertion(v24);
                  WdLogEvent5_WdAssertion(v30);
                }
                v24 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL);
                if ( v21[3] == HIDWORD(*(_QWORD *)(v24 + 252)) )
                {
                  v24 = *(unsigned int *)(*((_QWORD *)FirstPath + 11) + 24LL);
                  if ( v21[4] == (_DWORD)v24 )
                  {
                    v24 = *(unsigned int *)(*((_QWORD *)FirstPath + 12) + 24LL);
                    if ( v21[5] == (_DWORD)v24 )
                      break;
                  }
                }
              }
              v31 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
              if ( v31 == (DMMVIDPNTOPOLOGY *)((char *)v17 + 24) )
                FirstPath = 0LL;
              else
                FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v31 - 8);
              if ( !FirstPath )
                goto LABEL_14;
            }
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR>(FirstPath, v34);
          }
        }
        else
        {
          v32 = WdLogNewEntry5_WdWarning(v15, v20, v22, 28672LL);
          *(_QWORD *)(v32 + 24) = v19;
          *(_QWORD *)(v32 + 32) = v21;
          WdLogEvent5_WdWarning(v32);
        }
LABEL_14:
        v15 = *a4;
        ++v19;
      }
      while ( v19 < (unsigned int)v15 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v14);
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v28 + 24) = a4;
    *(_QWORD *)(v28 + 32) = *a4;
    WdLogEvent5_WdLowResource(v28);
    v13 = -1073741670;
  }
  operator delete(v14);
  return v13;
}
