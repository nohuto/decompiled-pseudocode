/*
 * XREFs of ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C025B4F0
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C025B470 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B958 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C025C384 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesString(
        CPhysicalMonitorHandle *this,
        char *a2,
        unsigned int a3)
{
  SIZE_T v3; // rbx
  int CapabilitiesStringInternal; // edi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, *((struct CMutex **)this + 1));
  CapabilitiesStringInternal = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CPhysicalMonitorHandle *))(*(_QWORD *)this + 16LL))(this) )
  {
    CapabilitiesStringInternal = -1071774323;
  }
  else if ( *((_QWORD *)this + 9)
         || (CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this),
             CapabilitiesStringInternal >= 0) )
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
    {
      ProbeForWrite(a2, v3, 1u);
      RtlStringCbCopyA(a2, v3, *((const char **)this + 9));
    }
    else
    {
      CapabilitiesStringInternal = -1073741789;
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v8);
  return (unsigned int)CapabilitiesStringInternal;
}
