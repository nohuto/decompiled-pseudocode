/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00B02A0
 * Callers:
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017A060 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6055);
  v5 = 0;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v19);
    }
    v10 = *((_QWORD *)this + 247);
    if ( v10 )
    {
      v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v10 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, v13);
        if ( *(_QWORD *)(v12 + 48) == v13 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v12 + 24));
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v21 + 24) = v12;
          *(_QWORD *)(v21 + 32) = v13;
          WdLogEvent5_WdError(v21);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v20 + 24) = a2;
        WdLogEvent5_WdError(v20);
        v5 = -1071774973;
      }
      goto LABEL_10;
    }
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = this;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v18);
  v5 = -1071775742;
LABEL_10:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 6055);
  return v5;
}
