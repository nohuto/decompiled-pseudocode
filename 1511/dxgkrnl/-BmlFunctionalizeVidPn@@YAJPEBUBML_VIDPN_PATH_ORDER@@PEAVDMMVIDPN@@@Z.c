/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00A76BC
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     sub_1C00A7898 @ 0x1C00A7898 (sub_1C00A7898.c)
 *     sub_1C00A87FC @ 0x1C00A87FC (sub_1C00A87FC.c)
 *     sub_1C01828D8 @ 0x1C01828D8 (sub_1C01828D8.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // di
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // di
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct DMMVIDPNPRESENTPATH *v26; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ebp
  unsigned __int16 i; // di
  __int64 v34; // rcx
  _DWORD *v35; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  struct DMMVIDPNPRESENTPATH *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v37 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !*((_QWORD *)a2 + 6) )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v39);
  }
  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v7 = 104LL * v6;
      v8 = *(_QWORD *)((char *)a1 + v7 + 16);
      *(_WORD *)((char *)a1 + v7 + 64) = 0;
      *(_WORD *)((char *)a1 + v7 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v8 + 16),
               *(_DWORD *)(v8 + 20));
      if ( !Path )
        break;
      if ( (unsigned __int8)sub_1C00A87FC(a1, v6, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v7 + 66) )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          v41 = 104LL * v6;
          v40[3] = v6;
          v40[4] = a2;
          v40[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v41 + 16) + 16LL);
          v42 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v41 + 16) + 20LL);
          v40[7] = a1;
LABEL_33:
          v40[6] = v42;
          WdLogEvent5_WdWarning(v40);
          return 3223192345LL;
        }
      }
      else
      {
        v18 = *((_QWORD *)Path + 11);
        v19 = *(_QWORD *)(v18 + 104);
        if ( v19 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v19 + 96), 1u);
          v20 = *(_QWORD *)(v18 + 104);
        }
        else
        {
          v20 = 0LL;
        }
        v21 = *(_QWORD *)(v20 + 144);
        v54 = v20;
        if ( v21 )
        {
          if ( *(_WORD *)((char *)a1 + v7 + 66) )
          {
LABEL_31:
            v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v14, v16, v17);
            v44 = 104LL * v6;
            v43[3] = v6;
            v43[4] = a2;
            v43[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 16LL);
            v43[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v44 + 16) + 20LL);
            v43[7] = a1;
            WdLogEvent5_WdWarning(v43);
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v54, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v7 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v54, 0LL);
      }
      if ( ++v6 >= *(unsigned __int8 *)a1 )
        goto LABEL_16;
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v45 = 104LL * v6;
    v40[3] = a1;
    v40[4] = v6;
    v40[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v45 + 16) + 16LL);
    v42 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v45 + 16) + 20LL);
    v40[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v22 = 0;
  while ( v22 < *(unsigned __int8 *)a1 )
  {
    v23 = v22;
    v24 = *((_QWORD *)a1 + 13 * v22 + 2);
    v26 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v24 + 16), *(_DWORD *)(v24 + 20));
    if ( !v26 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v46);
    }
    v27 = sub_1C00A7898(a1, a2, v22, v26);
    v32 = v27;
    if ( v27 < 0 )
    {
      if ( v27 != -1071774970 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v47[3] = a2;
        v47[4] = a1;
        v47[5] = v22;
        return v32;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = v22;
      DxgkLogCodePointPacket(0x11u, v22, 0, 0);
      if ( !v22 )
        return 3223192326LL;
      --v22;
    }
    else
    {
      ++v22;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = v23;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
  {
    v34 = 104LL * i;
    v35 = *(_DWORD **)((char *)a1 + v34 + 16);
    if ( (*v35 & 0x200000) != 0 )
    {
      if ( (*v35 & 0x20200) != 0x20200 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v48);
      }
      v50 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), v35[4], v35[5]);
      if ( !v50 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v51);
      }
      if ( (int)sub_1C01828D8(a1, i, v50, v35) < 0 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v52);
        WdLogEvent5_WdAssertion(v53);
      }
    }
  }
  return 0LL;
}
