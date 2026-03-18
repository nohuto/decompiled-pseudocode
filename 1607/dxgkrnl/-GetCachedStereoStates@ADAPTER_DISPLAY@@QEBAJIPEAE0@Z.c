/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C0086F2C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  DXGADAPTER *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 5024LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 || !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v15 + 24) = 5026LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 20) )
  {
    v9 = this[14];
    v10 = -1073741275;
    v11 = 1016 * v5;
    v12 = *((_DWORD *)v9 + 254 * v5 + 250);
    if ( v12 != -1 && *(_DWORD *)((char *)v9 + v11 + 1004) != -1 )
    {
      *a3 = v12 == 1;
      v10 = 0;
      *a4 = *(_DWORD *)((char *)this[14] + v11 + 1004) == 1;
    }
    return v10;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
