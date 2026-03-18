/*
 * XREFs of DxgkCheckOcclusion @ 0x1C00B4F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00B738C (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v13; // edi
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  DXGGLOBAL *Global; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2038);
  if ( DXGPROCESS::GetCurrent(a1) )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    if ( *(_QWORD *)v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v13 = 0;
        v14 = 0LL;
        *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        v19 = _guard_dispatch_icall_fptr();
        if ( !v19 )
        {
          v28 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v28 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v28);
          v13 = -1073741811;
        }
        if ( v13 >= 0 )
        {
          v14 = _guard_dispatch_icall_fptr();
          if ( !v14 )
          {
            v29 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v29 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v29);
            v13 = -1073741811;
          }
          if ( v13 >= 0 && !(unsigned int)_guard_dispatch_icall_fptr() )
          {
            v30 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v30 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v30);
            v13 = -1073741811;
          }
        }
        if ( v14 )
          _guard_dispatch_icall_fptr();
        if ( v19 )
          _guard_dispatch_icall_fptr();
        if ( v13 >= 0 )
        {
          Global = DXGGLOBAL::GetGlobal(v16, v15, v17, v18);
          v13 = DXGGLOBAL::IsWindowVisible(Global, (const struct tagRECT *const)(v3 + 8)) == 0 ? 0xC01E0006 : 0;
        }
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(qword_1C00467F0, &EventProfilerExit, v17, 2038);
        return (unsigned int)v13;
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = -1071775738LL;
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(qword_1C00467F0, &EventProfilerExit, v22, 2038);
        return 3223191558LL;
      }
    }
    v27 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    v26 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    v25 = qword_1C00467F0;
    v26 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v24, 2038);
  return 3221225485LL;
}
