/*
 * XREFs of ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x140024FDC
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$1 @ 0x14001AD9C (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$1.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$3 @ 0x14001ADB4 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$3.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$8 @ 0x14001ADF0 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$8.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$9 @ 0x14001ADFC (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$9.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$11 @ 0x14001AE14 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$11.c)
 *     _CPipeInstance::InitializeRateConverterInterface_::_1_::dtor$1 @ 0x14001AE7C (_CPipeInstance--InitializeRateConverterInterface_--_1_--dtor$1.c)
 *     _CPipeInstance::InitializeRateConverterInterface_::_1_::dtor$2 @ 0x14001AE88 (_CPipeInstance--InitializeRateConverterInterface_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateAPOConnections_::_1_::dtor$1 @ 0x14001AF00 (_CPipeInstance--CreateAPOConnections_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateAPOConnections_::_1_::dtor$2 @ 0x14001AF0C (_CPipeInstance--CreateAPOConnections_--_1_--dtor$2.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$1 @ 0x14001AF9C (_CPipeInstance--FixupStreamPipe_--_1_--dtor$1.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$2 @ 0x14001AFA8 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$0 @ 0x14001B000 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$0.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$1 @ 0x14001B00C (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$1.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$2 @ 0x14001B018 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$5 @ 0x14001B03C (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$5.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$6 @ 0x14001B048 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$6.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$0 @ 0x14001B0F0 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$0.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$3 @ 0x14001B114 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$4 @ 0x14001B120 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$4.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$5 @ 0x14001B12C (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$5.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$6 @ 0x14001B138 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$5 @ 0x14001B39A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$5.c)
 *     _CProcessNode::CreateDummyProcessNode_::_1_::dtor$0 @ 0x14001B490 (_CProcessNode--CreateDummyProcessNode_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateModePipeInstance_::_1_::dtor$3 @ 0x14001B515 (_CPipeInstance--CreateModePipeInstance_--_1_--dtor$3.c)
 *     _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$1 @ 0x14001B5D3 (_CStreamProcessNode--_CStreamProcessNode_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$2 @ 0x14002E3D8 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(CAudioMediaType **a1)
{
  CAudioMediaType *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v1);
    else
      v2();
  }
}
