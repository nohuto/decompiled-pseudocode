/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1C019E878
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0195330 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rsi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a3 + 3696);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 0x18) != 0 && *(_DWORD *)(a1 + 136) >= 0x300Du && *(_QWORD *)(a1 + 792) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqq(a1, &EventEnterDdiNotifySurpriseRemoval, a3, a2, a4, 0);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792))(a2, (unsigned int)v6);
    v8 = v9;
    if ( bTracingEnabled )
    {
      v11 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v17) = v9;
        LODWORD(v16) = v6;
        Template_pqq(
          (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
          &EventExitDdiNotifySurpriseRemoval,
          v12,
          a2,
          v16,
          v17);
      }
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v14[3] = a1;
    v14[4] = v6;
    v14[5] = v8;
    v14[6] = 0LL;
    v14[7] = 0LL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    LODWORD(v8) = *(_QWORD *)(a1 + 792) != 0LL ? 0xC00000BB : 0;
  }
  return (unsigned int)v8;
}
