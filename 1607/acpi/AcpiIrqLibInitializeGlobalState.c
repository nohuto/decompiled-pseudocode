/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00A9670
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C0080488 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C00804A0 (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C008E278 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00A979C (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C00735D8 = (__int64)IrqArbTestAllocation;
  qword_1C00735E0 = (__int64)IrqArbRetestAllocation;
  qword_1C00735E8 = (__int64)IrqArbCommitAllocation;
  qword_1C00735F8 = (__int64)IrqArbBootAllocation;
  qword_1C0073608 = (__int64)IrqArbQueryConflict;
  qword_1C0073620 = (__int64)IrqArbPreprocessEntry;
  qword_1C0073630 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C0073638 = (__int64)IrqArbFindSuitableRange;
  qword_1C0073650 = (__int64)IrqArbOverrideConflict;
  qword_1C0073640 = (__int64)IrqArbAddAllocation;
  qword_1C0073648 = (__int64)IrqArbBacktrackAllocation;
  qword_1C00735B8 = (__int64)IrqArbUnpackRequirement;
  qword_1C00735C0 = (__int64)IrqArbPackResource;
  qword_1C00735C8 = (__int64)IrqArbUnpackResource;
  qword_1C00735D0 = (__int64)IrqArbScoreRequirement;
  qword_1C0073628 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ", L"Root");
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
