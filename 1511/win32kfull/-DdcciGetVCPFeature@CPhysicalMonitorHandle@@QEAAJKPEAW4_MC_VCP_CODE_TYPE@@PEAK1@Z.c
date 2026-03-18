/*
 * XREFs of ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C025BC80
 * Callers:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C025BBF0 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BDC4 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BE9C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetVCPFeature(
        struct CMutex **this,
        int a2,
        enum _MC_VCP_CODE_TYPE *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v9; // edi
  int v10; // ebx
  int v11; // ecx
  unsigned __int16 v12; // ax
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+24h] [rbp-34h]
  _BYTE v16[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int16 v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+3Ah] [rbp-1Eh]

  CAutoMutex::CAutoMutex((CAutoMutex *)v16, this[1]);
  v9 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v10 = -1071774323;
  }
  else
  {
    *(_DWORD *)v14 = 98897;
    v15 = 0;
    v14[3] = a2;
    v10 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice((CPhysicalMonitorHandle *)this, -500000LL, v14, 5u);
    if ( v10 >= 0 )
    {
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      v10 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice((CPhysicalMonitorHandle *)this, 0LL, &v17, 0xBu);
      if ( v10 >= 0 )
      {
        if ( BYTE3(v17) == 1 )
        {
          v10 = -1071774332;
        }
        else if ( BYTE3(v17) <= 1u && BYTE4(v17) == a2 && BYTE5(v17) <= 1u )
        {
          LOBYTE(v9) = BYTE5(v17) == 0;
          v11 = HIBYTE(v18) | (unsigned __int16)((unsigned __int8)v18 << 8);
          *(_DWORD *)a3 = v9;
          v12 = BYTE6(v17) << 8;
          *a4 = v11;
          *a5 = HIBYTE(v17) | v12;
        }
        else
        {
          v10 = -1071774331;
        }
      }
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)v16);
  return (unsigned int)v10;
}
