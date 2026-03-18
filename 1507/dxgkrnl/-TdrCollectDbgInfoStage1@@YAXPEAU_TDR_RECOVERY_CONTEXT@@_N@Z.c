/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013CE00
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DFD0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C00232DC (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C002335C (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C0023450 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C01297A4 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C013C7F4 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C013C858 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C013C940 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C013C9D0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C013CB74 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C013CC90 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C013DE70 (-TdrFreePool@@YAXPEAX@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C013DF8C (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013E4B0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  PVOID Pool; // rax
  CTDR_DUMP_BUFFER *v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  PVOID v8; // rax
  UUID *v9; // rcx
  __int64 v10; // rdx
  UUID *v11; // rax
  UUID v12; // xmm1
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  _OWORD *v15; // rdx
  __int64 v16; // r8
  __int128 v17; // xmm1
  unsigned int *v18; // rbx
  unsigned __int16 v19; // r14
  unsigned int v20; // esi
  unsigned int v21; // r12d
  unsigned int RecentEvents; // ebx
  void *v23; // rax
  unsigned int *v24; // rbx
  void *v25; // rax
  void *v26; // r14
  bool v27; // zf
  UINT v28; // ecx
  char *v29; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // esi
  DXGADAPTER *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  unsigned int *v47; // rbx
  char *v48; // rax
  char *v49; // rbx
  int SmbiosInfo; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  unsigned int *v56; // rbx
  char *v57; // rax
  __int64 v58; // rbx
  int AdapterDebugData; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  unsigned int *v65; // rbx
  int v66; // ecx
  unsigned int v67; // esi
  char *v68; // rax
  char *v69; // r14
  int v70; // eax
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _QWORD *v76; // rax
  unsigned int *v77; // rbx
  __int64 v78; // rcx
  CTDR_DUMP_BUFFER *v79; // rbx
  unsigned int v80; // ebx
  char *v81; // rax
  char *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  _QWORD *v89; // rax
  unsigned int *v90; // rbx
  char *v91; // rax
  __int64 v92; // rbx
  int GlobalDebugData; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // rax
  unsigned int *v99; // rbx
  unsigned __int16 i; // si
  int v101; // r15d
  char *v102; // rax
  char *v103; // rbx
  int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  _DWORD *v109; // rax
  unsigned int *v110; // rbx
  _QWORD *v111; // rax
  bool v112; // [rsp+48h] [rbp-89h]
  _DWORD *v113; // [rsp+50h] [rbp-81h] BYREF
  _DWORD *v114; // [rsp+58h] [rbp-79h] BYREF
  _DXGKARG_COLLECTDBGINFO v115; // [rsp+60h] [rbp-71h] BYREF
  int v116; // [rsp+80h] [rbp-51h]
  int v117; // [rsp+84h] [rbp-4Dh]
  _DWORD v118[28]; // [rsp+88h] [rbp-49h] BYREF

  v112 = *((_DWORD *)a1 + 4) == 6;
  if ( !*((_QWORD *)a1 + 353) )
  {
    Pool = TdrAllocatePool(0x160804uLL, PagedPool);
    *((_QWORD *)a1 + 353) = Pool;
    if ( Pool )
    {
      v5 = (CTDR_DUMP_BUFFER *)TdrAllocatePool(0x20uLL, PagedPool);
      if ( v5 )
        v7 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v5, v6, *((_DWORD **)a1 + 353));
      else
        v7 = 0LL;
      *((_QWORD *)a1 + 355) = v7;
      if ( v7 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v7);
        *((_QWORD *)a1 + 354) = v7[6];
        v8 = TdrAllocatePool(0x24uLL, PagedPool);
        *((_QWORD *)a1 + 356) = v8;
        if ( !v8 )
          *((_DWORD *)a1 + 25) |= 2u;
        v9 = (UUID *)((char *)a1 + 184);
        *((_DWORD *)a1 + 35) = *((_DWORD *)a1 + 4);
        v10 = 20LL;
        *((_QWORD *)a1 + 18) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 12);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 21) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 11);
        v11 = &g_TdrHistory;
        do
        {
          *v9 = *v11;
          v9[1] = v11[1];
          v9[2] = v11[2];
          v9[3] = v11[3];
          v9[4] = v11[4];
          v9[5] = v11[5];
          v9[6] = v11[6];
          v9 += 8;
          v12 = v11[7];
          v11 += 8;
          v9[-1] = v12;
          --v10;
        }
        while ( v10 );
        *v9 = *v11;
        *(_QWORD *)&v9[1].Data1 = *(_QWORD *)&v11[1].Data1;
        v13 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 0xFFFF, 0xAA0u);
        if ( v13 )
        {
          v14 = v13;
          v15 = (_OWORD *)((char *)a1 + 96);
          v16 = 21LL;
          do
          {
            *v14 = *v15;
            v14[1] = v15[1];
            v14[2] = v15[2];
            v14[3] = v15[3];
            v14[4] = v15[4];
            v14[5] = v15[5];
            v14[6] = v15[6];
            v14 += 8;
            v17 = v15[7];
            v15 += 8;
            *(v14 - 1) = v17;
            --v16;
          }
          while ( v16 );
          *v14 = *v15;
          v14[1] = v15[1];
          *((_QWORD *)a1 + 357) = v13;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v18 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v18);
        *((_QWORD *)a1 + 354) = v18[6];
        *((_DWORD *)a1 + 32) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        *(&v115.Reason + 1) = 32;
        v115.pBuffer = (void *)0x4000000020LL;
        v19 = 0;
        v115.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v116 = 32;
        v20 = 0;
        v115.BufferSize = 0x4000000040LL;
        v117 = 64;
        v115.Reason = 1;
        do
        {
          if ( v20 >= 0x5000 )
            break;
          v21 = *(&v115.Reason + v19);
          RecentEvents = WdLogGetRecentEvents(v19, v21, 0LL, 0LL);
          if ( RecentEvents + v20 > 0x5000 )
            RecentEvents = 20480 - v20;
          if ( RecentEvents )
          {
            v23 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), (unsigned int)v19 + 16, RecentEvents);
            if ( v23 )
              RecentEvents = WdLogGetRecentEvents(v19, v21, v23, RecentEvents);
            else
              *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v20 += RecentEvents;
          ++v19;
        }
        while ( v19 < 0xAu );
        v24 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v24);
        *((_QWORD *)a1 + 354) = v24[6];
        *((_DWORD *)a1 + 32) = 26;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v25 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 1, 0x100004u);
        v26 = v25;
        if ( v25 )
        {
          v27 = *((_DWORD *)a1 + 4) == 6;
          v28 = 279;
          v115.pBuffer = v25;
          v29 = (char *)v25;
          v115.BufferSize = 0x100000LL;
          if ( v27 )
            v28 = 321;
          v30 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 356);
          v115.Reason = v28;
          v115.pExtension = v30;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v29, 0x100000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v114, *((char **)a1 + 356), 32);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v33 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(*((DXGADAPTER **)a1 + 4), &v115, v31, v32);
          }
          else
          {
            v34 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
            DXGADAPTER::AcquireDdiSync((__int64)v34, 1);
            v33 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v34, &v115, v35, v36);
            DXGADAPTER::ReleaseDdiSync(v34);
          }
          if ( v33 == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( v33 == -1073741822 )
          {
            *((_DWORD *)a1 + 25) |= 4u;
          }
          else if ( v33 < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
            v41[3] = a1;
            v41[4] = v26;
            v41[5] = 0x100000LL;
            WdLogEvent5_WdAssertion(v41);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v114) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v46 = (_QWORD *)WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
            v46[3] = a1;
            v46[4] = *((_QWORD *)a1 + 356);
            v46[5] = 32LL;
            WdLogEvent5_WdAssertion(v46);
          }
          if ( v114 )
            *v114 = 0;
          if ( v113 )
            *v113 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v47 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v47);
        *((_QWORD *)a1 + 354) = v47[6];
        *((_DWORD *)a1 + 32) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v48 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 2, 0x4004u);
        v49 = v48;
        if ( v48 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v48, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v49, 0x4000LL);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v55 = (_QWORD *)WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
            v55[3] = a1;
            v55[4] = v49;
            v55[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v55);
          }
          if ( v113 )
            *v113 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v56 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v56);
        *((_QWORD *)a1 + 354) = v56[6];
        *((_DWORD *)a1 + 32) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v57 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 6, 0x404u);
        v58 = (__int64)v57;
        if ( v57 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v57, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 176LL), v58);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v64 = (_QWORD *)WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
            v64[3] = a1;
            v64[4] = v58;
            v64[5] = 1024LL;
            WdLogEvent5_WdAssertion(v64);
          }
          if ( v113 )
            *v113 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v65 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v65);
        *((_QWORD *)a1 + 354) = v65[6];
        *((_DWORD *)a1 + 32) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        if ( !(unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) && !v112 )
        {
          v67 = 3;
          if ( v66 == 3 )
            v67 = 8;
          v68 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), v67, 0x2004u);
          v69 = v68;
          if ( v68 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v68, 0x2000);
            v70 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1984LL) + 376LL)
                                                                                                + 8LL)
                                                                                    + 512LL))(
                    a1,
                    v69);
            v71 = v70;
            if ( v70 == -2147483643 )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
            }
            else if ( v70 < 0 )
            {
              *((_DWORD *)a1 + 25) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
            {
              if ( v71 < 0 )
                *((_DWORD *)a1 + 25) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v76 = (_QWORD *)WdLogNewEntry5_WdAssertion(v73, v72, v74, v75);
              v76[6] = v67;
              v76[3] = a1;
              v76[4] = v69;
              v76[5] = 0x2000LL;
              WdLogEvent5_WdAssertion(v76);
            }
            if ( v113 )
              *v113 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v77 = (unsigned int *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v77);
          *((_QWORD *)a1 + 354) = v77[6];
          *((_DWORD *)a1 + 32) = v67;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v78 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v78 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v78) && !v112 )
        {
          v79 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v79);
          v80 = *((_DWORD *)v79 + 4) - *((_DWORD *)v79 + 6) - 10248;
          v81 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 4, v80 + 4);
          v82 = v81;
          if ( v81 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v81, v80);
            v83 = *((_QWORD *)a1 + 356);
            if ( v83 )
              v84 = *(unsigned int *)(v83 + 4);
            else
              v84 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1984LL) + 400LL) + 8LL)
                                                                                             + 328LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1984LL) + 408LL),
                    *((unsigned int *)a1 + 12),
                    *((_QWORD *)a1 + 7),
                    v84,
                    v82,
                    v80) )
              *((_DWORD *)a1 + 25) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v89 = (_QWORD *)WdLogNewEntry5_WdAssertion(v86, v85, v87, v88);
              v89[3] = a1;
              v89[4] = v82;
              v89[5] = v80;
              WdLogEvent5_WdAssertion(v89);
            }
            if ( v113 )
              *v113 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v90 = (unsigned int *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v90);
          *((_QWORD *)a1 + 354) = v90[6];
          *((_DWORD *)a1 + 32) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v91 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 9, 0xCu);
        v92 = (__int64)v91;
        if ( v91 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v113, v91, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v92);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v113) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v98 = (_QWORD *)WdLogNewEntry5_WdAssertion(v95, v94, v96, v97);
            v98[3] = a1;
            v98[4] = v92;
            v98[5] = 8LL;
            WdLogEvent5_WdAssertion(v98);
          }
          if ( v113 )
            *v113 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v99 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v99);
        *((_QWORD *)a1 + 354) = v99[6];
        *((_DWORD *)a1 + 32) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v118, 0, sizeof(v118));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v118) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v101 = v118[4 * i];
            if ( !v101 )
              break;
            v102 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), (unsigned int)i + 32, 0x14u);
            v103 = v102;
            if ( !v102 )
            {
              *((_DWORD *)a1 + 25) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v114, v102, 16);
            *((_DWORD *)v103 + 1) = v118[4 * i + 1];
            *((_DWORD *)v103 + 2) = v118[4 * i + 2];
            v104 = (*((_DWORD *)v103 + 3) ^ v118[4 * i + 3]) & 3;
            *(_DWORD *)v103 = v101;
            *((_DWORD *)v103 + 3) ^= v104;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v114) )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v111 = (_QWORD *)WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
              v111[3] = a1;
              v111[4] = v103;
              v111[5] = 16LL;
              WdLogEvent5_WdAssertion(v111);
              if ( v114 )
                *v114 = 0;
              return;
            }
            v109 = v114;
            if ( v114 )
            {
              v114 = 0LL;
              *v109 = 0;
            }
            v110 = (unsigned int *)*((_QWORD *)a1 + 355);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v110);
            *((_QWORD *)a1 + 354) = v110[6];
            *((_DWORD *)a1 + 32) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 25) |= 2u;
        TdrFreePool(*((void **)a1 + 353));
        *((_QWORD *)a1 + 353) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 25) |= 2u;
    }
  }
}
