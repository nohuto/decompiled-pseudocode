/*
 * XREFs of GreHintDCWnd @ 0x1400D1780
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1400D19C4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400D1AE4 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400D3508 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreHintDCWnd(Gre::Base *a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // r14
  __m128 v24; // xmm0
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+38h] [rbp-38h]
  struct Gre::Base::SESSION_GLOBALS *v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h]
  _OWORD v32[2]; // [rsp+50h] [rbp-20h] BYREF

  v31 = 0LL;
  v30 = Gre::Base::Globals(a1);
  v28 = 0LL;
  v29 = 0;
  memset(v32, 0, sizeof(v32));
  PushThreadGuardedObject(v32, &v28, UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  v10 = 1;
  LOBYTE(v11) = 1;
  v12 = HmgShareLock(v30, a1, v11, 1LL);
  v28 = v12;
  v16 = v12;
  if ( v12 )
  {
    *(_QWORD *)(v12 + 464) = a2;
    v17 = *(_QWORD *)(v12 + 496);
    if ( !v17 || *(int *)(v17 + 112) < 0 )
    {
      if ( a2
        && (v22 = a2 >> 1,
            v27 = 0LL,
            v23 = *(_QWORD *)(W32GetSessionState(v14, v13, v15) + 96),
            RtlTestBit((PRTL_BITMAP)(v23 + 4840), v22 & 0x3FFF))
        && NSInstrumentation::CPointerHashTable::Lookup(
             *(NSInstrumentation::CPointerHashTable **)(v23 + 4832),
             (const void *)(v22 & 0x3FFF),
             &v27)
        && (_WORD)v27 != 96 )
      {
        v24 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v27));
        v24.m128_f32[0] = v24.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v16, _mm_unpacklo_ps(v24, v24).m128_u64[0], v25, v26);
      }
      else
      {
        v21 = *(_DWORD *)(v16 + 520);
        if ( (v21 & 1) != 0 )
        {
          *(_DWORD *)(v16 + 36) |= 0x10u;
          *(_QWORD *)(v16 + 524) = 0LL;
          *(_DWORD *)(v16 + 520) = v21 & 0xFFFFFFF8 | 4;
          *(_QWORD *)(v16 + 532) = 0LL;
          DC::vUpdateCachedDPIScaleValue((DC *)v16);
        }
      }
    }
    v18 = v28;
    *(_QWORD *)(v28 + 472) = a3;
    *(_QWORD *)(v18 + 480) = a4;
    *(_DWORD *)(v28 + 488) = a5;
    *(_DWORD *)(v28 + 492) = a6;
    if ( v28 )
    {
      v19 = Gre::Base::Globals((Gre::Base *)a6);
      DEC_SHARE_REF_CNT(v19, v28);
      v28 = 0LL;
    }
  }
  else
  {
    v10 = 0;
  }
  PopThreadGuardedObject(v32);
  return v10;
}
