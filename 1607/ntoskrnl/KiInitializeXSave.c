/*
 * XREFs of KiInitializeXSave @ 0x1403D6360
 * Callers:
 *     KiSystemStartup @ 0x1403C8010 (KiSystemStartup.c)
 * Callees:
 *     KiGetXSaveSupportedFeatures @ 0x140146424 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x1403D6578 (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiIntersectFeaturesWithPolicy @ 0x1403D65F0 (KiIntersectFeaturesWithPolicy.c)
 *     KiParseLoadOptions @ 0x1403D6814 (KiParseLoadOptions.c)
 */

ULONG_PTR __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  ULONG_PTR result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rcx
  _OWORD *v10; // r8
  __int128 v11; // xmm1
  ULONG_PTR BugCheckParameter1[102]; // [rsp+30h] [rbp-D0h] BYREF

  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  KiGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (result = BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0],
          (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0])
      || (BugCheckParameter1[2] & 0x100000000LL) == 0
      && (result = MEMORY[0xFFFFF780000003EC], (MEMORY[0xFFFFF780000003EC] & 1) != 0)
      || (BugCheckParameter1[2] & 0x200000000LL) == 0
      && (result = MEMORY[0xFFFFF780000003EC], (MEMORY[0xFFFFF780000003EC] & 2) != 0) )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(_QWORD *)(v5 + 2480);
    v7 = *(_DWORD *)(v5 + 2488);
    if ( BugCheckParameter1[0] )
    {
      BugCheckParameter1[67] &= v6;
      BugCheckParameter1[0] &= v6;
      v8 = HIDWORD(BugCheckParameter1[2]);
      if ( (v7 & 0x10) == 0 )
      {
        v8 = HIDWORD(BugCheckParameter1[2]) & 0xFFFFFFFD;
        HIDWORD(BugCheckParameter1[2]) &= ~2u;
      }
      if ( (v7 & 8) == 0 )
        HIDWORD(BugCheckParameter1[2]) = v8 & 0xFFFFFFFC;
    }
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    if ( KeTestRemovedFeatureMask )
    {
      BugCheckParameter1[0] &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[67] &= ~KeTestRemovedFeatureMask;
    }
    if ( KeTestDisableXSave )
    {
      BugCheckParameter1[0] = 0LL;
      BugCheckParameter1[67] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFFC;
    }
    KiUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v9 = 6LL;
    result = (ULONG_PTR)BugCheckParameter1;
    v10 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v10 = *(_OWORD *)result;
      v10[1] = *(_OWORD *)(result + 16);
      v10[2] = *(_OWORD *)(result + 32);
      v10[3] = *(_OWORD *)(result + 48);
      v10[4] = *(_OWORD *)(result + 64);
      v10[5] = *(_OWORD *)(result + 80);
      v10[6] = *(_OWORD *)(result + 96);
      v10 += 8;
      v11 = *(_OWORD *)(result + 112);
      result += 128LL;
      *(v10 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *v10 = *(_OWORD *)result;
    v10[1] = *(_OWORD *)(result + 16);
    v10[2] = *(_OWORD *)(result + 32);
    if ( BugCheckParameter1[0] )
    {
      result = MEMORY[0xFFFFF78000000600];
      KeXStateLength = MEMORY[0xFFFFF78000000600];
    }
  }
  return result;
}
