/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C00B9A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007088 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007090 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007A8C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  ULONG64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  struct DXGADAPTER *v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // r15d
  __int64 v29; // r10
  unsigned int i; // edx
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned int v33; // r8d
  __int64 v34; // rcx
  size_t v35; // r11
  const void *v36; // rdx
  char *v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r9d
  __int64 v40; // r10
  unsigned int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  bool v49; // zf
  __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rcx
  bool v53; // zf
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  char v60; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 64) = a1;
  *(_DWORD *)(v3 + 56) = 2017;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = Current;
  if ( !Current )
  {
    v50 = WdLogNewEntry5_WdError(v5);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    *(_QWORD *)(v50 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v50);
    v52 = qword_1C00467F0;
    v53 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_49;
  }
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)v7;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x10) != 0LL;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 32),
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    Current,
    (struct DXGADAPTER **)(v3 + 88));
  v12 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  if ( !v12 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    LODWORD(v18) = -1073741811;
    v54[3] = -1073741811LL;
    v54[4] = Current;
    v54[5] = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdWarning(v54);
LABEL_48:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 32));
    v53 = (qword_1C00467F0 & 2) == 0;
LABEL_49:
    if ( !v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v52, &EventProfilerExit, v51, 2017);
    return (unsigned int)v18;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *(struct DXGADAPTER **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                      *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
                      0LL,
                      (struct DXGADAPTER **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 96));
  v18 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
    v55[3] = v12;
    v55[4] = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v55[5] = v18;
    WdLogEvent5_WdEvent(v55);
    goto LABEL_48;
  }
  v19 = *(struct DXGADAPTER **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( !v19 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v56 + 24) = 5161LL;
    WdLogEvent5_WdAssertion(v56);
  }
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
  v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock(
          (DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL),
          0);
  v22 = v20;
  if ( v20 < 0 )
  {
    v57 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v57 + 24) = v22;
    WdLogEvent5_WdError(v57);
    goto LABEL_39;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104), v19, 0LL);
  DXGADAPTER::ReleaseReference(v19);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 104));
  v22 = v23;
  if ( v23 < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
    v58[3] = v22;
    v58[4] = Current;
    v58[5] = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v58[6] = v19;
    WdLogEvent5_WdDmmEvent(v58);
LABEL_38:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104));
LABEL_39:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 32));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v43, &EventProfilerExit, v44, 2017);
    return (unsigned int)v22;
  }
  v25 = *((_QWORD *)v19 + 248);
  v26 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( v26 >= *(_DWORD *)(v25 + 104) )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25);
    v59[3] = -1071774972LL;
    v59[4] = v19;
    v59[5] = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdDmmEvent(v59);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104));
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 32));
    v47 = qword_1C00467F0;
    v49 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v25, v26) )
    {
      LODWORD(v22) = DxgkpGetDisplayModeList(
                       v19,
                       (struct COREADAPTERACCESS *)(v3 + 104),
                       0,
                       (struct _D3DKMT_GETDISPLAYMODELIST *)(v3 + 8),
                       (unsigned __int8 *)(v3 + 1),
                       0LL);
      *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v22;
      if ( (int)v22 >= 0 )
      {
        *(__m128i *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = _mm_load_si128((const __m128i *)&_xmm);
        *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 31;
        *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB4) = 119;
        *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 113;
        v28 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)
            * (*((_QWORD *)v19 + 249) != 0LL ? 1 : 7);
        v29 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        if ( *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
        {
          if ( *(_DWORD *)(v29 + 16) < v28 )
          {
            LODWORD(v22) = -1073741789;
            *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = -1073741789;
          }
          else
          {
            v32 = *(_QWORD *)(v29 + 8);
            *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v32;
            v33 = 0;
            while ( 1 )
            {
              *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = v33;
              if ( v33 >= (-(__int64)(*((_QWORD *)v19 + 249) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7 )
                break;
              v34 = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              v35 = 44 * v34;
              v36 = *(const void **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              v37 = (char *)(v32 + 44LL * (unsigned int)v34 * v33);
              if ( (unsigned __int64)&v37[v35] > MmUserProbeAddress || &v37[v35] <= v37 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v37, v36, v35);
              v38 = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
              if ( (_DWORD)v38 )
              {
                v39 = 0;
                *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 0;
                v40 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                while ( 1 )
                {
                  v41 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  if ( v39 >= v41 )
                    break;
                  *(_DWORD *)(44LL * (v39 + v41 * (_DWORD)v38) + v40 + 8) = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0
                                                                                      + 4 * v38);
                  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = ++v39;
                }
              }
              v33 = v38 + 1;
              v32 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            }
            for ( i = 0; ; ++i )
            {
              *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = i;
              if ( i >= v28 )
                break;
              v31 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              if ( *(_DWORD *)(v31 + 16) == -2 && *(_DWORD *)(v31 + 20) == -2 )
              {
                v42 = 44LL * i;
                *(_DWORD *)(v42 + v32 + 16) = 64;
                *(_DWORD *)(v42 + v32 + 20) = 1;
                *(_DWORD *)(v42 + v32 + 12) = 64;
              }
            }
            v29 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          }
        }
        *(_DWORD *)(v29 + 16) = v28;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
      {
        operator delete(*(void **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      }
      goto LABEL_38;
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27);
    v46[3] = -1071774972LL;
    v46[4] = v19;
    v46[5] = *(unsigned int *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdDmmEvent(v46);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104));
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 32));
    v49 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v47, &EventProfilerExit, v48, 2017);
  return 3223192324LL;
}
