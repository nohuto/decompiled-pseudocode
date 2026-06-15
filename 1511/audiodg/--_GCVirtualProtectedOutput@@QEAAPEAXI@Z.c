/*
 * XREFs of ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x140016B64
 * Callers:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140016E60 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::`scalar deleting destructor'(
        CVirtualProtectedOutput *this)
{
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  operator delete(this);
  return this;
}
