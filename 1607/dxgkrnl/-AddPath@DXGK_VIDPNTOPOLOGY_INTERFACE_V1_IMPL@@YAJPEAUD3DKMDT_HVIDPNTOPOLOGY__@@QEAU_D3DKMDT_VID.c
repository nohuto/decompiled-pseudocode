/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A8A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080038 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0080524 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0080894 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct DMMVIDPNPRESENTPATH *v32; // [rsp+48h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v33; // [rsp+50h] [rbp+18h] BYREF

  v5 = (__int64)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  if ( a2 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v9[3] = *(_DWORD *)a2;
    v9[4] = *((unsigned int *)a2 + 1);
    v9[5] = a2;
    v9[6] = v5;
    v12 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    if ( v12 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v16 = WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
        *(_QWORD *)(v16 + 24) = a2;
        WdLogEvent5_WdWarning(v16);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
        v17[3] = *(_DWORD *)a2;
        v17[4] = *((unsigned int *)a2 + 1);
        v17[5] = v5;
        WdLogEvent5_WdWarning(v17);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
        v18[3] = *((int *)a2 + 84);
        v18[4] = *(_DWORD *)a2;
        v18[5] = *((unsigned int *)a2 + 1);
        v18[6] = v5;
        WdLogEvent5_WdWarning(v18);
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
        *((_DWORD *)a2 + 84) = 1;
      }
      v32 = 0LL;
      v33 = 0LL;
      v19 = DMMVIDPNTOPOLOGY::CreateNewPath(v12, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v33);
      v24 = v19;
      LODWORD(v5) = -1071774970;
      if ( v19 == -1071774970 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v25[3] = *(_DWORD *)a2;
        v25[4] = *((unsigned int *)a2 + 1);
        v25[5] = -1071774970LL;
        WdLogEvent5_WdError(v25);
      }
      else if ( v19 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v32,
          (__int64 (__fastcall ***)(_QWORD, __int64))v33);
        v28 = DMMVIDPNTOPOLOGY::AddPath(v12, v32, 2LL, v27);
        v5 = v28;
        if ( v28 >= 0 )
        {
          v32 = 0LL;
          LODWORD(v5) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v12, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
          v30[3] = *(_DWORD *)a2;
          v30[4] = *((unsigned int *)a2 + 1);
          v30[5] = v12;
          v30[6] = v5;
          WdLogEvent5_WdDmmEvent(v30);
        }
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        LODWORD(v5) = v24;
        v26[3] = *(_DWORD *)a2;
        v26[4] = *((unsigned int *)a2 + 1);
        v26[5] = v24;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v32);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v15 + 24) = v5;
      WdLogEvent5_WdError(v15);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = v5;
    WdLogEvent5_WdError(v6);
    LODWORD(v5) = -1071774951;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 7041);
  return (unsigned int)v5;
}
