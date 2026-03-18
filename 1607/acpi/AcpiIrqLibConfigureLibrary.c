/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00A814C
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C008D7E0 (IcAddSecondaryIcInstance.c)
 *     IcAddGicInstance @ 0x1C00A2774 (IcAddGicInstance.c)
 *     IrqPolicyConfigure @ 0x1C00A7908 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00A81F4 (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00A824C (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00A8444 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1)
{
  int v1; // edx
  __int64 result; // rax

  IrqLibRealInterruptModel = a1;
  v1 = 1;
  if ( (unsigned int)(a1 - 2) > 2 )
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
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt();
            result = IcAddGicInstance(0);
            goto LABEL_8;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt();
LABEL_8:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
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
  }
  return result;
}
