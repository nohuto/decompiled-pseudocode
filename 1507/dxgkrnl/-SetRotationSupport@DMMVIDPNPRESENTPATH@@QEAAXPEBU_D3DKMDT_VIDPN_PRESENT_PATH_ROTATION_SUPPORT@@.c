/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005CD0
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000DC58 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C0089BE8 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00950C8 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C017CF98 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2)
{
  __int64 v4; // rax
  int v5; // eax
  _QWORD *v6; // rax
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v4);
  }
  if ( DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
  {
    *((_DWORD *)this + 31) = 31;
    return;
  }
  *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)this + 31) = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
  {
    *((_DWORD *)this + 31) |= 0x10u;
    return;
  }
  if ( g_OSTestSigningEnabled && (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v7) >= 0 )
  {
    v5 = *((_DWORD *)this + 31);
    if ( v7 )
    {
      if ( (v5 & 0x10) == 0 )
      {
        v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v6[3] = 275LL;
        v6[4] = 28LL;
        v6[5] = *a2;
        v6[6] = 1LL;
LABEL_17:
        v6[7] = 0LL;
        WdLogEvent5_WdCriticalError(v6);
        return;
      }
      if ( (v5 & 0xE0) != 0 )
      {
        v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v6[3] = 275LL;
        v6[4] = 28LL;
        v6[5] = *a2;
        v6[6] = 2LL;
        goto LABEL_17;
      }
    }
    else if ( (v5 & 0xF0) == 0 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v6[3] = 275LL;
      v6[4] = 28LL;
      v6[5] = *a2;
      v6[6] = 0LL;
      goto LABEL_17;
    }
  }
}
