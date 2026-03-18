/*
 * XREFs of ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18006BF54
 * Callers:
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x18006FA84 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::GetAdapterNoRefFromLuid(
        CDXGIEnumeration *this,
        struct _LUID a2,
        struct CDXGIAdapterLimited **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  struct CDXGIAdapterLimited *i; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0;
  LODWORD(v5) = 0;
  if ( *((_DWORD *)this + 22) )
  {
    for ( i = (struct CDXGIAdapterLimited *)**((_QWORD **)this + 8);
          ;
          i = *(struct CDXGIAdapterLimited **)(*((_QWORD *)this + 8) + 8 * v5) )
    {
      if ( a2 == *((_QWORD *)i + 42) )
      {
        *a3 = i;
        return v3;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 22) )
        break;
    }
    v8 = 159;
  }
  else
  {
    v8 = 146;
  }
  v3 = -2003304307;
  MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, v8);
  return v3;
}
