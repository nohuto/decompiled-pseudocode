/*
 * XREFs of ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00B9FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000B9D0 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C007A1E4 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  struct _LUID *v3; // rbp
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int Handle; // esi
  _DWORD *p_hAdapter; // r8
  ULONG64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[32]; // [rsp+80h] [rbp+80h] BYREF

  v3 = (struct _LUID *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2082);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
  *v3 = v5->AdapterLuid;
  *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5->hAdapter;
  *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3);
    v14 = v9;
    if ( v9 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2], v9, 1);
      if ( *((_DWORD *)v14 + 40) == 1
        && !*((_BYTE *)v14 + 1917)
        && (v15 = *((_QWORD *)v14 + 249)) != 0
        && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v15 + 400),
                              *(struct _VIDSCH_GLOBAL **)(v15 + 408),
                              Current) )
      {
        v29 = WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
        *(_QWORD *)(v29 + 24) = v14;
        *(_QWORD *)(v29 + 32) = Current;
        WdLogEvent5_WdEvent(v29);
        DXGADAPTER::ReleaseReference(v14);
        if ( *(_BYTE *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2]);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v30, &EventProfilerExit, v31, 2082);
        return 3221225506LL;
      }
      else
      {
        Handle = DXGADAPTER::CreateHandle(v14, (unsigned int *)&v3[1]);
        DXGADAPTER::ReleaseReference(v14);
        p_hAdapter = &a1->hAdapter;
        v22 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( *(_BYTE *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v3[2]);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v22, &EventProfilerExit, (__int64)p_hAdapter, 2082);
        return Handle;
      }
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v28[3] = v3->LowPart;
    v28[4] = *(int *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v28[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    v27 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    v26 = qword_1C00467F0;
    v27 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v25, 2082);
  return 3221225485LL;
}
