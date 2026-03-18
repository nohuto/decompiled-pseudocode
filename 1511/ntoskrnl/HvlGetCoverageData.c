/*
 * XREFs of HvlGetCoverageData @ 0x1401AE12C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14067460C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400C8770 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
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
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v13, 1LL, v16, 1032LL);
    HvlpAcquireHypercallPage(v11, 2LL, v15, 72LL);
    v9[1] = v8;
    *v9 = (a1 != 0) + 1;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    v5 = (unsigned __int16)HvcallCodeVa(147LL, v14, v12) == 0;
    HvlpReleaseHypercallPage(v13);
    HvlpReleaseHypercallPage(v11);
    IoFreeMdl(v7);
  }
  return v5;
}
