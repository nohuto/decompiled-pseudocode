/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C017D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C017E808 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  int FirstAvailableTarget; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v5 = (int)a3;
  v6 = a1;
  v7 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 6031);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v5 )
    {
      v12 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
      v15 = v12;
      if ( v12 )
      {
        v22 = v13;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v12,
                                 (unsigned int)v7,
                                 (unsigned int)v5,
                                 &v22,
                                 0LL);
        v6 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v6) = 0;
          *a4 = v22;
        }
        else
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v18, v10, v19);
          v20[3] = v15;
          v20[4] = v7;
          v20[5] = v5;
          v20[6] = v6;
        }
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v16 + 24) = v6;
        WdLogEvent5_WdError(v16);
        LODWORD(v6) = -1071774976;
      }
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v11[3] = 0LL;
      v11[4] = a4;
      v11[5] = v6;
      v11[6] = v7;
      WdLogEvent5_WdError(v11);
      LODWORD(v6) = -1071774929;
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v8[3] = 0LL;
    v8[4] = v6;
    v8[5] = v7;
    WdLogEvent5_WdError(v8);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6031);
  return (unsigned int)v6;
}
