/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C00702A8
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0009C0C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  int v2; // eax
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 37) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v2 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v4[3] = this;
    v4[4] = *((unsigned int *)this + 8);
    CurrentProcess = PsGetCurrentProcess();
    v4[5] = PsGetProcessDxgProcess(CurrentProcess, v6);
    WdLogEvent5_WdEvent(v4);
    if ( v10 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    return 0LL;
  }
  v8 = WdLogNewEntry5_WdLowResource(v3);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v8);
  if ( v10 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return 3221225495LL;
}
