/*
 * XREFs of RegisterVmIdleStates @ 0x1C001AF74
 * Callers:
 *     RegisterHvIdleStates @ 0x1C001A1F0 (RegisterHvIdleStates.c)
 *     RegisterGuestIdleStates @ 0x1C001AF60 (RegisterGuestIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     RegisterIdleComplete @ 0x1C0016218 (RegisterIdleComplete.c)
 */

__int64 __fastcall RegisterVmIdleStates(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  _DWORD *v5; // rdx
  NTSTATUS ProcessorNumberFromIndex; // ebx
  _QWORD v8[18]; // [rsp+20h] [rbp-A8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0009398,
    0LL);
  v2 = *(unsigned int **)(a1 + 1088);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = 0;
    v5 = v2 + 1;
    do
    {
      if ( (*v5 & 0x200) == 0 )
      {
        ProcessorNumberFromIndex = -1073741637;
        goto LABEL_13;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < v3 );
    memset(v8, 0, sizeof(v8));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), (PPROCESSOR_NUMBER)v8 + 1);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      LODWORD(v8[0]) = 42;
      v8[1] = a1 + 1056;
      BYTE2(v8[2]) = 1;
      HIDWORD(v8[13]) = 1;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD *))qword_1C0009590)(v8);
      if ( ProcessorNumberFromIndex >= 0 )
      {
        if ( !*(_BYTE *)(a1 + 656) )
        {
          *(_BYTE *)(a1 + 656) = 1;
          RegisterIdleComplete(a1);
        }
        ProcessorNumberFromIndex = 0;
      }
    }
  }
  else
  {
    ProcessorNumberFromIndex = -1073741823;
  }
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0009398);
  return (unsigned int)ProcessorNumberFromIndex;
}
