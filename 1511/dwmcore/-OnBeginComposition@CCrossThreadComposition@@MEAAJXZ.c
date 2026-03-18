/*
 * XREFs of ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180082EA0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x1800728B4 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CCrossThreadComposition::OnBeginComposition(LARGE_INTEGER *this)
{
  int v1; // edi
  unsigned __int64 v3; // rcx
  LARGE_INTEGER **QuadPart; // rdx
  LARGE_INTEGER **v5; // rdx
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  int v10; // eax
  LARGE_INTEGER v11; // rcx
  __int64 result; // rax
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+4Ch] [rbp-2Ch]
  enum D3D_FEATURE_LEVEL v19; // [rsp+54h] [rbp-24h]
  enum D3D_FEATURE_LEVEL v20; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v15.QuadPart = 0LL;
  memset_0(&PerformanceCount, 0, 0x20uLL);
  if ( (dword_1801A3EF4 & 1) != 0 )
  {
    v3 = qword_1801A3EF8;
  }
  else
  {
    v3 = 9000000000LL;
    dword_1801A3EF4 |= 1u;
    qword_1801A3EF8 = 9000000000LL;
  }
  if ( !this[145].QuadPart )
    this[145] = this[40];
  if ( this[40].QuadPart - this[145].QuadPart >= v3 )
  {
    CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources((CD3DDeviceManager *)&g_D3DDeviceManager);
    this[145] = this[40];
  }
  QuadPart = (LARGE_INTEGER **)this[43].QuadPart;
  if ( QuadPart )
  {
    this[40] = (*QuadPart)[32];
    this[41] = (*QuadPart)[31];
  }
  if ( g_pMediaControl && this[38].LowPart )
  {
    this[149].QuadPart = 0LL;
    QueryPerformanceCounter(this + 149);
  }
  v5 = (LARGE_INTEGER **)this[43].QuadPart;
  if ( v5 )
  {
    v15 = (*v5)[29];
    v6 = (*v5)[168];
    PerformanceCount = v6;
    v17 = (*v5)[12].HighPart + *((_DWORD *)v5 + 6);
    v18 = *(LONGLONG *)((char *)&v5[1][4].QuadPart + 4);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v6 = PerformanceCount;
    v15.QuadPart = 0LL;
    v17 = 0;
    v18 = 0x10000003CLL;
  }
  v7 = this[61];
  v8 = v18;
  this[59] = v6;
  *(_QWORD *)(v7.QuadPart + 4152) = v8;
  v9 = (_QWORD *)this[62].QuadPart;
  v19 = g_minSafeFeatureLevel;
  v20 = g_maxHardwareFeatureLevel;
  v10 = NtDCompositionBeginFrame(*v9, &v15, &v14);
  if ( v10 < 0 )
  {
    v1 = v10 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 | 0x10000000, 0x84u);
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xC8u);
  }
  v11 = this[43];
  result = (unsigned int)v1;
  v13 = v14;
  if ( v11.QuadPart )
    *(LARGE_INTEGER *)(*(_QWORD *)v11.QuadPart + 8LL) = v14;
  this[44] = v13;
  return result;
}
