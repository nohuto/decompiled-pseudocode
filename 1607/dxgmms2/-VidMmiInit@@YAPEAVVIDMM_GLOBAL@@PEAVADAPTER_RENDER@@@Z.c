/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C006C9D4
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C0012D50 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C001D19C (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C006C7D0 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C006CB84 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C006EB6C (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int DriverVersion; // r15d
  SIZE_T v9; // rax
  __int64 v10; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  VIDMM_GLOBAL *v17; // rax
  __int64 v18; // rcx
  VIDMM_GLOBAL *v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v27; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v33; // rsi
  __int64 v34; // rax
  _BYTE SystemInformation[20]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-54h]

  v5 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = v5;
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || *(_QWORD *)(v5 + 1456) < (unsigned __int64)v36 << 12 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v34 + 24) = 182LL;
    WdLogEvent5_WdAssertion(v34);
    return 0LL;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v5 + 192));
  v9 = 40LL * *(unsigned int *)(v5 + 248);
  if ( !is_mul_ok(*(unsigned int *)(v5 + 248), 0x28uLL) )
    v9 = -1LL;
  v11 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new(v9, 0x30306956u, PagedPool);
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C00355A8);
    v29 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v29 + 24) = 191LL;
    WdLogEvent5_WdLowResource(v29);
    return 0LL;
  }
  memset(v11, 0, 40LL * *(unsigned int *)(v5 + 248));
  v13 = *(unsigned int *)(v5 + 248);
  v14 = 0LL;
  if ( (_DWORD)v13 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v5, v14, &v11[v14]) >= 0 )
    {
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= (unsigned int)v13 )
        goto LABEL_11;
    }
    v30 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v30 + 24) = 202LL;
    WdLogEvent5_WdAssertion(v30);
    goto LABEL_24;
  }
LABEL_11:
  v17 = (VIDMM_GLOBAL *)operator new(0xA300uLL, 0x35316956u, v12, (POOL_TYPE)512);
  if ( v17 )
    v19 = VIDMM_GLOBAL::VIDMM_GLOBAL(v17);
  else
    v19 = 0LL;
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C00355A8);
    v31 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v31 + 24) = 216LL;
    WdLogEvent5_WdLowResource(v31);
LABEL_24:
    if ( (_DWORD)v13 )
    {
      v33 = v11;
      do
      {
        VidMmiFreeQuerySegmentInfo(v33++);
        --v13;
      }
      while ( v13 );
    }
    operator delete[](v11);
    return 0LL;
  }
  v20 = VIDMM_GLOBAL::Init(v19, a1, v11, DriverVersion);
  v25 = v20;
  if ( v20 < 0 )
  {
    _InterlockedIncrement(&dword_1C00355AC);
    v32 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v32 + 24) = v25;
    WdLogEvent5_WdLowResource(v32);
    VIDMM_GLOBAL::`scalar deleting destructor'(v19);
    goto LABEL_24;
  }
  v26 = WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
  WdLogEvent5_WdEvent(v26);
  if ( (_DWORD)v13 )
  {
    v27 = v11;
    do
    {
      VidMmiFreeQuerySegmentInfo(v27++);
      --v13;
    }
    while ( v13 );
  }
  operator delete[](v11);
  return v19;
}
