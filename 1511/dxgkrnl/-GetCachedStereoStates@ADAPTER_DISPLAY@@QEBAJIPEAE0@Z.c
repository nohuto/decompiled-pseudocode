/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C012C608
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(DXGADAPTER **this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  DXGADAPTER *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v16; // rax

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 23049LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a3 || !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 23051LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 && a4 && (unsigned int)v5 < *((_DWORD *)this + 26) )
  {
    v11 = this[17];
    v12 = -1073741275;
    v13 = 1016 * v5;
    v14 = *((_DWORD *)v11 + 254 * v5 + 248);
    if ( v14 != -1 && *(_DWORD *)((char *)v11 + v13 + 996) != -1 )
    {
      *a3 = v14 == 1;
      v12 = 0;
      *a4 = *(_DWORD *)((char *)this[17] + v13 + 996) == 1;
    }
    return v12;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 26);
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
