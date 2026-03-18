/*
 * XREFs of ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x18006B4B0
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18006A7AC (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x18006B048 (-GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x18006B168 (-GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x18006B288 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Initialize(CDXGIAdapterLimited *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int KMTDriverVersion; // eax
  int KMTAdapterType; // eax
  int v6; // eax
  int v7; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         (char *)this + 40);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x76u);
  }
  else
  {
    KMTDriverVersion = CDXGIAdapterLimited::GetKMTDriverVersion(this);
    v3 = KMTDriverVersion;
    if ( KMTDriverVersion < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTDriverVersion, 0x77u);
    }
    else
    {
      KMTAdapterType = CDXGIAdapterLimited::GetKMTAdapterType(this);
      v3 = KMTAdapterType;
      if ( KMTAdapterType < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTAdapterType, 0x78u);
      }
      else
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
               *((_QWORD *)this + 3),
               &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
               (char *)this + 32);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7Au);
        }
        else
        {
          v7 = CDXGIAdapterLimited::EnumerateDWMOutputs(this);
          v3 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x81u);
        }
      }
    }
  }
  return v3;
}
