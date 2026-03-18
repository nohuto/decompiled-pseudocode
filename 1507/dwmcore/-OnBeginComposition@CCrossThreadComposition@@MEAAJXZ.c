/*
 * XREFs of ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180046440
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180056120 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CCrossThreadComposition::OnBeginComposition(LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rcx
  LARGE_INTEGER **QuadPart; // rdx
  LARGE_INTEGER **v4; // rdx
  LARGE_INTEGER v5; // r8
  LARGE_INTEGER v6; // rcx
  __int64 v7; // rax
  int v8; // edi
  _QWORD *v9; // rcx
  int v10; // eax
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v14; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+4Ch] [rbp-24h]
  enum D3D_FEATURE_LEVEL v19; // [rsp+54h] [rbp-1Ch]
  enum D3D_FEATURE_LEVEL v20; // [rsp+58h] [rbp-18h]

  v15.QuadPart = 0LL;
  memset_0(&PerformanceCount, 0, 0x20uLL);
  if ( (dword_180193140 & 1) != 0 )
  {
    v2 = qword_180193148;
  }
  else
  {
    v2 = 9000000000LL;
    dword_180193140 |= 1u;
    qword_180193148 = 9000000000LL;
  }
  if ( !this[148].QuadPart )
    this[148] = this[40];
  if ( this[40].QuadPart - this[148].QuadPart >= v2 )
  {
    CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources((CD3DDeviceManager *)&g_D3DDeviceManager);
    this[148] = this[40];
  }
  QuadPart = (LARGE_INTEGER **)this[43].QuadPart;
  if ( QuadPart )
  {
    this[40] = (*QuadPart)[32];
    this[41] = (*QuadPart)[31];
  }
  if ( g_pMediaControl && this[38].LowPart )
  {
    this[152].QuadPart = 0LL;
    QueryPerformanceCounter(this + 152);
  }
  v4 = (LARGE_INTEGER **)this[43].QuadPart;
  if ( v4 )
  {
    v15 = (*v4)[29];
    v5 = (*v4)[168];
    PerformanceCount = v5;
    v17 = (*v4)[12].HighPart + *((_DWORD *)v4 + 6);
    v18 = *(LONGLONG *)((char *)&v4[1][4].QuadPart + 4);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v15.QuadPart = 0LL;
    v17 = 0;
    v5 = PerformanceCount;
    v18 = 0x10000003CLL;
  }
  v6 = this[61];
  v7 = v18;
  v8 = 0;
  this[59] = v5;
  *(_QWORD *)(v6.QuadPart + 4152) = v7;
  v9 = (_QWORD *)this[62].QuadPart;
  v19 = g_minSafeFeatureLevel;
  v20 = g_maxHardwareFeatureLevel;
  v10 = NtDCompositionBeginFrame(*v9, &v15, &v14);
  if ( v10 < 0 )
  {
    v8 = v10 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 | 0x10000000, 0x84u);
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC8u);
  }
  v11 = this[43];
  v12 = v14;
  if ( v11.QuadPart )
    *(LARGE_INTEGER *)(*(_QWORD *)v11.QuadPart + 8LL) = v14;
  this[44] = v12;
  return (unsigned int)v8;
}
