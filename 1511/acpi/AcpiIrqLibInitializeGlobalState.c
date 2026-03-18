/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C0086DD4
 * Callers:
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C006588C (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C00658A4 (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C006DEBC (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C0086F00 (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C00591B8 = (__int64)IrqArbTestAllocation;
  qword_1C00591C0 = (__int64)IrqArbRetestAllocation;
  qword_1C00591C8 = (__int64)IrqArbCommitAllocation;
  qword_1C00591D8 = (__int64)IrqArbBootAllocation;
  qword_1C00591E8 = (__int64)IrqArbQueryConflict;
  qword_1C0059200 = (__int64)IrqArbPreprocessEntry;
  qword_1C0059210 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C0059218 = (__int64)IrqArbFindSuitableRange;
  qword_1C0059230 = (__int64)IrqArbOverrideConflict;
  qword_1C0059220 = (__int64)IrqArbAddAllocation;
  qword_1C0059228 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0059198 = (__int64)IrqArbUnpackRequirement;
  qword_1C00591A0 = (__int64)IrqArbPackResource;
  qword_1C00591A8 = (__int64)IrqArbUnpackResource;
  qword_1C00591B0 = (__int64)IrqArbScoreRequirement;
  qword_1C0059208 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ", (__int64)L"Root");
  if ( (int)result >= 0 )
  {
    result = LinkNodeInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = IcInitGlobalState();
      if ( (int)result >= 0 )
        return ProcessorInitGlobalState();
    }
  }
  return result;
}
