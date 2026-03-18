/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017CBC4
 * Callers:
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017511C (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DEF8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C002C7B8 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  _QWORD *v17; // rax
  _BYTE *v18; // rcx
  _QWORD *v19; // rsi
  unsigned __int8 v20; // bp
  const struct DMMVIDPNSOURCEMODE *i; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v9 = *((_QWORD *)this + 8);
    v10 = 44 * v9;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 44 * v9, a3, a4);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = *(_BYTE **)(a2 + 32);
      v19 = (_QWORD *)((char *)this + 48);
      v20 = 0;
      *v18 = *((_BYTE *)this + 64);
      if ( (_QWORD *)*v19 != v19 )
      {
        for ( i = (const struct DMMVIDPNSOURCEMODE *)(*v19 - 8LL);
              i;
              i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i, v22, v23) )
        {
          DMMVIDPNSOURCEMODE::Serialize(
            i,
            (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(*(_QWORD *)(a2 + 32) + 4LL + 40LL * v20++));
        }
      }
      if ( v20 != **(_BYTE **)(a2 + 32) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v18, v12, v14, v15);
        WdLogEvent5_WdAssertion(v24);
      }
      return 0LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v17[3] = v10;
      v17[4] = this;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
