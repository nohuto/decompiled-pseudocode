/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00866F8
 * Callers:
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C006D9E0 (IcAddSecondaryIcInstance.c)
 *     IcAddGicInstance @ 0x1C0080650 (IcAddGicInstance.c)
 *     IrqLibpParseMadt @ 0x1C00867A0 (IrqLibpParseMadt.c)
 *     IrqPolicyConfigure @ 0x1C0086998 (IrqPolicyConfigure.c)
 *     ProcessorConfigure @ 0x1C0086A14 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = 1;
  IrqLibRealInterruptModel = a1;
  if ( (unsigned int)(a1 - 2) > 1 )
    v1 = a1;
  IrqLibInterruptModel = v1;
  if ( v1 != 1 )
    return 3221225485LL;
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( !IrqLibRealInterruptModel )
        goto LABEL_12;
      if ( (unsigned int)IrqLibRealInterruptModel <= 2 )
      {
        result = IrqLibpParseMadt();
        goto LABEL_9;
      }
      if ( IrqLibRealInterruptModel == 3 )
      {
        IrqLibpParseMadt();
        result = IcAddGicInstance(0);
      }
      else
      {
LABEL_12:
        result = 3221225473LL;
      }
LABEL_9:
      if ( (int)result >= 0 )
      {
        IcAddSecondaryIcInstance();
        HalPrivateDispatchTable[22] = (__int64 (__fastcall *)(_QWORD, __int64))IrqTransGetInterruptVector;
        HalPrivateDispatchTable[23] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibpGetVectorInput;
        HalPrivateDispatchTable[27] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibAllocateMessageTarget;
        HalPrivateDispatchTable[28] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibFreeMessageTarget;
        return 0LL;
      }
    }
  }
  return result;
}
