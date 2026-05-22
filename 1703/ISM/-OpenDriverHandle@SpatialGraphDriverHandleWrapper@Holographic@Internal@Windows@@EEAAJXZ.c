/*
 * XREFs of ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008F680 (-StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z.c)
 *     ?Start@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x180090C84 (-Start@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800930B0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  HolographicDriverClientTrace *v10; // rcx
  __int64 *v11; // rax
  __int64 i; // rax
  DWORD v13; // [rsp+40h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  __int128 InBuffer; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 104), &lpCriticalSection);
    v5 = (_QWORD *)*((_QWORD *)this + 18);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
LABEL_19:
      v8 = 0;
    }
    else
    {
      while ( 1 )
      {
        v16 = 1;
        v13 = 0;
        InBuffer = *((_OWORD *)v6 + 2);
        v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
               this,
               0x5B4404u,
               &InBuffer,
               0x14u,
               0LL,
               0,
               &v13);
        v8 = v7;
        if ( v7 < 0 )
          break;
        if ( v13 )
        {
          v8 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x276,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)0x8000FFFFLL);
          goto LABEL_20;
        }
        v9 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v9 && *v9 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::StartTracking_(
            v10,
            (const struct _GUID *)((char *)this + 12),
            (const struct SPATIAL_NODE_ID *)(v6 + 4));
        }
        Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Start(
          (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)v6[7],
          (const struct _GUID *)((char *)this + 12),
          (const struct SPATIAL_NODE_ID *)(v6 + 4));
        if ( !*((_BYTE *)v6 + 25) )
        {
          v11 = (__int64 *)v6[2];
          if ( *((_BYTE *)v11 + 25) )
          {
            for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
              v6 = (_QWORD *)i;
            v6 = (_QWORD *)i;
          }
          else
          {
            do
            {
              v6 = v11;
              v11 = (__int64 *)*v11;
            }
            while ( !*((_BYTE *)v11 + 25) );
          }
        }
        if ( v6 == *((_QWORD **)this + 18) )
          goto LABEL_19;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x274,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v7);
    }
LABEL_20:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x252,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
