/*
 * XREFs of ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180039150
 * Callers:
 *     <none>
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180013F6C (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CCrossThreadComposition::OnBeginComposition(LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rcx
  LARGE_INTEGER **QuadPart; // rdx
  LARGE_INTEGER v4; // r8
  LARGE_INTEGER v5; // rcx
  __int64 v6; // rax
  int v7; // edi
  _QWORD *v8; // rcx
  int v9; // eax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER v13; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER v14; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+4Ch] [rbp-24h]
  enum D3D_FEATURE_LEVEL v18; // [rsp+54h] [rbp-1Ch]
  enum D3D_FEATURE_LEVEL v19; // [rsp+58h] [rbp-18h]

  memset_0(&v14, 0, 0x28uLL);
  if ( (dword_1801F0278 & 1) != 0 )
  {
    v2 = qword_1801F0280;
  }
  else
  {
    v2 = 9000000000LL;
    dword_1801F0278 |= 1u;
    qword_1801F0280 = 9000000000LL;
  }
  if ( !this[158].QuadPart )
    this[158] = this[40];
  if ( this[40].QuadPart - this[158].QuadPart >= v2 )
  {
    CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources((CD3DDeviceManager *)&g_D3DDeviceManager);
    this[158] = this[40];
  }
  QuadPart = (LARGE_INTEGER **)this[43].QuadPart;
  if ( QuadPart )
  {
    this[40] = (*QuadPart)[32];
    this[41] = (*QuadPart)[31];
    v14 = (*QuadPart)[29];
    v4 = (*QuadPart)[165];
    PerformanceCount = v4;
    v16 = (*QuadPart)[12].HighPart + *((_DWORD *)QuadPart + 6);
    v17 = *(LONGLONG *)((char *)&QuadPart[1][4].QuadPart + 4);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v14.QuadPart = 0LL;
    v16 = 0;
    v4 = PerformanceCount;
    v17 = 0x10000003CLL;
  }
  v5 = this[61];
  v6 = v17;
  v7 = 0;
  this[59] = v4;
  *(_QWORD *)(v5.QuadPart + 4152) = v6;
  v8 = (_QWORD *)this[63].QuadPart;
  v18 = g_minSafeFeatureLevel;
  v19 = g_maxHardwareFeatureLevel;
  v9 = NtDCompositionBeginFrame(*v8, &v14, &v13);
  if ( v9 < 0 )
  {
    v7 = v9 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9 | 0x10000000, 0x84u);
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDDu);
  }
  v10 = this[43];
  v11 = v13;
  if ( v10.QuadPart )
    *(LARGE_INTEGER *)(*(_QWORD *)v10.QuadPart + 8LL) = v13;
  this[44] = v11;
  return (unsigned int)v7;
}
