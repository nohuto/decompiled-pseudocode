/*
 * XREFs of LookupNtProcessorNumber @ 0x1C0004448
 * Callers:
 *     GetNtProcessorNumber @ 0x1C001A550 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C001D910 (GetLpIndex.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LookupNtProcessorNumber(_DWORD *a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // ebp
  int ProcessorIdByNtNumber; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v2, &v8);
      if ( ProcessorIdByNtNumber >= 0 && v8 == a1[12] )
        break;
      if ( ++v2 >= ActiveProcessorCount )
        goto LABEL_5;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_1C0009688, v2) )
    {
      ProcessorIdByNtNumber = -1073741811;
    }
    else
    {
      a1[14] = v2;
      KeAddProcessorAffinityEx(&unk_1C0009688, v2);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
  }
  else
  {
LABEL_5:
    if ( (Globals & 0x200000000000LL) != 0 && (v5 = 0, (v6 = HalPrivateDispatchTable[125](0xFFFFFFFFLL)) != 0) )
    {
      while ( 1 )
      {
        ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[126])(v5, &v8);
        if ( ProcessorIdByNtNumber >= 0 && v8 == a1[12] )
          break;
        if ( ++v5 >= v6 )
          return (unsigned int)-1073741275;
      }
      a1[14] = -1;
      a1[15] = v5;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)ProcessorIdByNtNumber;
}
