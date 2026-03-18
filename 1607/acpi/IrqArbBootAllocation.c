/*
 * XREFs of IrqArbBootAllocation @ 0x1C008A3F0
 * Callers:
 *     <none>
 * Callees:
 *     IcCopyData @ 0x1C008A490 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1C008A5A0 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C008A8D0 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C008A9C0 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C008B278 (IcRemapInputs.c)
 *     ArbBootAllocation @ 0x1C008B420 (ArbBootAllocation.c)
 */

__int64 __fastcall IrqArbBootAllocation(__int64 a1, __int64 a2)
{
  int v4; // ebx

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  v4 = ProcessorCopyData(1LL);
  if ( v4 >= 0 )
  {
    v4 = IcCopyData(1LL);
    if ( v4 >= 0 )
    {
      v4 = ArbBootAllocation(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = ProcessorCopyData(0LL);
        if ( v4 >= 0 )
        {
          v4 = IcRemapInputs();
          if ( v4 >= 0 )
          {
            v4 = IcCopyData(0LL);
            if ( v4 >= 0 )
            {
              ProcessorpClearData(1LL);
              IcClearPossibleData();
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
