/*
 * XREFs of ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x180087C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?GetEndpointBufferSize@CAudioStream@@QEAAJPEAIPEAM@Z @ 0x18007CEBC (-GetEndpointBufferSize@CAudioStream@@QEAAJPEAIPEAM@Z.c)
 */

__int64 __fastcall CVADServer::GetEndpointBufferSize(CVADServer *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  CAudioStream *v7; // rcx
  int EndpointBufferSize; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)this + 50) && (v7 = (CAudioStream *)*((_QWORD *)this + 26)) != 0LL )
    {
      EndpointBufferSize = CAudioStream::GetEndpointBufferSize(v7, a2, a3);
      if ( EndpointBufferSize >= 0 )
        goto LABEL_13;
    }
    else
    {
      EndpointBufferSize = -2004287487;
    }
  }
  else
  {
    EndpointBufferSize = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x39u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      EndpointBufferSize);
  }
LABEL_13:
  LeaveCriticalSection(v3);
  if ( EndpointBufferSize >= 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      *a2);
  }
  return (unsigned int)EndpointBufferSize;
}
