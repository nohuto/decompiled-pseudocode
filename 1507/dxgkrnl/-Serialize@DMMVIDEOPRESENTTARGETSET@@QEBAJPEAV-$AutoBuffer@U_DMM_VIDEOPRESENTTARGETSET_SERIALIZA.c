/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017ADAC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  _QWORD *v16; // rax
  _BYTE *v17; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
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
    if ( *((_QWORD *)this + 5) > 1uLL )
      v9 = *((_QWORD *)this + 5);
    v10 = 28 * (v9 - 1) + 32;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v10, a3, a4);
    v15 = v11;
    if ( v11 >= 0 )
    {
      v17 = *(_BYTE **)(a2 + 32);
      i = (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24);
      v19 = 0;
      *v17 = *((_BYTE *)this + 40);
      if ( *(const struct DMMVIDEOPRESENTTARGET **)i != i )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*(_QWORD *)i - 8LL);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v20 = *(_QWORD *)(a2 + 32);
          v21 = 28LL * v19;
          *(_DWORD *)(v21 + v20 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v21 + v20 + 8) = *((_DWORD *)i + 18);
          *(_DWORD *)(v21 + v20 + 12) = *((_DWORD *)i + 20);
          *(_DWORD *)(v21 + v20 + 16) = *((_DWORD *)i + 21);
          *(_BYTE *)(v21 + v20 + 20) = *((_BYTE *)i + 88);
          *(_DWORD *)(v21 + v20 + 24) = *((_DWORD *)i + 26);
          *(_DWORD *)(v21 + v20 + 28) = *((_DWORD *)i + 19);
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
