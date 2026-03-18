/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D7698
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001A314 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001ABC8 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0062E24 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(
        DirectComposition::CBatchSharedMemoryPool ***this,
        int a2)
{
  char *v4; // rdi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  void *v14; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int16 v15[64]; // [rsp+30h] [rbp-79h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+7h]
  unsigned __int16 v17[8]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+2Fh]
  wchar_t v20; // [rsp+DCh] [rbp+33h]

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[15], 0x98uLL, &v14) )
    return 3221225473LL;
  v4 = (char *)v14;
  *(_DWORD *)v14 = 152;
  memset(v15, 0, sizeof(v15));
  v16 = 0uLL;
  if ( a2 )
  {
    v19 = *(_DWORD *)L"er";
    *(_OWORD *)v17 = *(_OWORD *)L"Window Manager";
    v20 = aWindowManager[14];
    v18 = *(_QWORD *)L"anager";
    StringCchCopyNW((char *)v15, 64LL, (char *)v17, 0xFuLL);
    DWORD1(v16) = 0;
  }
  *((_DWORD *)v4 + 1) = 7;
  v5 = *(_OWORD *)&v15[8];
  *(_OWORD *)(v4 + 8) = *(_OWORD *)v15;
  v6 = *(_OWORD *)&v15[16];
  *(_OWORD *)(v4 + 24) = v5;
  v7 = *(_OWORD *)&v15[24];
  *(_OWORD *)(v4 + 40) = v6;
  v8 = *(_OWORD *)&v15[32];
  *(_OWORD *)(v4 + 56) = v7;
  v9 = *(_OWORD *)&v15[40];
  *(_OWORD *)(v4 + 72) = v8;
  v10 = *(_OWORD *)&v15[48];
  *(_OWORD *)(v4 + 88) = v9;
  v11 = *(_OWORD *)&v15[56];
  *(_OWORD *)(v4 + 104) = v10;
  v12 = v16;
  *(_OWORD *)(v4 + 120) = v11;
  *(_OWORD *)(v4 + 136) = v12;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)this, 0LL, 1);
}
