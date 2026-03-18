/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C005C670
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006BC4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 43) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v2 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v7[3] = this;
    v7[4] = *((unsigned int *)this + 8);
    v7[5] = DXGPROCESS::GetCurrent();
    WdLogEvent5_WdEvent(v7);
    if ( v11 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
    return 0LL;
  }
  v9 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v9);
  if ( v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return 3221225495LL;
}
