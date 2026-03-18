/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0004A34
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000CB18 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        __int64 a1,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r15
  DMMVIDPN *v10; // rax
  DMMVIDPN *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // xmm0_8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // ecx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a3;
  v24[0] = 0LL;
  v10 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v10 )
    v11 = DMMVIDPN::DMMVIDPN(v10, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v18 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
    *(_QWORD *)(v18 + 24) = 320LL;
    *(_QWORD *)(v18 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v18);
    v5 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v11 + 9))((__int64)v11 + 72) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError();
    v19[3] = v11;
    v19[4] = a2;
    v19[5] = *((int *)v11 + 20);
    WdLogEvent5_WdError(v19);
    v5 = *((_DWORD *)v11 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v24, v11);
  v12 = operator new[](0x50uLL, 0x4E506456u, PagedPool);
  v15 = v12;
  if ( v12 )
  {
    v14 = *(_QWORD *)(a5 + 32);
    v16 = *a4;
    v13 = *((unsigned int *)a4 + 2);
    v12[1] = 0LL;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 10) = 1833173016;
    *v12 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v12[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v12[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v12[6] = v24[0];
    *(_QWORD *)((char *)v12 + 60) = v16;
    *((_DWORD *)v12 + 17) = v13;
    *((_DWORD *)v12 + 14) = v6;
    v12[9] = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14, v13, 0LL, a5);
    v21 = *(_DWORD *)a4;
    v22 = v20;
    v20[3] = 80LL;
    v20[4] = a2;
    v20[5] = v21 << 28 >> 28;
    v23 = (char)v21 >> 4;
    v18 = (__int64)v22;
    v22[7] = v23;
    v22[6] = v6;
    goto LABEL_15;
  }
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  v24[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(a1 + 160, v15);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v24, 0LL);
  return v5;
}
