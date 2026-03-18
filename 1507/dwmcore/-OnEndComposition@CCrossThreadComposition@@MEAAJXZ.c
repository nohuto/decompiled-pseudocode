/*
 * XREFs of ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180045720
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180047050 (-IsAnimate@CAnimation@@UEAA_NPEA_N@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800681C4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qqx @ 0x1800E3E64 (Template_qqx.c)
 */

__int64 __fastcall CCrossThreadComposition::OnEndComposition(LARGE_INTEGER *this)
{
  char v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // ecx
  LARGE_INTEGER v7; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  DWORD LowPart; // eax
  LARGE_INTEGER v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  LARGE_INTEGER v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // dl
  DWORD v19; // r15d
  DWORD v20; // ebx
  bool (__fastcall *v21)(CAnimation *__hidden, bool *); // r14
  LARGE_INTEGER v22; // rdi
  int v23; // eax
  signed int v24; // edi
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  DWORD v27; // eax
  signed int LastError; // eax
  __int64 v29; // rbx
  float v30; // xmm0_4
  __int64 QuadPart; // rax
  float v32; // xmm1_4
  unsigned int v33; // eax
  LARGE_INTEGER v34; // rbx
  LARGE_INTEGER v35; // r9
  LONGLONG v36; // r8
  __int64 v37; // rcx
  __int64 result; // rax
  bool v39; // [rsp+30h] [rbp-D0h] BYREF
  char v40[7]; // [rsp+31h] [rbp-CFh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+54h] [rbp-ACh]
  __int64 v45; // [rsp+5Ch] [rbp-A4h]
  __int64 v46; // [rsp+64h] [rbp-9Ch]
  int SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+74h] [rbp-8Ch]
  __int64 v49; // [rsp+7Ch] [rbp-84h]
  __int64 v50; // [rsp+84h] [rbp-7Ch]
  __int64 v51; // [rsp+8Ch] [rbp-74h]
  __int64 v52; // [rsp+94h] [rbp-6Ch]
  __int64 v53; // [rsp+9Ch] [rbp-64h]
  __int64 v54; // [rsp+A4h] [rbp-5Ch]
  int v55; // [rsp+ACh] [rbp-54h]
  char ProcessInformation[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h]

  v1 = 0;
  v3 = 0;
  if ( !this[58].LowPart )
    goto LABEL_26;
  do
  {
    v4 = this[55].QuadPart + 16LL * v3;
    v5 = *(_DWORD *)(v4 + 4);
    if ( !v5 )
      goto LABEL_21;
    v6 = v5 - 1;
    if ( !v6 )
    {
      *(_DWORD *)(v4 + 4) = 2;
      v15 = this[43];
      if ( v15.QuadPart )
      {
        v16 = *(_QWORD *)(v15.QuadPart + 16);
        if ( this[42].LowPart == 1 )
          v17 = *(_QWORD *)(v16 + 88);
        else
          v17 = *(_QWORD *)(v16 + 76);
        *(_QWORD *)(v4 + 8) = v17;
        ++*(_QWORD *)(v4 + 8);
      }
LABEL_21:
      v42 = *(_OWORD *)v4;
      goto LABEL_22;
    }
    if ( v6 != 1 )
      goto LABEL_21;
    v7 = this[43];
    if ( v7.QuadPart )
    {
      v8 = *(_QWORD **)(v7.QuadPart + 16);
      v9 = *(_QWORD *)(v4 + 8);
      if ( v8[11] < v9 && (v8[7] <= v9 || *(_QWORD *)((char *)v8 + 76) >= v9) )
        goto LABEL_21;
    }
    v43 = 8;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    HIDWORD(v44) = *(_DWORD *)v4;
    CComposition::NotifyHelper((CComposition *)this, (struct MIL_MESSAGE *)&v43);
    *(_DWORD *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    LowPart = this[58].LowPart;
    v42 = *(_OWORD *)v4;
    if ( v3 < LowPart )
    {
      v11 = this[55];
      v12 = v3;
      if ( v3 < LowPart - 1 )
      {
        do
        {
          v13 = 2LL * v12;
          v14 = 2LL * ++v12;
          *(_OWORD *)(v11.QuadPart + 8 * v13) = *(_OWORD *)(v11.QuadPart + 8 * v14);
        }
        while ( v12 < this[58].LowPart - 1 );
      }
      --this[58].LowPart;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
    if ( v3 )
      --v3;
LABEL_22:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqx(v42, DWORD1(v42), DWORD1(v42), v42, SBYTE8(v42));
    ++v3;
    v1 |= *(_DWORD *)(v4 + 4) == 2;
  }
  while ( v3 < this[58].LowPart );
  if ( v1 )
  {
LABEL_39:
    v40[0] = 1;
    goto LABEL_40;
  }
LABEL_26:
  v18 = 0;
  v19 = this[76].LowPart;
  v20 = 0;
  v39 = 0;
  do
  {
    if ( v20 >= v19 )
      break;
    v21 = *(bool (__fastcall **)(CAnimation *__hidden, bool *))(**(_QWORD **)(this[73].QuadPart + 8LL * v20) + 8LL);
    if ( v21 == CAnimation::IsAnimate )
      CAnimation::IsAnimate(*(CAnimation **)(this[73].QuadPart + 8LL * v20), &v39);
    else
      v21(*(CAnimation **)(this[73].QuadPart + 8LL * v20), &v39);
    v18 = v39;
    ++v20;
  }
  while ( !v39 );
  v39 = *(_DWORD *)(this[21].QuadPart + 96) > 0 || v18;
  if ( v39 || *(_QWORD *)(this[5].QuadPart + 376) )
    goto LABEL_39;
  v22 = this[64];
  v40[0] = 0;
  if ( v22.QuadPart )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v22.QuadPart + 24) + 56LL))(
            *(_QWORD *)(v22.QuadPart + 24),
            v40);
    v24 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x161u);
      goto LABEL_63;
    }
    if ( v40[0] )
LABEL_40:
      SetEvent(*(HANDLE *)(this[63].QuadPart + 88));
  }
  v24 = 0;
  if ( !byte_18019306C )
  {
    if ( !this[147].QuadPart )
      this[147] = this[40];
    if ( this[40].QuadPart - this[147].QuadPart >= 0x2FAF080uLL )
    {
      this[147] = this[40];
      SetLastError(0);
      CurrentProcess = GetCurrentProcess();
      InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
      if ( InformationProcess >= 0 )
      {
        v29 = v57;
        *(_QWORD *)&v42 = v57;
        if ( !this[46].QuadPart )
        {
          SystemInformation = 0;
          v48 = 0LL;
          v49 = 0LL;
          v50 = 0LL;
          v51 = 0LL;
          v52 = 0LL;
          v53 = 0LL;
          v54 = 0LL;
          v55 = 0;
          NtQuerySystemInformation(SystemBasicInformation, &SystemInformation, 0x40u, 0LL);
          this[46].QuadPart = (unsigned int)(v49 * HIDWORD(v48));
        }
        v30 = (float)(int)v29;
        if ( v29 < 0 )
          v30 = v30 + 1.8446744e19;
        QuadPart = this[46].QuadPart;
        v32 = (float)(int)QuadPart;
        if ( QuadPart < 0 )
          v32 = v32 + 1.8446744e19;
        v33 = (int)(float)((float)(v30 / v32) * 100.0);
        if ( v33 > 0x64 )
          v33 = 100;
        this[45].HighPart = v33;
        if ( v33 > 0x19 )
        {
          WinSqmIncrementDWORD(0LL, 7445LL, 1LL);
          byte_18019306C = 1;
        }
      }
      else
      {
        v27 = RtlNtStatusToDosError(InformationProcess);
        SetLastError(v27);
        LastError = GetLastError();
        v24 = LastError;
        if ( LastError > 0 )
          v24 = (unsigned __int16)LastError | 0x80070000;
        if ( v24 >= 0 )
          v24 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x2AEu);
      }
    }
  }
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x169u);
LABEL_63:
  v34 = this[152];
  if ( g_pMediaControl )
  {
    if ( this[38].LowPart )
    {
      ++this[150].LowPart;
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v35 = this[39];
      v36 = 1000 * (PerformanceCount.QuadPart - this[151].QuadPart) / v35.QuadPart;
      this[153].QuadPart += 1000 * (PerformanceCount.QuadPart - v34.QuadPart) / v35.QuadPart;
      if ( v36 > 1000 )
      {
        v37 = *((_QWORD *)g_pMediaControl + 2);
        _InterlockedExchange((volatile __int32 *)(v37 + 20), 1000 * this[150].LowPart / (unsigned int)v36);
        _InterlockedExchange((volatile __int32 *)(v37 + 28), 100 * this[153].QuadPart / v36);
        this[151] = PerformanceCount;
        this[150].LowPart = 0;
        this[153].QuadPart = 0LL;
      }
    }
  }
  result = (unsigned int)v24;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  return result;
}
