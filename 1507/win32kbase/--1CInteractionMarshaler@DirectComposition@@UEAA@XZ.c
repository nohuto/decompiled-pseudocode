/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C001CF08
 * Callers:
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C001CF50 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00DE3D0 (--_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0018974 (-Reset@-$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z.c)
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C001D53C (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CDynamicArray<unsigned int,2003858261>::Reset((__int64 *)this + 25);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 112));
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
}
