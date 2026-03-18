/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C00DC6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00068C8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114D8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114E0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r15
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // r13
  int PairingAdapters; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct DXGADAPTER *v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // r15d
  __int64 v28; // r10
  unsigned int i; // edx
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r8d
  __int64 v33; // rcx
  size_t v34; // r11
  const void *v35; // rdx
  char *v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r9d
  __int64 v39; // r10
  unsigned int v40; // ecx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  bool v50; // zf
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  bool v61; // zf
  _QWORD *v62; // rax
  unsigned __int64 v63; // rdx
  char v64; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 64) = a1;
  *(_DWORD *)(v3 + 56) = 2017;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2017);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v46 = WdLogNewEntry5_WdError(v7);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    *(_QWORD *)(v46 + 32) = PsGetCurrentProcess(v47);
    WdLogEvent5_WdError(v46);
    v49 = qword_1C0056840;
    v50 = (qword_1C0056840 & 2) == 0;
    goto LABEL_46;
  }
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  *(_BYTE *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)v9;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v9 + 16);
  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x10) != 0LL;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 72),
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    ProcessDxgProcess,
    (struct DXGADAPTER **)(v3 + 96));
  v14 = *(struct DXGADAPTER **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( !v14 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    LODWORD(v17) = -1073741811;
    v51[3] = -1073741811LL;
    v51[4] = ProcessDxgProcess;
    v51[5] = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdWarning(v51);
LABEL_45:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 72), v52);
    v50 = (qword_1C0056840 & 2) == 0;
LABEL_46:
    if ( !v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v49, &EventProfilerExit, v48, 2017);
    return (unsigned int)v17;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      v14,
                      *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
                      0LL,
                      0LL,
                      (struct DXGADAPTER **)(v3 + 104),
                      (unsigned __int64 *)(v3 + 112));
  v17 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v16);
    v53[3] = v14;
    v53[4] = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v53[5] = v17;
    WdLogEvent5_WdEvent(v53);
    goto LABEL_45;
  }
  v18 = *(struct DXGADAPTER **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  if ( !v18 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v54 + 24) = 5168LL;
    WdLogEvent5_WdAssertion(v54);
  }
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL));
  v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock(
          (DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL),
          0);
  v21 = v19;
  if ( v19 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v55 + 24) = v21;
    WdLogEvent5_WdError(v55);
    goto LABEL_39;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128), v18, 0LL);
  DXGADAPTER::ReleaseReference(v18);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 128));
  v21 = v22;
  if ( v22 < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23);
    v56[3] = v21;
    v56[4] = ProcessDxgProcess;
    v56[5] = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v56[6] = v18;
    WdLogEvent5_WdDmmEvent(v56);
LABEL_38:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128));
LABEL_39:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 72), v42);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v43, &EventProfilerExit, v44, 2017);
    return (unsigned int)v21;
  }
  v24 = *((_QWORD *)v18 + 266);
  v25 = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  if ( v25 >= *(_DWORD *)(v24 + 80) )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
    v57[3] = -1071774972LL;
    v57[4] = v18;
    v57[5] = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdDmmEvent(v57);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128));
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 72), v58);
    v60 = qword_1C0056840;
    v61 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v24, v25) )
    {
      LODWORD(v21) = DxgkpGetDisplayModeList(
                       (DXGADAPTER ***)v18,
                       (struct COREADAPTERACCESS *)(v3 + 128),
                       0,
                       (struct _D3DKMT_GETDISPLAYMODELIST *)(v3 + 8),
                       (unsigned __int8 *)(v3 + 1),
                       0LL);
      *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = v21;
      if ( (int)v21 >= 0 )
      {
        *(__m128i *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = _mm_load_si128((const __m128i *)&_xmm);
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 31;
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE4) = 119;
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 113;
        v27 = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18)
            * (*((_QWORD *)v18 + 267) != 0LL ? 1 : 7);
        v28 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        if ( *(_BYTE *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
        {
          if ( *(_DWORD *)(v28 + 16) < v27 )
          {
            LODWORD(v21) = -1073741789;
            *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = -1073741789;
          }
          else
          {
            v31 = *(_QWORD *)(v28 + 8);
            *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v31;
            v32 = 0;
            while ( 1 )
            {
              *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v32;
              if ( v32 >= (-(__int64)(*((_QWORD *)v18 + 267) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7 )
                break;
              v33 = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              v34 = 44 * v33;
              v35 = *(const void **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              v36 = (char *)(v31 + 44LL * (unsigned int)v33 * v32);
              if ( (unsigned __int64)&v36[v34] > MmUserProbeAddress || &v36[v34] <= v36 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v36, v35, v34);
              v37 = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              if ( (_DWORD)v37 )
              {
                v38 = 0;
                *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
                v39 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                while ( 1 )
                {
                  v40 = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  if ( v38 >= v40 )
                    break;
                  *(_DWORD *)(44LL * (v38 + v40 * (_DWORD)v37) + v39 + 8) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xD0
                                                                                      + 4 * v37);
                  *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ++v38;
                }
              }
              v32 = v37 + 1;
              v31 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            }
            for ( i = 0; ; ++i )
            {
              *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = i;
              if ( i >= v27 )
                break;
              v30 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              if ( *(_DWORD *)(v30 + 16) == -2 && *(_DWORD *)(v30 + 20) == -2 )
              {
                v41 = 44LL * i;
                *(_DWORD *)(v41 + v31 + 16) = 64;
                *(_DWORD *)(v41 + v31 + 20) = 1;
                *(_DWORD *)(v41 + v31 + 12) = 64;
              }
            }
            v28 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          }
        }
        *(_DWORD *)(v28 + 16) = v27;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
      {
        operator delete(*(void **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      }
      goto LABEL_38;
    }
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
    v62[3] = -1071774972LL;
    v62[4] = v18;
    v62[5] = *(unsigned int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdDmmEvent(v62);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128));
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 72), v63);
    v61 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v60, &EventProfilerExit, v59, 2017);
  return 3223192324LL;
}
