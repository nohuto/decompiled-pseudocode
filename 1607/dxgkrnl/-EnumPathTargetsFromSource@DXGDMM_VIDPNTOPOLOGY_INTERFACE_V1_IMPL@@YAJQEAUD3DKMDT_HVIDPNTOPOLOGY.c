/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00BC190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+58h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v10 = v8;
    if ( v8 )
    {
      v22 = -1;
      v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, v6, a3, &v22);
      v7 = v11;
      if ( v11 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v20[3] = a3;
        v20[4] = v6;
        v20[5] = v10;
        v20[6] = v7;
      }
      else
      {
        v16 = v22;
        if ( v11 == 1075708748 && v22 != -1 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v21);
        }
        *a4 = v16;
        LODWORD(v7) = 0;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v19 + 24) = v7;
      WdLogEvent5_WdError(v19);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v18[3] = 0LL;
    v18[4] = a3;
    v18[5] = v7;
    v18[6] = v6;
    WdLogEvent5_WdError(v18);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 6019);
  return (unsigned int)v7;
}
