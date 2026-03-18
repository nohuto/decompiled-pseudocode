/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0006EEC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01736C4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C017C240 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006000 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C000780C (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 Container; // r12
  __int64 i; // r14
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
    v9 = v4;
    if ( v4 )
    {
      v10 = *((_QWORD *)this + 14);
      v11 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v10 )
      {
        if ( !*(_QWORD *)(v10 + 40) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
          WdLogEvent5_WdAssertion(v28);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL);
        for ( i = 0LL; ; ++i )
        {
          v14 = *(unsigned int *)(v10 + 24);
          v32 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v14, i, &v32);
          v17 = v15;
          if ( v15 < 0 )
            break;
          if ( v32 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v10 + 24), v32);
          if ( !Path )
          {
            v29 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
            WdLogEvent5_WdAssertion(v29);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v23);
            v30[3] = *(unsigned int *)(v9 + 76);
            v30[4] = *(unsigned int *)(v9 + 80);
            v30[5] = *(int *)(v9 + 96);
            v30[6] = *(unsigned int *)(v10 + 24);
            WdLogEvent5_WdError(v30);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v11;
            return result;
          }
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v31[3] = i;
        v31[4] = v3;
        v31[5] = this;
        v31[6] = v17;
        WdLogEvent5_WdError(v31);
        return (unsigned int)v17;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v27 + 24) = this;
        WdLogEvent5_WdError(v27);
        return 3223192328LL;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v26 + 24) = v3;
      *(_QWORD *)(v26 + 32) = this;
      WdLogEvent5_WdError(v26);
      return 3223192394LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v25 + 24) = v3;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdDmmEvent(v25);
    return 3223192352LL;
  }
}
