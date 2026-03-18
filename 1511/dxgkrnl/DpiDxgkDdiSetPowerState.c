/*
 * XREFs of DpiDxgkDdiSetPowerState @ 0x1C00CA7C8
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiPdoSetDevicePower @ 0x1C00CA378 (DpiPdoSetDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
 */

__int64 __fastcall DpiDxgkDdiSetPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v7 = a4;
  v8 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pdqqq(a1, &EventEnterDdiSetPowerState, a3, a2, a3, a4, a5, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 224))(
         a2,
         (unsigned int)v8,
         (unsigned int)v7,
         a5);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v11 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v20) = v9;
      LODWORD(v19) = a5;
      LODWORD(v18) = v7;
      LODWORD(v17) = v8;
      Template_pdqqq(
        (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
        &EventExitDdiSetPowerState,
        v12,
        a2,
        v17,
        v18,
        v19,
        v20);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
  v15[3] = a1;
  v15[4] = v8;
  v15[5] = v7;
  v15[6] = (int)a5;
  v15[7] = v14;
  WdLogEvent5_WdEvent(v15);
  return (unsigned int)v14;
}
