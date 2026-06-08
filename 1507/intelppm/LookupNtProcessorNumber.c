/*
 * XREFs of LookupNtProcessorNumber @ 0x1C0001E40
 * Callers:
 *     GetNtProcessorNumber @ 0x1C00165E0 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C001BDC0 (GetLpIndex.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LookupNtProcessorNumber(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // esi
  int ProcessorIdByNtNumber; // edi
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v2, &v6);
      if ( ProcessorIdByNtNumber >= 0 && v6 == *(_DWORD *)(a1 + 48) )
        break;
      if ( ++v2 >= ActiveProcessorCount )
        return (unsigned int)-1073741275;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000D9C8,
      0LL);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_1C000DC58, v2) )
    {
      ProcessorIdByNtNumber = -1073741811;
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v2;
      KeAddProcessorAffinityEx(&unk_1C000DC58, v2);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000D9C8);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ProcessorIdByNtNumber;
}
