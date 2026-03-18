/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00389F4
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C00069A0 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C000DFF4 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C0038C30 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C003B7A8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C003CC18 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C003F4C4 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int DriverVersion; // r15d
  SIZE_T v8; // rax
  __int64 v9; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  VIDMM_GLOBAL *v18; // rax
  __int64 v19; // rcx
  VIDMM_GLOBAL *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v28; // rsi
  __int64 v29; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v30; // rbp
  __int64 v32; // rax
  _DWORD v33[16]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  if ( ZwQuerySystemInformation(SystemBasicInformation, v33, 0x40u, 0LL) < 0
    || *(_QWORD *)(v1 + 1312) < (unsigned __int64)v33[5] << 12 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v32 + 24) = 182LL;
    WdLogEvent5_WdAssertion(v32);
    return 0LL;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v1 + 176));
  v8 = 40LL * *(unsigned int *)(v1 + 232);
  if ( !is_mul_ok(*(unsigned int *)(v1 + 232), 0x28uLL) )
    v8 = -1LL;
  v10 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new(v8, 0x30306956u, PagedPool);
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C0027518);
    v11 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v11 + 24) = 191LL;
    WdLogEvent5_WdLowResource(v11);
    return 0LL;
  }
  memset(v10, 0, 40LL * *(unsigned int *)(v1 + 232));
  v13 = *(unsigned int *)(v1 + 232);
  v14 = 0LL;
  if ( (_DWORD)v13 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v1, v14, &v10[v14]) >= 0 )
    {
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= (unsigned int)v13 )
        goto LABEL_10;
    }
    v21 = WdLogNewEntry5_WdAssertion(v16, v15, v12, v17);
    *(_QWORD *)(v21 + 24) = 202LL;
    WdLogEvent5_WdAssertion(v21);
    goto LABEL_18;
  }
LABEL_10:
  v18 = (VIDMM_GLOBAL *)operator new(0xA150uLL, 0x35316956u, v12, (POOL_TYPE)512);
  if ( v18 )
    v20 = VIDMM_GLOBAL::VIDMM_GLOBAL(v18);
  else
    v20 = 0LL;
  if ( !v20 )
  {
    _InterlockedIncrement(&dword_1C0027518);
    v22 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v22 + 24) = 216LL;
    WdLogEvent5_WdLowResource(v22);
LABEL_18:
    if ( (_DWORD)v13 )
    {
      v28 = v10;
      do
      {
        VidMmiFreeQuerySegmentInfo(v28++);
        --v13;
      }
      while ( v13 );
    }
    operator delete(v10);
    return 0LL;
  }
  v23 = VIDMM_GLOBAL::Init(v20, a1, v10, DriverVersion);
  v26 = v23;
  if ( v23 < 0 )
  {
    _InterlockedIncrement(&dword_1C002751C);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdLowResource(v27);
    VIDMM_GLOBAL::`scalar deleting destructor'(v20);
    goto LABEL_18;
  }
  v29 = WdLogNewEntry5_WdEvent(v25, v24);
  WdLogEvent5_WdEvent(v29);
  if ( (_DWORD)v13 )
  {
    v30 = v10;
    do
    {
      VidMmiFreeQuerySegmentInfo(v30++);
      --v13;
    }
    while ( v13 );
  }
  operator delete(v10);
  return v20;
}
