/*
 * XREFs of DmmAdapterPowerChange @ 0x1C017983C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmAdapterPowerChange(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    if ( !a1 )
    {
      v3 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v3 + 24) &= a1;
      WdLogEvent5_WdError(v3);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = *(_QWORD *)(a1 + 1984);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 112);
      if ( !v8 )
      {
        v9 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v9 + 24) = a1;
        WdLogEvent5_WdError(v9);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v13, *(_QWORD *)(v7 + 112));
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 96) + 72LL));
      v10 = *(_QWORD **)(v8 + 96);
      v11 = v10 + 3;
      if ( (_QWORD *)*v11 != v11 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v11 - 8LL);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, i) )
        {
          *((_BYTE *)i + 380) = 0;
        }
      }
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v13 + 40));
    }
  }
  return 0LL;
}
