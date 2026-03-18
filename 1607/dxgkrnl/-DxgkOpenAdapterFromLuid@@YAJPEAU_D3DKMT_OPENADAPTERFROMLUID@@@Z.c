/*
 * XREFs of ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00D5F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C00043CC (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C009FCAC (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int Handle; // esi
  _DWORD *p_hAdapter; // r8
  ULONG64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[48]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2082);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
  *(LUID *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5->AdapterLuid;
  *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v5->hAdapter;
  *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( ProcessDxgProcess )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v11 = DXGGLOBAL::ReferenceAdapterByLuid(
            Global,
            *(struct _LUID *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            (unsigned __int64 *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL));
    v16 = v11;
    if ( v11 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 24), v11, 1);
      if ( *((_DWORD *)v16 + 44) == 1
        && !*((_BYTE *)v16 + 2053)
        && (v17 = *((_QWORD *)v16 + 267)) != 0
        && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v17 + 376),
                              *(struct _VIDSCH_GLOBAL **)(v17 + 384),
                              ProcessDxgProcess) )
      {
        v28 = WdLogNewEntry5_WdEvent(v18);
        *(_QWORD *)(v28 + 24) = v16;
        *(_QWORD *)(v28 + 32) = ProcessDxgProcess;
        WdLogEvent5_WdEvent(v28);
        DXGADAPTER::ReleaseReference(v16);
        if ( *(_BYTE *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 24));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v29, &EventProfilerExit, v30, 2082);
        return 3221225506LL;
      }
      else
      {
        Handle = DXGADAPTER::CreateHandle(v16, (unsigned int *)(v3 + 16));
        DXGADAPTER::ReleaseReference(v16);
        p_hAdapter = &a1->hAdapter;
        v21 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( *(_BYTE *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 24));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v21, &EventProfilerExit, (__int64)p_hAdapter, 2082);
        return Handle;
      }
    }
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v27[3] = *(unsigned int *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v27[4] = *(int *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v27[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    v26 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    v25 = qword_1C0056840;
    v26 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v24, 2082);
  return 3221225485LL;
}
