/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C01A8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // rax
  __int64 v14; // rcx
  DMMVIDPNTOPOLOGY *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  unsigned int v24; // [rsp+48h] [rbp+10h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7033);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = a3;
  v8[4] = v6;
  v8[5] = v7;
  v8[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v15 = v13;
    if ( v13 )
    {
      v24 = -1;
      v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, v6, a3, &v24);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v21 = v24;
        if ( v17 == 1075708748 && v24 != -1 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v22);
        }
        *a4 = v21;
        LODWORD(v7) = 0;
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v18, v12, v19);
        v20[3] = a3;
        v20[4] = v6;
        v20[5] = v15;
        v20[6] = v7;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = v7;
      WdLogEvent5_WdError(v16);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v10[3] = 0LL;
    v10[4] = a3;
    v10[5] = v7;
    v10[6] = v6;
    WdLogEvent5_WdError(v10);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 7033);
  return (unsigned int)v7;
}
