/*
 * XREFs of ?GetGlitchCount@CAudioDeviceGraph@@UEAAJPEAI@Z @ 0x1400327F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetGlitchCount(CAudioDeviceGraph *this, unsigned int *a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 33);
  if ( v2 )
  {
    v7[0] = &g_EndpointStatistics;
    v7[1] = (char *)this + 336;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v2 + 24LL))(v2, 2LL, v7);
  }
  else
  {
    v5 = -2005139437;
  }
  if ( v5 >= 0 )
    *a2 = *((_DWORD *)this + 84);
  return (unsigned int)v5;
}
