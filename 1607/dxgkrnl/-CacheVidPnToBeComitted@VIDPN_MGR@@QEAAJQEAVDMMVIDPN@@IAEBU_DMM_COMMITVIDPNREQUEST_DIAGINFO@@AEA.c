/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0005D6C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000D298 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  __int64 v11; // rcx
  DMMVIDPN *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // xmm0_8
  int v18; // edx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // ecx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _QWORD v26[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a3;
  v26[0] = 0LL;
  v10 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v10 )
    v12 = DMMVIDPN::DMMVIDPN(v10, a2);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v20 + 24) = 320LL;
    *(_QWORD *)(v20 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v20);
    v5 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v12 + 9))((__int64)v12 + 72) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v21[3] = v12;
    v21[4] = a2;
    v21[5] = *((int *)v12 + 20);
    WdLogEvent5_WdError(v21);
    v5 = *((_DWORD *)v12 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v26, v12);
  v14 = operator new(0x50uLL, 0x4E506456u, PagedPool);
  v16 = v14;
  if ( v14 )
  {
    v15 = *(_QWORD *)(a5 + 32);
    v17 = *a4;
    v18 = *((_DWORD *)a4 + 2);
    v14[1] = 0LL;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 10) = 1833173016;
    *v14 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v14[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v14[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v14[6] = v26[0];
    *(_QWORD *)((char *)v14 + 60) = v17;
    *((_DWORD *)v14 + 17) = v18;
    *((_DWORD *)v14 + 14) = v6;
    v14[9] = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
    v23 = *(_DWORD *)a4;
    v24 = v22;
    v22[3] = 80LL;
    v22[4] = a2;
    v22[5] = v23 << 28 >> 28;
    v25 = (char)v23 >> 4;
    v20 = (__int64)v24;
    v24[7] = v25;
    v24[6] = v6;
    goto LABEL_15;
  }
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  v26[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(a1 + 160, v16);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v26, 0LL);
  return v5;
}
