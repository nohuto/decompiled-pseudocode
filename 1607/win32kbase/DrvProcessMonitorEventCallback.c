/*
 * XREFs of DrvProcessMonitorEventCallback @ 0x1C00C93EC
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C0064AF0 (DrvQueryMDEVPowerState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvProcessMonitorEventCallback(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v10; // rdi
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 result; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v28; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v29; // [rsp+28h] [rbp-60h]
  __int16 v30; // [rsp+A0h] [rbp+18h] BYREF

  v8 = grpdeskRitInput;
  v10 = (int)a4;
  v12 = (unsigned int)a3;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v30 = 0;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
  v15 = a5;
  v16 = v10;
  v14[3] = (int)a2[1];
  v14[4] = *a2;
  v14[5] = v12;
  v14[6] = v10;
  v14[7] = v15;
  WdLogEvent5_WdTrace(v14);
  v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int16 *))qword_1C011B4B0)(
          *(_QWORD *)a2,
          (unsigned int)v12,
          (unsigned int)v10,
          v15,
          &v30);
  v20 = v17;
  if ( v17 == -1071774941 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18);
    v21[3] = (int)a2[1];
    v21[4] = *a2;
    v21[5] = v12;
    v21[6] = v16;
    v21[7] = v15;
    WdLogEvent5_WdEvent(v21);
    goto LABEL_11;
  }
  if ( v17 < 0 )
    goto LABEL_10;
  if ( a1 && !(unsigned int)DrvQueryMDEVPowerState(a1) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
    v24[3] = a2;
    v24[4] = v12;
    v24[5] = v16;
    v24[6] = v15;
    WdLogEvent5_WdEvent(v24);
    gulDelayedSwitchAction |= 1u;
    v20 = 259;
    goto LABEL_11;
  }
  gulDelayedSwitchAction &= ~1u;
  LODWORD(v29) = 4;
  LODWORD(v28) = ((_BYTE)v30 != 0 ? 0x100 : 0) | 0x88F;
  v20 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v28, v29, 0, v8, 0, 0LL, 0LL, a8);
  if ( v20 < 0 )
  {
LABEL_10:
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18);
    v25[3] = (int)a2[1];
    v25[4] = *a2;
    v25[5] = v12;
    v25[6] = v16;
    v25[7] = v15;
    WdLogEvent5_WdWarning(v25);
  }
LABEL_11:
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
  v26[3] = v20;
  v26[4] = a2;
  v26[5] = v12;
  v26[6] = v16;
  v26[7] = v15;
  WdLogEvent5_WdTrace(v26);
  if ( v20 == -1071774941 )
    v20 = 0;
  result = (unsigned int)v20;
  *a7 = HIBYTE(v30);
  return result;
}
