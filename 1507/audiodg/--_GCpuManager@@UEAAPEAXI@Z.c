/*
 * XREFs of ??_GCpuManager@@UEAAPEAXI@Z @ 0x140017040
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400173A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 * Callees:
 *     ??1CpuManager@@UEAA@XZ @ 0x140017078 (--1CpuManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CpuManager *__fastcall CpuManager::`scalar deleting destructor'(CpuManager *this, char a2)
{
  CpuManager::~CpuManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
