/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017CE50
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00036A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  _BYTE *v17; // rcx
  struct DMMVIDPNSOURCEMODE *i; // rdx
  unsigned __int8 v19; // si
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax

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
    v10 = 80 * v9;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 80 * v9, a3, a4);
    v15 = v11;
    if ( v11 >= 0 )
    {
      v17 = *(_BYTE **)(a2 + 32);
      i = (DMMVIDPNSOURCEMODESET *)((char *)this + 48);
      v19 = 0;
      *v17 = *((_BYTE *)this + 64);
      if ( *(struct DMMVIDPNSOURCEMODE **)i != i )
      {
        for ( i = (struct DMMVIDPNSOURCEMODE *)(*(_QWORD *)i - 8LL); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v20 = *(_QWORD *)(a2 + 32);
          v21 = 9LL * v19;
          *(_DWORD *)(v20 + 8 * v21 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v20 + 8 * v21 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v20 + 8 * v21 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v20 + 8 * v21 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v20 + 8 * v21 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v20 + 8 * v21 + 72) = *((_DWORD *)i + 32);
          ++v19;
        }
      }
      if ( v19 != **(_BYTE **)(a2 + 32) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17, i, v13, v14);
        WdLogEvent5_WdAssertion(v22);
      }
      return 0LL;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v16[3] = v10;
      v16[4] = this;
      v16[5] = v15;
      WdLogEvent5_WdError(v16);
      return (unsigned int)v15;
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
