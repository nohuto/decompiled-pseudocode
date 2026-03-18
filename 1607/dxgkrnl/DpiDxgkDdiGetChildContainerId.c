/*
 * XREFs of DpiDxgkDdiGetChildContainerId @ 0x1C00EEAD0
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00EE86C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 */

__int64 __fastcall DpiDxgkDdiGetChildContainerId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+28h] [rbp-10h]

  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v19 = 0;
    v17 = a3;
    Template_pqq(a1, &EventEnterDdiGetChildContainerId, a3, a2, v17, v19);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 768))(a2, (unsigned int)v5, a4);
  v13 = v8;
  if ( bTracingEnabled )
  {
    v10 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v18) = v8;
      LODWORD(v16) = v5;
      Template_pqq(
        (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
        &EventExitDdiGetChildContainerId,
        v11,
        a2,
        v16,
        v18);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[3] = a1;
  v14[4] = v5;
  v14[5] = v13;
  v14[6] = 0LL;
  v14[7] = 0LL;
  return (unsigned int)v13;
}
