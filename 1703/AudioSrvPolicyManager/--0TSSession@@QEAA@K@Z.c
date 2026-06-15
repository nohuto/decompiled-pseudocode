/*
 * XREFs of ??0TSSession@@QEAA@K@Z @ 0x180018728
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAXXZ @ 0x18001D0C8 (-UpdateRehashThresholds@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 */

TSSession *__fastcall TSSession::TSSession(TSSession *this, int a2, __int64 a3)
{
  char *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  TSSession *result; // rax

  *(_DWORD *)this = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 24) = 10;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 10;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 10;
  *((_DWORD *)this + 56) = 1065353216;
  *((_DWORD *)this + 57) = 1;
  *((_QWORD *)this + 29) = 0LL;
  v4 = (char *)this + 240;
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_DWORD *)v4 + 4) = 17;
  *((_QWORD *)v4 + 4) = 0xFFFFFFFFLL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_DWORD *)v4 + 12) = 0;
  *((_DWORD *)v4 + 13) = 10;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_DWORD *)v4 + 5) = 1061158912;
  *((_DWORD *)v4 + 6) = 1048576000;
  *((_DWORD *)v4 + 7) = 1074790400;
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::UpdateRehashThresholds(
    v4,
    10LL,
    a3,
    this);
  *(_QWORD *)(v5 + 312) = v6;
  result = (TSSession *)v5;
  *(_QWORD *)(v5 + 320) = v6;
  *(_QWORD *)(v5 + 328) = v6;
  *(_QWORD *)(v5 + 336) = v6;
  *(_QWORD *)(v5 + 344) = v6;
  *(_DWORD *)(v5 + 352) = v6;
  *(_DWORD *)(v5 + 360) = v6;
  *(_DWORD *)(v5 + 368) = v6;
  return result;
}
