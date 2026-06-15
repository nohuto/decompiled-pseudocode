/*
 * XREFs of ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14002E824
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14002E990 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14002EE30 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::`scalar deleting destructor'(
        CVirtualProtectedOutput *this)
{
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  operator delete(this);
  return this;
}
