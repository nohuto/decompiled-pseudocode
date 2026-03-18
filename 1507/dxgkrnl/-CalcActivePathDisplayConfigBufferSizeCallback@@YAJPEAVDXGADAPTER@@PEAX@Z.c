/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AE580
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00AE68C (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  struct VIDPN_MGR *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v22[56]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+40h] BYREF
  struct DMMVIDPN *v26; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
  if ( !*((_QWORD *)a1 + 247) )
    goto LABEL_5;
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
  v9 = v4;
  if ( v4 >= 0 )
  {
    v12 = *(struct VIDPN_MGR **)(*((_QWORD *)a1 + 247) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, (__int64)v12);
    v26 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v12,
                                               (__int64 *)&v26,
                                               v13,
                                               v14);
    v9 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPnFromLastClientCommitedVidPn;
    }
    else
    {
      GetVidPnPathsSourcesTargetsCount(a1, v26, &v23, &v25, &v24);
      v20 = v23;
      a2[1] += v23;
      if ( (*a2 & 0x18) != 0 )
        a2[2] += 3 * v20;
      else
        a2[2] += v25 + v24;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v26, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v10[5] = *((unsigned int *)a1 + 63);
LABEL_5:
    v9 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  return v9;
}
