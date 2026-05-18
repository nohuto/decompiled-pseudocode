/*
 * XREFs of ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x180005FFC
 * Callers:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@@Z @ 0x180005F34 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU-.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 *     ?GetNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEBAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@AEAI1AEAPEAV312@@Z @ 0x180006544 (-GetNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4.c)
 *     ?CreateNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x180006594 (-CreateNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager.c)
 */

__int64 __fastcall DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ProcessEvent(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD),
        unsigned int a3,
        unsigned int a4)
{
  unsigned int *v4; // r14
  _QWORD *v6; // rdi
  char v8; // bl
  __int64 Node; // rax
  ULONGLONG TickCount64; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // r8d
  __int64 result; // rax
  ULONGLONG v17; // xmm1_8
  __int64 (__fastcall ***v18)(_QWORD, _QWORD); // rdi
  __int64 (__fastcall ***v19)(_QWORD, _QWORD); // rdi
  __m128i v20; // [rsp+30h] [rbp-38h]
  __m128i v21; // [rsp+40h] [rbp-28h]
  unsigned __int64 v22; // [rsp+50h] [rbp-18h]
  ULONGLONG v23; // [rsp+A0h] [rbp+38h] BYREF
  char v24; // [rsp+A8h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+50h] BYREF

  v26 = a4;
  v25 = a3;
  v4 = (unsigned int *)(a2 + 1);
  v6 = a1 + 3;
  v8 = 0;
  Node = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::GetNode(
           (int)a1 + 24,
           (int)a2 + 8,
           (unsigned int)&v25,
           (unsigned int)&v26,
           (__int64)&v23);
  if ( !Node )
    Node = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CreateNode(
             v6,
             v4,
             v25,
             v26);
  v20 = *(__m128i *)(Node + 8);
  v21.m128i_i64[1] = v20.m128i_i64[1];
  v23 = *(_QWORD *)(Node + 24);
  v22 = v23;
  TickCount64 = GetTickCount64();
  v11 = v22;
  v12 = _mm_srli_si128(v20, 8).m128i_u64[0];
  if ( v12 > v22 )
    v11 = v12;
  v13 = TickCount64 - v11;
  if ( TickCount64 - v11 >= 0x3E8 )
  {
    v14 = _mm_cvtsi128_si32(v20);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
    v21.m128i_i64[0] = __PAIR64__(v15, v14);
    if ( v14 + v15 >= 0x78 && v13 >= 0x6DDD00 )
    {
      v15 = 0;
      v21.m128i_i64[0] = 0LL;
      v14 = 0;
      v20 = v21;
    }
    if ( v14 >= 0xA )
    {
      if ( v13 < 0xEA60 )
        goto LABEL_16;
    }
    else if ( v13 < 0xEA60 )
    {
      v8 = 1;
      v21.m128i_i64[1] = TickCount64;
      v21.m128i_i32[0] = v14 + 1;
LABEL_15:
      v20 = v21;
      goto LABEL_16;
    }
    if ( v14 + v15 > 0x78 )
      goto LABEL_16;
    v8 = 1;
    v23 = TickCount64;
    v21.m128i_i64[1] = v12 & -(__int64)(v13 < 0x927C0);
    goto LABEL_15;
  }
LABEL_16:
  result = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::GetNode(
             (_DWORD)v6,
             (_DWORD)v4,
             (unsigned int)&v25,
             (unsigned int)&v26,
             (__int64)&v24);
  if ( !result )
    result = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CreateNode(
               v6,
               v4,
               v25,
               v26);
  v17 = v23;
  *(__m128i *)(result + 8) = v20;
  *(_QWORD *)(result + 24) = v17;
  if ( v8 )
  {
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[2];
    if ( v18 )
      result = (**v18)(a1[2], a2);
    else
      result = (**a2)(a2, *a1);
  }
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[1];
  if ( v19 )
    return (**v19)(a1[1], *v4);
  return result;
}
