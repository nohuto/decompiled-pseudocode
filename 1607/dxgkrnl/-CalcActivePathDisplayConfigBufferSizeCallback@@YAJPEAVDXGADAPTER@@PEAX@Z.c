/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D67F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00D6900 (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  _QWORD *v11; // rax
  const struct DMMVIDPN **v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v21[112]; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+77h] BYREF
  struct DMMVIDPN *v25; // [rsp+D8h] [rbp+7Fh] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, a1, 0LL);
  if ( !*(_QWORD *)(v4 + 2128) )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v13 = *(const struct DMMVIDPN ***)(*((_QWORD *)a1 + 266) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, (__int64)v13);
    v25 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v13,
                                               (__int64 *)&v25);
    v10 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = ClientVidPnFromLastClientCommitedVidPn;
    }
    else
    {
      GetVidPnPathsSourcesTargetsCount(a1, v25, &v22, &v24, &v23);
      v19 = v22;
      a2[1] += v22;
      if ( (*a2 & 0x18) != 0 )
        a2[2] += 3 * v19;
      else
        a2[2] += v24 + v23;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v25, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  }
  else if ( v5 == -1073741130 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = a1;
    v11[4] = *((int *)a1 + 68);
    v11[5] = *((unsigned int *)a1 + 67);
LABEL_5:
    v10 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  return v10;
}
