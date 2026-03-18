/*
 * XREFs of ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C001B3F8
 * Callers:
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C012C270 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 * Callees:
 *     Template_pqqq @ 0x1C001C26C (Template_pqqq.c)
 *     ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C012873C (-DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z.c)
 */

void __fastcall DXGADAPTER::ProcessPStateTransitionRequest(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  unsigned __int32 v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)this + 781, 0);
  if ( *((_DWORD *)this + 734) )
  {
    do
    {
      v5 = 248LL * v3;
      v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 366) + v5 + 244), -1);
      if ( v6 != -1 )
      {
        v7 = *((_QWORD *)this + 366);
        v8 = *(unsigned int *)(v7 + v5 + 144);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          Template_pqqq(v5, (unsigned int)&Dxgk_SetPowerPState, a3, (_DWORD)this, v8, *(_DWORD *)(v7 + v5 + 192), v6);
        if ( (int)DXGADAPTER::DdiSetPowerPState(this, v8, v6) < 0 )
        {
          v12 = WdLogNewEntry5_WdWarning(v10, v9, a3, v11);
          *(_QWORD *)(v12 + 32) = v6;
          *(_QWORD *)(v12 + 24) = v8;
          WdLogEvent5_WdWarning(v12);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 734) );
  }
}
