/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C006C7D0
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C006C9D4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0012D58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // xmm1
  SIZE_T v18; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+20h] [rbp-50h] BYREF
  _DXGKARG_QUERYADAPTERINFO var28; // [rsp+48h] [rbp-28h] BYREF
  int v26; // [rsp+98h] [rbp+28h] BYREF

  v26 = a2;
  memset(&v24[8], 0, 0x20uLL);
  *(_DWORD *)v24 = 0;
  *(_QWORD *)&v24[8] = 0LL;
  var28.pInputData = &v26;
  var28.InputDataSize = 4;
  var28.pOutputData = v24;
  var28.Type = DXGKQAITYPE_QUERYSEGMENT4;
  var28.OutputDataSize = 40;
  v5 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v8 = v5;
  if ( v5 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v7);
    *(_QWORD *)(v20 + 24) = v8;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)v24 > 0x20u )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v21 + 24) = 71LL;
    WdLogEvent5_WdAssertion(v21);
    LODWORD(v8) = -1073741823;
    return (unsigned int)v8;
  }
  v9 = *(unsigned int *)v24;
  v10 = 104LL * *(unsigned int *)v24;
  if ( !is_mul_ok(*(unsigned int *)v24, 0x68uLL) )
    v10 = -1LL;
  v11 = operator new(v10, 0x31326956u, PagedPool);
  v13 = v11;
  if ( v11 )
  {
    memset(v11, 0, 104 * v9);
    *(_QWORD *)&v24[8] = v13;
    *(_QWORD *)&v24[32] = 104LL;
    v14 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
    v8 = v14;
    if ( v14 < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v23 + 24) = v8;
      WdLogEvent5_WdAssertion(v23);
      operator delete[](v13);
    }
    else
    {
      v17 = *(_OWORD *)&v24[16];
      *(_OWORD *)&a3->NbSegment = *(_OWORD *)v24;
      v18 = *(_QWORD *)&v24[32];
      *(_OWORD *)&a3->PagingBufferSegmentId = v17;
      a3->SegmentDescriptorStride = v18;
    }
    return (unsigned int)v8;
  }
  _InterlockedIncrement(&dword_1C00355A4);
  v22 = WdLogNewEntry5_WdLowResource(v12);
  *(_QWORD *)(v22 + 24) = v9;
  WdLogEvent5_WdLowResource(v22);
  return 3221225495LL;
}
