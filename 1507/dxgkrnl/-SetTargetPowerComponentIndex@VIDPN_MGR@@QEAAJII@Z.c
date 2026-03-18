/*
 * XREFs of ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C0174778
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0126914 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // edi

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL));
  v6 = *((_QWORD *)this + 12);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 96) = a3;
    v15 = 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = v4;
    if ( !*((_QWORD *)this + 1) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v11);
    v15 = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return v15;
}
