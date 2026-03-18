/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C003F4C4
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00389F4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0006AD0 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rbx
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rcx
  void *v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm1
  SIZE_T v22; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE v28[40]; // [rsp+20h] [rbp-50h] BYREF
  _DXGKARG_QUERYADAPTERINFO var28; // [rsp+48h] [rbp-28h] BYREF
  int v30; // [rsp+98h] [rbp+28h] BYREF

  v30 = a2;
  memset(&v28[8], 0, 0x20uLL);
  *(_DWORD *)v28 = 0;
  *(_QWORD *)&v28[8] = 0LL;
  var28.pInputData = &v30;
  var28.InputDataSize = 4;
  var28.pOutputData = v28;
  var28.Type = DXGKQAITYPE_QUERYSEGMENT4;
  var28.OutputDataSize = 40;
  v5 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v10 = v5;
  if ( v5 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v24 + 24) = v10;
    WdLogEvent5_WdWarning(v24);
    return (unsigned int)v10;
  }
  if ( *(_DWORD *)v28 > 0x20u )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v25 + 24) = 71LL;
    WdLogEvent5_WdAssertion(v25);
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  v11 = *(unsigned int *)v28;
  v12 = 96LL * *(unsigned int *)v28;
  if ( !is_mul_ok(*(unsigned int *)v28, 0x60uLL) )
    v12 = -1LL;
  v13 = operator new(v12, 0x31326956u, PagedPool);
  v15 = v13;
  if ( v13 )
  {
    memset(v13, 0, 96 * v11);
    *(_QWORD *)&v28[8] = v15;
    *(_QWORD *)&v28[32] = 96LL;
    v16 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
    v10 = v16;
    if ( v16 < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v27 + 24) = v10;
      WdLogEvent5_WdAssertion(v27);
      operator delete(v15);
    }
    else
    {
      v21 = *(_OWORD *)&v28[16];
      *(_OWORD *)&a3->NbSegment = *(_OWORD *)v28;
      v22 = *(_QWORD *)&v28[32];
      *(_OWORD *)&a3->PagingBufferSegmentId = v21;
      a3->SegmentDescriptorStride = v22;
    }
    return (unsigned int)v10;
  }
  _InterlockedIncrement(&dword_1C0027514);
  v26 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v26 + 24) = v11;
  WdLogEvent5_WdLowResource(v26);
  return 3221225495LL;
}
