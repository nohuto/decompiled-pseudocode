/*
 * XREFs of HvlGetCoverageData @ 0x1401BA780
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA930 (MmBuildMdlForNonPagedPool.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r14
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  _BYTE v11[24]; // [rsp+30h] [rbp-918h] BYREF
  __int64 v12; // [rsp+48h] [rbp-900h]
  _BYTE v13[24]; // [rsp+50h] [rbp-8F8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-8E0h]
  _BYTE v15[144]; // [rsp+70h] [rbp-8D8h] BYREF
  _BYTE v16[2064]; // [rsp+100h] [rbp-848h] BYREF

  v3 = (__int16)a3;
  v5 = 0;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1LL, v16, 1032LL);
    HvlpAcquireHypercallPage(v13, 2LL, v15, 72LL);
    v9[1] = v8;
    *v9 = (a1 != 0) + 1;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    v5 = (unsigned __int16)HvcallCodeVa(147LL, v12, v14) == 0;
    HvlpReleaseHypercallPage(v11);
    HvlpReleaseHypercallPage(v13);
    IoFreeMdl(v7);
  }
  return v5;
}
