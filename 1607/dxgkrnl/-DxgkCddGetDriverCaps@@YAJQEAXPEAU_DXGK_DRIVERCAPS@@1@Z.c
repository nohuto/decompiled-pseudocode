/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00DA130
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
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
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  struct _DXGK_DRIVERCAPS *v20; // rax
  __int64 v21; // r8
  __int128 v22; // xmm1
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm1
  unsigned __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v32[80]; // [rsp+40h] [rbp-68h] BYREF
  struct DXGADAPTER *v33; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v34; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  memset(a2, 0, 0x240uLL);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, &v34, (unsigned __int64 *)&v33, 0LL, 0LL);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v27 + 24) = a1;
    *(_QWORD *)(v27 + 32) = v8;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, &v33, &v31);
    v14 = v9;
    if ( v9 < 0 )
    {
      v28 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v28 + 24) = a1;
      v15 = 0LL;
      *(_QWORD *)(v28 + 32) = v14;
    }
    else
    {
      v15 = v33;
    }
    v16 = v34;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v34, v15);
    DXGADAPTER::ReleaseReference(v16);
    if ( v15 )
      DXGADAPTER::ReleaseReference(v15);
    LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
    if ( (int)v8 >= 0 )
    {
      if ( !v16 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v29 + 24) = 3068LL;
        WdLogEvent5_WdAssertion(v29);
      }
      v18 = 4LL;
      v19 = (_OWORD *)((char *)v16 + 1456);
      v20 = a3;
      v21 = 4LL;
      do
      {
        *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v19;
        *(_OWORD *)&v20->ApertureSegmentCommitLimit = v19[1];
        *(_OWORD *)&v20->PointerCaps.0 = v19[2];
        *(_OWORD *)&v20->GammaRampCaps.0 = v19[3];
        *(_OWORD *)&v20->SchedulingCaps.0 = v19[4];
        *(_OWORD *)v20->GpuEngineTopology.Reserved = v19[5];
        *(_OWORD *)&v20->GpuEngineTopology.Reserved[4] = v19[6];
        v20 = (struct _DXGK_DRIVERCAPS *)((char *)v20 + 128);
        v22 = v19[7];
        v19 += 8;
        *(_OWORD *)&v20[-1].SupportSurpriseRemoval = v22;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v19;
      *(_OWORD *)&v20->ApertureSegmentCommitLimit = v19[1];
      *(_OWORD *)&v20->PointerCaps.0 = v19[2];
      *(_OWORD *)&v20->GammaRampCaps.0 = v19[3];
      if ( v15 )
      {
        v23 = (_OWORD *)((char *)v15 + 1456);
        do
        {
          *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v23;
          *(_OWORD *)&v3->ApertureSegmentCommitLimit = v23[1];
          *(_OWORD *)&v3->PointerCaps.0 = v23[2];
          *(_OWORD *)&v3->GammaRampCaps.0 = v23[3];
          *(_OWORD *)&v3->SchedulingCaps.0 = v23[4];
          *(_OWORD *)v3->GpuEngineTopology.Reserved = v23[5];
          *(_OWORD *)&v3->GpuEngineTopology.Reserved[4] = v23[6];
          v3 = (struct _DXGK_DRIVERCAPS *)((char *)v3 + 128);
          v24 = v23[7];
          v23 += 8;
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v24;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *v23;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = v23[1];
        *(_OWORD *)&v3->PointerCaps.0 = v23[2];
        v25 = v23[3];
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
          v30 = *(_OWORD *)&a3->GpuEngineTopology.Reserved[8];
          a3 = (struct _DXGK_DRIVERCAPS *)((char *)a3 + 128);
          *(_OWORD *)&v3[-1].SupportSurpriseRemoval = v30;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)&v3->HighestAcceptableAddress.LowPart = *(_OWORD *)&a3->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&v3->ApertureSegmentCommitLimit = *(_OWORD *)&a3->ApertureSegmentCommitLimit;
        *(_OWORD *)&v3->PointerCaps.0 = *(_OWORD *)&a3->PointerCaps.0;
        v25 = *(_OWORD *)&a3->GammaRampCaps.0;
      }
      *(_OWORD *)&v3->GammaRampCaps.0 = v25;
      LODWORD(v8) = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  }
  return (unsigned int)v8;
}
