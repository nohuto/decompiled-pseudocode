/*
 * XREFs of ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800692FC
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x1800B6494 (-RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180139318 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??A?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@QEAAAEAUThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@AEBW4DwmEventType@4@@Z @ 0x180069690 (--A-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmEventTy.c)
 */

__int64 __fastcall DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD))
{
  unsigned int *v2; // r15
  char v5; // bl
  __int64 v6; // rax
  ULONGLONG TickCount64; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // r8
  unsigned int v11; // ecx
  int v12; // edx
  __int64 result; // rax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD); // rdi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD); // rdi
  __m128i v16; // [rsp+20h] [rbp-30h]
  __m128i v17; // [rsp+30h] [rbp-20h]
  ULONGLONG v18; // [rsp+70h] [rbp+20h]

  v2 = (unsigned int *)(a2 + 1);
  v5 = 0;
  v6 = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::operator[](
         a1 + 3,
         a2 + 1);
  v16 = *(__m128i *)v6;
  v17 = *(__m128i *)v6;
  v18 = *(_QWORD *)(v6 + 16);
  TickCount64 = GetTickCount64();
  v8 = v18;
  v9 = _mm_srli_si128(v16, 8).m128i_u64[0];
  if ( v9 > v18 )
    v8 = v9;
  v10 = TickCount64 - v8;
  if ( TickCount64 - v8 >= 0x3E8 )
  {
    v11 = _mm_cvtsi128_si32(v16);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
    v17.m128i_i64[0] = __PAIR64__(v12, v11);
    if ( v11 + v12 >= 0x78 && v10 >= 0x6DDD00 )
    {
      v12 = 0;
      v17.m128i_i64[0] = 0LL;
      v11 = 0;
      v16 = v17;
    }
    if ( v11 < 0xA )
    {
      if ( v10 < 0xEA60 )
      {
        v5 = 1;
        v17.m128i_i64[1] = TickCount64;
        v17.m128i_i32[0] = v11 + 1;
LABEL_9:
        v16 = v17;
        goto LABEL_10;
      }
LABEL_7:
      if ( v11 + v12 > 0x78 )
        goto LABEL_10;
      v5 = 1;
      v18 = TickCount64;
      v17.m128i_i64[1] = v9 & -(__int64)(v10 < 0x927C0);
      goto LABEL_9;
    }
    if ( v10 >= 0xEA60 )
      goto LABEL_7;
  }
LABEL_10:
  result = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::operator[](
             a1 + 3,
             v2);
  *(__m128i *)result = v16;
  *(_QWORD *)(result + 16) = v18;
  if ( v5 )
  {
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[2];
    if ( v14 )
      result = (**v14)(a1[2], a2);
    else
      result = (**a2)(a2, *a1);
  }
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[1];
  if ( v15 )
    return (**v15)(a1[1], *v2);
  return result;
}
