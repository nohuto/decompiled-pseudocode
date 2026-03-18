/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B5A4
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B958 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     operator_delete @ 0x1C00EE304 (operator_delete.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BDC4 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C025BE9C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C025C384 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(void **this)
{
  unsigned int v1; // r13d
  char *v2; // r14
  unsigned __int64 v3; // rsi
  unsigned int v5; // edi
  int v6; // ebx
  unsigned __int8 v7; // bl
  unsigned int v8; // r12d
  char *PoolWithTag; // rax
  char *v10; // r15
  unsigned int v11; // edi
  char *v12; // rax
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v15; // [rsp+24h] [rbp-64h]
  _BYTE v16[40]; // [rsp+28h] [rbp-60h] BYREF

  v1 = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v5 = 0;
  while ( 1 )
  {
    *(_DWORD *)v14 = 15958865;
    v15 = (unsigned __int8)v1;
    v14[3] = BYTE1(v1);
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice((CPhysicalMonitorHandle *)this, -500000LL, v14, 6u);
    if ( v6 < 0 )
      break;
    memset(v16, 0, 0x26uLL);
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
           (CPhysicalMonitorHandle *)this,
           -500000LL,
           v16,
           0x26u);
    if ( v6 < 0 )
      break;
    if ( (v16[1] & 0x7Fu) < 3 || (v7 = (v16[1] & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (v16[1] & 0x7F) == 3 )
      goto LABEL_17;
    v8 = v5 + v7;
    if ( v8 < v5 )
    {
LABEL_19:
      v6 = -1073741675;
      break;
    }
    if ( (unsigned int)v3 <= v8 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_19;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x63326947u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_23;
      if ( v2 )
        memmove(PoolWithTag, v2, v5);
      operator_delete(v2);
      v2 = v10;
    }
    memmove(&v2[v1], &v16[5], v7);
    v5 += v7;
    v1 += v7;
    if ( v1 > 0xFFE0 )
    {
LABEL_17:
      if ( !v5 )
      {
        v6 = -1071774329;
        break;
      }
      if ( (unsigned int)v3 <= v5 )
      {
        v6 = -1071774328;
        break;
      }
      v11 = v5 + 1;
      v2[v11 - 1] = 0;
      v12 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x63326947u);
      this[9] = v12;
      if ( !v12 )
      {
LABEL_23:
        v6 = -1073741801;
        break;
      }
      v6 = RtlStringCbCopyA(v12, v11, v2);
      if ( v6 >= 0 )
        *((_DWORD *)this + 20) = v11;
      break;
    }
  }
  operator_delete(v2);
  if ( v6 < 0 )
  {
    operator_delete(this[9]);
    this[9] = 0LL;
    *((_DWORD *)this + 20) = 0;
  }
  return (unsigned int)v6;
}
