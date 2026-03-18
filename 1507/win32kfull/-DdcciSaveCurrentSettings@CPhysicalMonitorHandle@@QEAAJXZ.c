/*
 * XREFs of ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ @ 0x1C025C0FC
 * Callers:
 *     NtGdiDDCCISaveCurrentSettings @ 0x1C025C950 (NtGdiDDCCISaveCurrentSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025C17C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSaveCurrentSettings(struct CMutex **this)
{
  unsigned int v3; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)GreIsInLowBox() )
    return 3221225506LL;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v5, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v3 = -1071774323;
  }
  else
  {
    v4 = -1307803311;
    v3 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
           (CPhysicalMonitorHandle *)this,
           -2000000LL,
           (unsigned __int8 *)&v4,
           4u);
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v5);
  return v3;
}
