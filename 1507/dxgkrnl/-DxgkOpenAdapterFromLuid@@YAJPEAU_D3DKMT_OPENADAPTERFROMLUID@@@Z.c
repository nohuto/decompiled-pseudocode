/*
 * XREFs of ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00AD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C00059B4 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C0078C10 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  struct _LUID *v3; // rbp
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int Handle; // esi
  _DWORD *p_hAdapter; // r8
  ULONG64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE v35[32]; // [rsp+80h] [rbp+80h] BYREF

  v3 = (struct _LUID *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2082);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
  *v3 = v5->AdapterLuid;
  *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5->hAdapter;
  *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v7, v6, v9, v10);
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3);
    v17 = v12;
    if ( v12 )
    {
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v12;
      *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2]);
      if ( *((_DWORD *)v17 + 40) == 1
        && !*((_BYTE *)v17 + 1909)
        && (v18 = *((_QWORD *)v17 + 248)) != 0
        && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v18 + 376),
                              *(struct _VIDSCH_GLOBAL **)(v18 + 384),
                              Current) )
      {
        v32 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
        *(_QWORD *)(v32 + 24) = v17;
        *(_QWORD *)(v32 + 32) = Current;
        WdLogEvent5_WdEvent(v32);
        DXGADAPTER::ReleaseReference(v17);
        if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2]);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v33, &EventProfilerExit, v34, 2082);
        return 3221225506LL;
      }
      else
      {
        Handle = DXGADAPTER::CreateHandle(v17, (unsigned int *)&v3[1]);
        DXGADAPTER::ReleaseReference(v17);
        p_hAdapter = &a1->hAdapter;
        v25 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2]);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v25, &EventProfilerExit, (__int64)p_hAdapter, 2082);
        return Handle;
      }
    }
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v31[3] = v3->LowPart;
    v31[4] = *(int *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v31[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    v30 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    v29 = qword_1C00467F0;
    v30 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v28, 2082);
  return 3221225485LL;
}
