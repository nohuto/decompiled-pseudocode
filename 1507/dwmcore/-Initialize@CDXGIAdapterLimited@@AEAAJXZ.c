/*
 * XREFs of ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800960A8
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180096168 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x180095C40 (-GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x180095D60 (-GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x180095E80 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
