/*
 * XREFs of DrvProcessMonitorEventCallback @ 0x1C00BD71C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0052ED0 (DrvQueryMDEVPowerState.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvProcessMonitorEventCallback(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  __int64 v7; // r13
  __int64 v9; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 result; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v27; // [rsp+20h] [rbp-58h]
  __int16 v28; // [rsp+90h] [rbp+18h] BYREF

  v7 = grpdeskRitInput;
  v9 = (int)a4;
  v11 = (unsigned int)a3;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v28 = 0;
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
  v14 = a5;
  v15 = v9;
  v13[3] = (int)a2[1];
  v13[4] = *a2;
  v13[5] = v11;
  v13[6] = v9;
  v13[7] = v14;
  WdLogEvent5_WdTrace(v13);
  v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int16 *))qword_1C0104170)(
          *(_QWORD *)a2,
          (unsigned int)v11,
          (unsigned int)v9,
          v14,
          &v28);
  v19 = v16;
  if ( v16 == -1071774941 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
    v20[3] = (int)a2[1];
    v20[4] = *a2;
    v20[5] = v11;
    v20[6] = v15;
    v20[7] = v14;
    WdLogEvent5_WdEvent(v20);
    goto LABEL_11;
  }
  if ( v16 < 0 )
    goto LABEL_10;
  if ( a1 && !(unsigned int)DrvQueryMDEVPowerState(a1) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21);
    v23[3] = a2;
    v23[4] = v11;
    v23[5] = v15;
    v23[6] = v14;
    WdLogEvent5_WdEvent(v23);
    gulDelayedSwitchAction |= 1u;
    v19 = 259;
    goto LABEL_11;
  }
  gulDelayedSwitchAction &= ~1u;
  LODWORD(v27) = ((_BYTE)v28 != 0 ? 0x100 : 0) | 0x88F;
  v19 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v27, 4u, 0, v7, 0, 0LL);
  if ( v19 < 0 )
  {
LABEL_10:
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17);
    v24[3] = (int)a2[1];
    v24[4] = *a2;
    v24[5] = v11;
    v24[6] = v15;
    v24[7] = v14;
    WdLogEvent5_WdWarning(v24);
  }
LABEL_11:
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v18);
  v25[3] = v19;
  v25[4] = a2;
  v25[5] = v11;
  v25[6] = v15;
  v25[7] = v14;
  WdLogEvent5_WdTrace(v25);
  if ( v19 == -1071774941 )
    v19 = 0;
  result = (unsigned int)v19;
  *a7 = HIBYTE(v28);
  return result;
}
