/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x180019460
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002FB10 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18004B9D0 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$2 @ 0x18004BAC8 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$2.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x18004BAD4 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18004BC9C (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180066318 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18006A0E0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = *((_QWORD *)this + 14);
  *(_QWORD *)this = &ATL::CSid::`vftable';
  if ( _InterlockedDecrement((volatile signed __int32 *)(v1 - 8)) <= 0 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 - 24) + 8LL))(*(_QWORD *)(v1 - 24), v1 - 24);
  v3 = *((_QWORD *)this + 13);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v3 - 8)) <= 0 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 - 24) + 8LL))(*(_QWORD *)(v3 - 24), v3 - 24);
  v4 = *((_QWORD *)this + 12);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v4 - 8)) <= 0 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 - 24) + 8LL))(*(_QWORD *)(v4 - 24), v4 - 24);
  v5 = *((_QWORD *)this + 11);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v5 - 8)) <= 0 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 - 24) + 8LL))(*(_QWORD *)(v5 - 24), v5 - 24);
}
