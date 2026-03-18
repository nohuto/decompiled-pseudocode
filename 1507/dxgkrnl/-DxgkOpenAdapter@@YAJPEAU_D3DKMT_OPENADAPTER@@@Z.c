/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00948D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C00059B4 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C0078C10 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00949E0 (DpiGetDxgAdapterSafe.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  int DxgAdapterSafe; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGADAPTER *v9; // rbx
  int v10; // eax
  DXGADAPTER *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  DXGADAPTER *v23; // [rsp+20h] [rbp-18h] BYREF
  char v24; // [rsp+28h] [rbp-10h]
  unsigned int v25; // [rsp+48h] [rbp+10h] BYREF
  DXGADAPTER *v26; // [rsp+50h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2001);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v21 = WdLogNewEntry5_WdError(v4);
    v19 = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_12;
  }
  DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v26);
  if ( DxgAdapterSafe < 0 )
  {
    v19 = DxgAdapterSafe;
    goto LABEL_12;
  }
  v9 = v26;
  v23 = v26;
  v24 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v23);
  v10 = *((_DWORD *)v9 + 40);
  v11 = v26;
  if ( v10 == 1
    && !*((_BYTE *)v26 + 1909)
    && (v12 = *((_QWORD *)v26 + 248)) != 0
    && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                          *(VIDSCH_EXPORT **)(v12 + 376),
                          *(struct _VIDSCH_GLOBAL **)(v12 + 384),
                          Current) )
  {
    v22 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    *(_QWORD *)(v22 + 24) = v11;
    *(_QWORD *)(v22 + 32) = Current;
    WdLogEvent5_WdEvent(v22);
    DXGADAPTER::ReleaseReference(v11);
    v17 = -1073741790;
  }
  else
  {
    v17 = DXGADAPTER::CreateHandle(v11, &v25);
    DXGADAPTER::ReleaseReference(v11);
    if ( v17 >= 0 )
    {
      *((_DWORD *)a1 + 2) = v25;
      v18 = *(_QWORD *)((char *)v11 + 252);
      v19 = 0;
      *(_QWORD *)((char *)a1 + 12) = v18;
      goto LABEL_10;
    }
  }
  v19 = v17;
LABEL_10:
  if ( v24 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v23);
LABEL_12:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerExit, v8, 2001);
  return v19;
}
