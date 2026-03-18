/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x18004A520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180047A24 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B5DF4 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+34h] [rbp-14h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  v14 = 0;
  v16 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v8 = CChannel::MilTypeFromDwmType(a3, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 774;
    goto LABEL_8;
  }
  v11 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), a2, v17, &v15, &v14);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x30Du);
    goto LABEL_4;
  }
  v8 = CHandleTable::DuplicateHandleOnTarget(v10, v15, v14, v17, (CChannel *)a1, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 788;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v13);
  }
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v9;
}
