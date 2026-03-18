/*
 * XREFs of ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x1C025BDC8
 * Callers:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C025BD54 (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025C0A4 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025C17C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetTimingReport(struct CMutex **this, struct _MC_TIMING_REPORT *a2)
{
  int v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+38h] [rbp-18h]

  CAutoMutex::CAutoMutex((CAutoMutex *)v10, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v4 = -1071774323;
  }
  else
  {
    *(_DWORD *)v9 = 491857;
    v4 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice((CPhysicalMonitorHandle *)this, -500000LL, v9, 4u);
    if ( v4 >= 0 )
    {
      v11 = 0LL;
      v12 = 0;
      v4 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
             (CPhysicalMonitorHandle *)this,
             -500000LL,
             &v11,
             9u);
      if ( v4 >= 0 )
      {
        if ( (v11 & 0x3C000000) != 0 )
        {
          v4 = -1071774330;
        }
        else
        {
          v5 = BYTE4(v11) << 8;
          *((_BYTE *)a2 + 8) = BYTE3(v11);
          v6 = BYTE5(v11) | v5;
          v7 = BYTE6(v11) << 8;
          *(_DWORD *)a2 = v6;
          *((_DWORD *)a2 + 1) = HIBYTE(v11) | v7;
        }
      }
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)v10);
  return (unsigned int)v4;
}
