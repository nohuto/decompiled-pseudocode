/*
 * XREFs of ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180035E04
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800365F8 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800B2E44 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 */

__int64 __fastcall CDisplaySet::CheckForDriverUpdating(CDisplaySet *this)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v4; // rax
  CDXGIEnumeration *v5; // rcx
  struct _LUID *v6; // rbp
  int AdapterNoRefFromLuid; // eax
  struct CDXGIAdapterLimited *v8; // rcx
  __int64 v9; // rax
  CDXGIEnumeration *v10; // rcx
  int v11; // ebp
  struct _LUID *v12; // rdx
  int v13; // eax
  struct CDXGIAdapterLimited *v15; // [rsp+50h] [rbp+8h] BYREF
  CDXGIAdapterLimited *v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 112) = 0;
  while ( (unsigned int)v2 < *((_DWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v15 = 0LL;
    v6 = *(struct _LUID **)(v4 + 8 * v2);
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v5, v6[29], &v15);
    v1 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, AdapterNoRefFromLuid, 0x178u);
    }
    else
    {
      v8 = v15;
      v6[32].LowPart = *((_DWORD *)v15 + 74);
      v6[32].HighPart = *((_DWORD *)v8 + 75);
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x52Cu);
      return (unsigned int)v1;
    }
    v9 = *((_QWORD *)this + 6);
    v10 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v11 = 0;
    v16 = 0LL;
    LODWORD(v15) = 0;
    v12 = *(struct _LUID **)(v9 + 8 * v2);
    *((_BYTE *)this + 112) = 0;
    v13 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v10, v12[29], &v16);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x102u);
    }
    else
    {
      if ( !v16 )
        goto LABEL_10;
      CDXGIAdapterLimited::GetKMTDriverUpdateStatus(v16, (int *)&v15);
      v11 = (int)v15;
      *((_BYTE *)this + 112) = (_DWORD)v15 != 0;
    }
    if ( v11 )
      v1 = -2003304307;
LABEL_10:
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x52Eu);
      return (unsigned int)v1;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  return (unsigned int)v1;
}
