/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140016F80
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140017434 (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ??0CpuManager@@QEAA@XZ @ 0x14001716C (--0CpuManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x140017244 (-RuntimeClassInitialize@CpuManager@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140017348 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140019054 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager>(CpuManager **a1)
{
  CpuManager *v2; // rax
  CpuManager *v3; // rdi
  int v4; // ebx
  CpuManager *v6; // [rsp+50h] [rbp+8h] BYREF
  CpuManager *v7; // [rsp+58h] [rbp+10h]
  CpuManager *v8; // [rsp+60h] [rbp+18h]
  CpuManager *v9; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = 0LL;
  v2 = (CpuManager *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v3 = CpuManager::CpuManager(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = CpuManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&v6);
  return (unsigned int)v4;
}
