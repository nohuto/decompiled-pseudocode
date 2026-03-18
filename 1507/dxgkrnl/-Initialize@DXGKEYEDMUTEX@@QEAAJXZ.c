/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C005B848
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005B524 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00048F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  int v2; // eax
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 37) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v2 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v4[3] = this;
    v4[4] = *((unsigned int *)this + 8);
    v4[5] = DXGPROCESS::GetCurrent();
    WdLogEvent5_WdEvent(v4);
    if ( v8 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    return 0LL;
  }
  v6 = WdLogNewEntry5_WdLowResource(v3);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v6);
  if ( v8 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return 3221225495LL;
}
