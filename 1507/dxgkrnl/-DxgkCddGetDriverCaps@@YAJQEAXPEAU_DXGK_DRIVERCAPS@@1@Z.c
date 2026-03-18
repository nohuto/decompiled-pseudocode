/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00B0B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct _DXGK_DRIVERCAPS *a3)
{
  struct _DXGK_DRIVERCAPS *v3; // rbx
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  struct DXGADAPTER *v15; // rsi
  DXGADAPTER *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  struct _DXGK_DRIVERCAPS *v23; // rax
  __int64 v24; // r8
  __int128 v25; // xmm1
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v33; // xmm1
  _BYTE v34[64]; // [rsp+20h] [rbp-58h] BYREF
  struct DXGADAPTER *v35; // [rsp+80h] [rbp+8h] BYREF
  struct DXGADAPTER *v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  memset(a2, 0, 0x240uLL);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0LL, &v36, 0LL);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v30 + 24) = a1;
    *(_QWORD *)(v30 + 32) = v8;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, 0LL, 0LL, &v35);
    v14 = v9;
    if ( v9 < 0 )
    {
      v31 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v31 + 24) = a1;
      v15 = 0LL;
      *(_QWORD *)(v31 + 32) = v14;
    }
    else
    {
      v15 = v35;
    }
    v16 = v36;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v36, v15);
    DXGADAPTER::ReleaseReference(v16);
    if ( v15 )
      DXGADAPTER::ReleaseReference(v15);
    LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
    if ( (int)v8 >= 0 )
    {
      if ( !v16 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v32 + 24) = 3029LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v21 = 4LL;
      v22 = (_OWORD *)((char *)v16 + 1312);
      v23 = a3;
      v24 = 4LL;
      do
      {
        *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v22;
        *(_OWORD *)&v23->ApertureSegmentCommitLimit = v22[1];
        *(_OWORD *)&v23->PointerCaps.0 = v22[2];
        *(_OWORD *)&v23->GammaRampCaps.0 = v22[3];
        *(_OWORD *)&v23->SchedulingCaps.0 = v22[4];
        *(_OWORD *)v23->GpuEngineTopology.Reserved = v22[5];
        *(_OWORD *)&v23->GpuEngineTopology.Reserved[4] = v22[6];
        v23 = (struct _DXGK_DRIVERCAPS *)((char *)v23 + 128);
        v25 = v22[7];
        v22 += 8;
        *(_OWORD *)&v23[-1].SupportSurpriseRemoval = v25;
        --v24;
      }
      while ( v24 );
      *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v22;
      *(_OWORD *)&v23->ApertureSegmentCommitLimit = v22[1];
      *(_OWORD *)&v23->PointerCaps.0 = v22[2];
      *(_OWORD *)&v23->GammaRampCaps.0 = v22[3];
      if ( v15 )
      {
        v26 = (_OWORD *)((char *)v15 + 1312);
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v26;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = v26[1];
          *(_OWORD *)&v3->PointerCaps.0 = v26[2];
          *(_OWORD *)&v3->GammaRampCaps.0 = v26[3];
          *(_OWORD *)&v3->SchedulingCaps.0 = v26[4];
          *(_OWORD *)v3->GpuEngineTopology.Reserved = v26[5];
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = v26[6];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v27 = v26[7];
          v26 += 8;
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v27;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v26;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = v26[1];
        *(_OWORD *)&v3->PointerCaps.0 = v26[2];
        v28 = v26[3];
      }
      else
      {
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
          *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
          *(_OWORD *)&v3->GammaRampCaps.0 = *(_OWORD *)&a3->GammaRampCaps.0;
          *(_OWORD *)&v3->SchedulingCaps.0 = *(_OWORD *)&a3->SchedulingCaps.0;
          *(_OWORD *)v3->GpuEngineTopology.Reserved = *(_OWORD *)a3->GpuEngineTopology.Reserved;
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = *(_OWORD *)&a3->GpuEngineTopology.Reserved[4];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v33 = *(_OWORD *)&a3->GpuEngineTopology.Reserved[8];
          a3 = (struct _DXGK_DRIVERCAPS *)((char *)a3 + 128);
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v33;
          --v21;
        }
        while ( v21 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
        *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
        v28 = *(_OWORD *)&a3->GammaRampCaps.0;
      }
      *(_OWORD *)&v3->GammaRampCaps.0 = v28;
      LODWORD(v8) = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  }
  return (unsigned int)v8;
}
