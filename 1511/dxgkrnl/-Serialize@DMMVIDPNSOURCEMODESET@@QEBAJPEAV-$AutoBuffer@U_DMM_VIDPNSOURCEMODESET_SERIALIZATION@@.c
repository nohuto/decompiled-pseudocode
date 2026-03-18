/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0180904
 * Callers:
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01796F8 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00067F0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C002C2E0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rax
  _BYTE *v13; // rcx
  _QWORD *v14; // rsi
  unsigned __int8 v15; // bp
  const struct DMMVIDPNSOURCEMODE *i; // rsi
  __int64 v17; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 44 * v7;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 44 * v7);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = *(_BYTE **)(a2 + 32);
      v14 = (_QWORD *)((char *)this + 48);
      v15 = 0;
      *v13 = *((_BYTE *)this + 64);
      if ( (_QWORD *)*v14 != v14 )
      {
        for ( i = (const struct DMMVIDPNSOURCEMODE *)(*v14 - 8LL); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
          DMMVIDPNSOURCEMODE::Serialize(
            i,
            (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(*(_QWORD *)(a2 + 32) + 4LL + 40LL * v15++));
      }
      if ( v15 != **(_BYTE **)(a2 + 32) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v17);
      }
      return 0LL;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = v8;
      v12[4] = this;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
