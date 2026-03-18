/*
 * XREFs of ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C025BFB4
 * Callers:
 *     NtGdiDDCCISetVCPFeature @ 0x1C025C6D0 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BE9C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSetVCPFeature(struct CMutex **this, char a2, __int16 a3)
{
  unsigned int v7; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF
  char v10; // [rsp+5Ch] [rbp+24h]
  char v11; // [rsp+5Dh] [rbp+25h]
  char v12; // [rsp+5Eh] [rbp+26h]

  if ( (unsigned int)GreIsInLowBox() )
    return 3221225506LL;
  CAutoMutex::CAutoMutex((CAutoMutex *)v8, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v7 = -1071774323;
  }
  else
  {
    v9 = 230481;
    v12 = 0;
    v10 = HIBYTE(a3);
    HIBYTE(v9) = a2;
    v11 = a3;
    v7 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
           (CPhysicalMonitorHandle *)this,
           -500000LL,
           (unsigned __int8 *)&v9,
           7);
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)v8);
  return v7;
}
