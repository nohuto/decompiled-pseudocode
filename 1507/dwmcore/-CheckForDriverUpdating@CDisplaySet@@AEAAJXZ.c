/*
 * XREFs of ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180054E1C
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800556B4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800563D0 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800583EC (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  struct _LUID *v11; // rdx
  int v12; // eax
  int v13; // ecx
  struct CDXGIAdapterLimited *v15; // [rsp+50h] [rbp+8h] BYREF
  struct CDXGIAdapterLimited *v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 112) = 0;
  if ( *((_DWORD *)this + 18) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 6);
      v5 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
      v15 = 0LL;
      v6 = *(struct _LUID **)(v4 + 8 * v2);
      AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v5, v6[104], &v15);
      v1 = AdapterNoRefFromLuid;
      if ( AdapterNoRefFromLuid < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AdapterNoRefFromLuid, 0x212u);
      }
      else
      {
        v8 = v15;
        v6[107].HighPart = *((_DWORD *)v15 + 74);
        v6[108].LowPart = *((_DWORD *)v8 + 75);
      }
      if ( v1 < 0 )
        break;
      v9 = *((_QWORD *)this + 6);
      v10 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
      LODWORD(v15) = 0;
      v16 = 0LL;
      v11 = *(struct _LUID **)(v9 + 8 * v2);
      *((_BYTE *)this + 112) = 0;
      v12 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v10, v11[104], &v16);
      v1 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x12Du);
      }
      else if ( v16 )
      {
        CDXGIAdapterLimited::GetKMTDriverUpdateStatus(v16, (int *)&v15);
        v13 = (int)v15;
        *((_BYTE *)this + 112) = (_DWORD)v15 != 0;
        if ( v13 )
          v1 = -2003304307;
      }
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x520u);
        return (unsigned int)v1;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 18) )
        return (unsigned int)v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x51Eu);
  }
  return (unsigned int)v1;
}
