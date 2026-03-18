/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0143230
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144410 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C00231DC (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C002325C (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C0023350 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C012FE3C (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0142C24 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0142C88 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0142D70 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0142E00 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0142FA4 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C01430C0 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C01442B0 (-TdrFreePool@@YAXPEAX@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C01443CC (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0144900 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
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
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned int *v41; // rbx
  char *v42; // rax
  char *v43; // rbx
  unsigned int v44; // r8d
  int SmbiosInfo; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned int *v48; // rbx
  char *v49; // rax
  __int64 v50; // rbx
  int AdapterDebugData; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  unsigned int *v54; // rbx
  int v55; // ecx
  bool v56; // r15
  unsigned int v57; // esi
  unsigned int v58; // ebx
  char *v59; // rax
  char *v60; // r14
  __int64 v61; // r15
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  unsigned int *v66; // rbx
  __int64 v67; // rcx
  CTDR_DUMP_BUFFER *v68; // rbx
  unsigned int v69; // ebx
  char *v70; // rax
  char *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // r9
  __int64 v74; // rcx
  _QWORD *v75; // rax
  unsigned int *v76; // rbx
  char *v77; // rax
  __int64 v78; // rbx
  int GlobalDebugData; // eax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned int *v82; // rbx
  unsigned __int16 i; // si
  int v84; // r15d
  char *v85; // rax
  char *v86; // rbx
  int v87; // eax
  int v88; // ecx
  __int64 v89; // rcx
  _DWORD *v90; // rax
  unsigned int *v91; // rbx
  _QWORD *v92; // rax
  bool v93; // [rsp+48h] [rbp-89h]
  _DWORD *v94; // [rsp+50h] [rbp-81h] BYREF
  _DWORD *v95; // [rsp+58h] [rbp-79h] BYREF
  _DXGKARG_COLLECTDBGINFO v96; // [rsp+60h] [rbp-71h] BYREF
  int v97; // [rsp+80h] [rbp-51h]
  int v98; // [rsp+84h] [rbp-4Dh]
  _DWORD v99[28]; // [rsp+88h] [rbp-49h] BYREF

  v93 = *((_DWORD *)a1 + 4) == 6;
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
        *(&v96.Reason + 1) = 32;
        v96.pBuffer = (void *)0x4000000020LL;
        v19 = 0;
        v96.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v97 = 32;
        v20 = 0;
        v96.BufferSize = 0x4000000040LL;
        v98 = 64;
        v96.Reason = 1;
        do
        {
          if ( v20 >= 0x5000 )
            break;
          v21 = *(&v96.Reason + v19);
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
          v96.pBuffer = v25;
          v29 = (char *)v25;
          v96.BufferSize = 0x100000LL;
          if ( v27 )
            v28 = 321;
          v30 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 356);
          v96.Reason = v28;
          v96.pExtension = v30;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v29, 0x100000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, *((char **)a1 + 356), 32);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v33 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(*((DXGADAPTER **)a1 + 4), &v96, v31, v32);
          }
          else
          {
            v34 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
            DXGADAPTER::AcquireDdiSync((__int64)v34, 1);
            v33 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v34, &v96, v35, v36);
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
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v37);
            v38[3] = a1;
            v38[4] = v26;
            v38[5] = 0x100000LL;
            WdLogEvent5_WdAssertion(v38);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v39);
            v40[3] = a1;
            v40[4] = *((_QWORD *)a1 + 356);
            v40[5] = 32LL;
            WdLogEvent5_WdAssertion(v40);
          }
          if ( v95 )
            *v95 = 0;
          if ( v94 )
            *v94 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v41 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v41);
        *((_QWORD *)a1 + 354) = v41[6];
        *((_DWORD *)a1 + 32) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v42 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 2, 0x4004u);
        v43 = v42;
        if ( v42 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v42, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v43, v44);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v46);
            v47[3] = a1;
            v47[4] = v43;
            v47[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v47);
          }
          if ( v94 )
            *v94 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v48 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v48);
        *((_QWORD *)a1 + 354) = v48[6];
        *((_DWORD *)a1 + 32) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v49 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 6, 0x404u);
        v50 = (__int64)v49;
        if ( v49 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v49, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 176LL), v50);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v53 = (_QWORD *)WdLogNewEntry5_WdAssertion(v52);
            v53[3] = a1;
            v53[4] = v50;
            v53[5] = 1024LL;
            WdLogEvent5_WdAssertion(v53);
          }
          if ( v94 )
            *v94 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v54 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v54);
        *((_QWORD *)a1 + 354) = v54[6];
        *((_DWORD *)a1 + 32) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v56 = v93;
        if ( !(unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) && !v93 )
        {
          if ( v55 == 3 )
          {
            v57 = 8;
            v58 = 195072;
          }
          else
          {
            v57 = 3;
            v58 = 0x2000;
          }
          v59 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), v57, v58 + 4);
          v60 = v59;
          if ( v59 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v59, v58);
            v61 = v58;
            v62 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL) + 400LL) + 8LL)
                                                                                            + 512LL))(
                    a1,
                    v60,
                    v58);
            v63 = v62;
            if ( v62 == -2147483643 )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
            }
            else if ( v62 < 0 )
            {
              *((_DWORD *)a1 + 25) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
            {
              if ( v63 < 0 )
                *((_DWORD *)a1 + 25) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v65 = (_QWORD *)WdLogNewEntry5_WdAssertion(v64);
              v65[6] = v57;
              v65[3] = a1;
              v65[4] = v60;
              v65[5] = v61;
              WdLogEvent5_WdAssertion(v65);
            }
            v56 = 0;
            if ( v94 )
              *v94 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v66 = (unsigned int *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v66);
          *((_QWORD *)a1 + 354) = v66[6];
          *((_DWORD *)a1 + 32) = v57;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v67 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v67 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v67) && !v56 )
        {
          v68 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v68);
          v69 = *((_DWORD *)v68 + 4) - *((_DWORD *)v68 + 6) - 10248;
          v70 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 4, v69 + 4);
          v71 = v70;
          if ( v70 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v70, v69);
            v72 = *((_QWORD *)a1 + 356);
            if ( v72 )
              v73 = *(unsigned int *)(v72 + 4);
            else
              v73 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL) + 424LL) + 8LL)
                                                                                             + 328LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL) + 432LL),
                    *((unsigned int *)a1 + 12),
                    *((_QWORD *)a1 + 7),
                    v73,
                    v71,
                    v69) )
              *((_DWORD *)a1 + 25) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v75 = (_QWORD *)WdLogNewEntry5_WdAssertion(v74);
              v75[3] = a1;
              v75[4] = v71;
              v75[5] = v69;
              WdLogEvent5_WdAssertion(v75);
            }
            if ( v94 )
              *v94 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          v76 = (unsigned int *)*((_QWORD *)a1 + 355);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v76);
          *((_QWORD *)a1 + 354) = v76[6];
          *((_DWORD *)a1 + 32) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v77 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), 9, 0xCu);
        v78 = (__int64)v77;
        if ( v77 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v94, v77, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v78);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 25) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v94) )
          {
            *((_DWORD *)a1 + 25) |= 0x40000000u;
            v81 = (_QWORD *)WdLogNewEntry5_WdAssertion(v80);
            v81[3] = a1;
            v81[4] = v78;
            v81[5] = 8LL;
            WdLogEvent5_WdAssertion(v81);
          }
          if ( v94 )
            *v94 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 25) |= 0x80000000;
        }
        v82 = (unsigned int *)*((_QWORD *)a1 + 355);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v82);
        *((_QWORD *)a1 + 354) = v82[6];
        *((_DWORD *)a1 + 32) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v99, 0, sizeof(v99));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v99) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v84 = v99[4 * i];
            if ( !v84 )
              break;
            v85 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 355), (unsigned int)i + 32, 0x14u);
            v86 = v85;
            if ( !v85 )
            {
              *((_DWORD *)a1 + 25) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v85, 16);
            v87 = v99[4 * i + 3] ^ *((_DWORD *)v86 + 3);
            *((_DWORD *)v86 + 1) = v99[4 * i + 1];
            v88 = v99[4 * i + 2];
            *((_DWORD *)v86 + 3) ^= v87 & 3;
            *((_DWORD *)v86 + 2) = v88;
            *(_DWORD *)v86 = v84;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
            {
              *((_DWORD *)a1 + 25) |= 0x40000000u;
              v92 = (_QWORD *)WdLogNewEntry5_WdAssertion(v89);
              v92[3] = a1;
              v92[4] = v86;
              v92[5] = 16LL;
              WdLogEvent5_WdAssertion(v92);
              if ( v95 )
                *v95 = 0;
              return;
            }
            v90 = v95;
            if ( v95 )
            {
              v95 = 0LL;
              *v90 = 0;
            }
            v91 = (unsigned int *)*((_QWORD *)a1 + 355);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v91);
            *((_QWORD *)a1 + 354) = v91[6];
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
