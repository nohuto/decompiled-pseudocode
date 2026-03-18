/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00E4E6C
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00E3FA0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001AC78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0074044 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(
        DirectComposition::CBatchSharedMemoryPool ***this,
        int a2)
{
  char *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  void *v13; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v14[72]; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int16 v15[8]; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+37h]
  int v17; // [rsp+E0h] [rbp+3Fh]
  wchar_t v18; // [rsp+E4h] [rbp+43h]

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[23], 0x98uLL, &v13) )
    return 3221225473LL;
  v4 = (char *)v13;
  *(_DWORD *)v13 = 152;
  memset(v14, 0, sizeof(v14));
  if ( a2 )
  {
    v17 = *(_DWORD *)L"er";
    v16 = *(_QWORD *)L"anager";
    *(_OWORD *)v15 = *(_OWORD *)L"Window Manager";
    v18 = aWindowManager[14];
    StringCchCopyNW((char *)v14, 64LL, (char *)v15, 0xFuLL);
    *(_DWORD *)&v14[66] = 0;
  }
  *((_DWORD *)v4 + 1) = 7;
  v5 = *(_OWORD *)&v14[8];
  *(_OWORD *)(v4 + 8) = *(_OWORD *)v14;
  v6 = *(_OWORD *)&v14[16];
  *(_OWORD *)(v4 + 24) = v5;
  v7 = *(_OWORD *)&v14[24];
  *(_OWORD *)(v4 + 40) = v6;
  v8 = *(_OWORD *)&v14[32];
  *(_OWORD *)(v4 + 56) = v7;
  v9 = *(_OWORD *)&v14[40];
  *(_OWORD *)(v4 + 72) = v8;
  v10 = *(_OWORD *)&v14[48];
  *(_OWORD *)(v4 + 88) = v9;
  v11 = *(_OWORD *)&v14[64];
  *(_OWORD *)(v4 + 104) = v10;
  *(_OWORD *)(v4 + 120) = *(_OWORD *)&v14[56];
  *(_OWORD *)(v4 + 136) = v11;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)this, 0LL, 1);
}
