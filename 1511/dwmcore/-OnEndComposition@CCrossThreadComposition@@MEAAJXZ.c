/*
 * XREFs of ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x1800820E0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qqx @ 0x180101894 (Template_qqx.c)
 */

__int64 __fastcall CCrossThreadComposition::OnEndComposition(LARGE_INTEGER *this, __int64 a2)
{
  char v2; // r14
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  LARGE_INTEGER v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  DWORD LowPart; // eax
  LARGE_INTEGER v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rax
  LARGE_INTEGER v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  DWORD v18; // r12d
  DWORD v19; // r14d
  __int64 v20; // rbx
  bool (__fastcall *v21)(CAnimation *__hidden, bool *); // rdi
  bool (__fastcall *v22)(CAnimation *__hidden); // r15
  char v23; // al
  LARGE_INTEGER v24; // rdi
  int v25; // eax
  signed int v26; // edi
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  DWORD v29; // eax
  signed int LastError; // eax
  bool v31; // zf
  __int64 v32; // rbx
  float v33; // xmm0_4
  __int64 QuadPart; // rax
  float v35; // xmm1_4
  unsigned int v36; // eax
  LARGE_INTEGER v37; // rbx
  LARGE_INTEGER v38; // r9
  LONGLONG v39; // r8
  __int64 v40; // rcx
  __int64 result; // rax
  unsigned __int8 v42; // [rsp+30h] [rbp-D0h] BYREF
  char v43[7]; // [rsp+31h] [rbp-CFh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+54h] [rbp-ACh]
  __int64 v48; // [rsp+5Ch] [rbp-A4h]
  __int64 v49; // [rsp+64h] [rbp-9Ch]
  int SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+74h] [rbp-8Ch]
  __int64 v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+84h] [rbp-7Ch]
  __int64 v54; // [rsp+8Ch] [rbp-74h]
  __int64 v55; // [rsp+94h] [rbp-6Ch]
  __int64 v56; // [rsp+9Ch] [rbp-64h]
  __int64 v57; // [rsp+A4h] [rbp-5Ch]
  int v58; // [rsp+ACh] [rbp-54h]
  char ProcessInformation[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]

  v2 = 0;
  v4 = 0;
  if ( this[58].LowPart )
  {
    while ( 1 )
    {
      v5 = this[55].QuadPart + 16LL * v4;
      v6 = *(_DWORD *)(v5 + 4);
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            v8 = this[43];
            if ( !v8.QuadPart
              || (v9 = *(_QWORD **)(v8.QuadPart + 16), v10 = *(_QWORD *)(v5 + 8), v9[11] >= v10)
              || v9[7] > v10 && *(_QWORD *)((char *)v9 + 76) < v10 )
            {
              v46 = 8;
              v47 = 0LL;
              v48 = 0LL;
              v49 = 0LL;
              HIDWORD(v47) = *(_DWORD *)v5;
              CComposition::NotifyHelper((CComposition *)this, (struct MIL_MESSAGE *)&v46);
              *(_DWORD *)(v5 + 4) = 0;
              *(_QWORD *)(v5 + 8) = 0LL;
              LowPart = this[58].LowPart;
              v45 = *(_OWORD *)v5;
              if ( v4 < LowPart )
              {
                v12 = this[55];
                v13 = v4;
                if ( v4 < LowPart - 1 )
                {
                  do
                  {
                    a2 = v13 + 1;
                    v14 = 2LL * v13;
                    v13 = a2;
                    *(_OWORD *)(v12.QuadPart + 8 * v14) = *(_OWORD *)(v12.QuadPart + 16 * a2);
                  }
                  while ( (unsigned int)a2 < this[58].LowPart - 1 );
                }
                --this[58].LowPart;
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
              }
              if ( v4 )
                --v4;
              goto LABEL_22;
            }
          }
        }
        else
        {
          *(_DWORD *)(v5 + 4) = 2;
          v15 = this[43];
          if ( v15.QuadPart )
          {
            v16 = *(_QWORD *)(v15.QuadPart + 16);
            if ( this[42].LowPart == 1 )
              v17 = *(_QWORD *)(v16 + 88);
            else
              v17 = *(_QWORD *)(v16 + 76);
            *(_QWORD *)(v5 + 8) = v17;
            ++*(_QWORD *)(v5 + 8);
          }
        }
      }
      v45 = *(_OWORD *)v5;
LABEL_22:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qqx(v45, DWORD1(v45), DWORD1(v45), v45, SBYTE8(v45));
      ++v4;
      v2 |= *(_DWORD *)(v5 + 4) == 2;
      if ( v4 >= this[58].LowPart )
      {
        if ( !v2 )
          break;
LABEL_47:
        v43[0] = 1;
        goto LABEL_48;
      }
    }
  }
  v18 = this[76].LowPart;
  LOBYTE(a2) = 0;
  v19 = 0;
  v42 = 0;
  while ( v19 < v18 )
  {
    v20 = *(_QWORD *)(this[73].QuadPart + 8LL * v19);
    v21 = *(bool (__fastcall **)(CAnimation *__hidden, bool *))(*(_QWORD *)v20 + 8LL);
    if ( v21 != CAnimation::IsAnimate )
    {
      ((void (__fastcall *)(_QWORD, unsigned __int8 *, bool (__fastcall *)(CAnimation *__hidden, bool *)))v21)(
        *(_QWORD *)(this[73].QuadPart + 8LL * v19),
        &v42,
        CAnimation::IsAnimate);
      a2 = v42;
      goto LABEL_39;
    }
    v22 = *(bool (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)(v20 - 40) + 112LL);
    if ( v22 == CAnimation::HasEnded )
    {
      if ( (*(_BYTE *)(v20 + 56) & 2) != 0 || !*(_QWORD *)(v20 + 64) )
        goto LABEL_32;
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, bool (__fastcall *)(CAnimation *__hidden, bool *)))v22)(
                v20 - 40,
                a2,
                CAnimation::IsAnimate) )
    {
      goto LABEL_32;
    }
    if ( *(_DWORD *)(v20 + 32) )
    {
      v23 = *(_BYTE *)(v20 + 56);
      if ( (v23 & 4) == 0 && (v23 & 0x11) != 0x11 )
      {
        LOBYTE(a2) = 1;
        v42 = 1;
        goto LABEL_39;
      }
    }
LABEL_32:
    LOBYTE(a2) = 0;
    v42 = 0;
LABEL_39:
    ++v19;
    if ( (_BYTE)a2 )
      break;
  }
  v42 = (*(_DWORD *)(this[21].QuadPart + 96) > 0) | a2;
  if ( v42 || *(_QWORD *)(this[5].QuadPart + 376) )
    goto LABEL_47;
  v24 = this[64];
  v43[0] = 0;
  if ( v24.QuadPart )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, char *, bool (__fastcall *)(CAnimation *__hidden, bool *)))(**(_QWORD **)(v24.QuadPart + 24) + 56LL))(
            *(_QWORD *)(v24.QuadPart + 24),
            v43,
            CAnimation::IsAnimate);
    v26 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x16Au);
      goto LABEL_71;
    }
    if ( v43[0] )
LABEL_48:
      SetEvent(*(HANDLE *)(this[63].QuadPart + 96));
  }
  v26 = 0;
  if ( !byte_1801A0C9C )
  {
    if ( !this[144].QuadPart )
      this[144] = this[40];
    if ( this[40].QuadPart - this[144].QuadPart >= 0x2FAF080uLL )
    {
      this[144] = this[40];
      SetLastError(0);
      CurrentProcess = GetCurrentProcess();
      InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
      if ( InformationProcess >= 0 )
      {
        v31 = this[46].QuadPart == 0;
        v32 = v60;
        *(_QWORD *)&v45 = v60;
        if ( v31 )
        {
          SystemInformation = 0;
          v51 = 0LL;
          v52 = 0LL;
          v53 = 0LL;
          v54 = 0LL;
          v55 = 0LL;
          v56 = 0LL;
          v57 = 0LL;
          v58 = 0;
          NtQuerySystemInformation(SystemBasicInformation, &SystemInformation, 0x40u, 0LL);
          this[46].QuadPart = (unsigned int)(v52 * HIDWORD(v51));
        }
        v33 = (float)(int)v32;
        if ( v32 < 0 )
          v33 = v33 + 1.8446744e19;
        QuadPart = this[46].QuadPart;
        v35 = (float)(int)QuadPart;
        if ( QuadPart < 0 )
          v35 = v35 + 1.8446744e19;
        v36 = (int)(float)((float)(v33 / v35) * 100.0);
        if ( v36 > 0x64 )
          v36 = 100;
        this[45].HighPart = v36;
        if ( v36 > 0x19 )
        {
          WinSqmIncrementDWORD(0LL, 7445LL, 1LL);
          byte_1801A0C9C = 1;
        }
      }
      else
      {
        v29 = RtlNtStatusToDosError(InformationProcess);
        SetLastError(v29);
        LastError = GetLastError();
        v26 = LastError;
        if ( LastError > 0 )
          v26 = (unsigned __int16)LastError | 0x80070000;
        if ( v26 >= 0 )
          v26 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2B7u);
      }
    }
  }
  if ( v26 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x172u);
LABEL_71:
  v37 = this[149];
  if ( g_pMediaControl )
  {
    if ( this[38].LowPart )
    {
      ++this[147].LowPart;
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v38 = this[39];
      v39 = 1000 * (PerformanceCount.QuadPart - this[148].QuadPart) / v38.QuadPart;
      this[150].QuadPart += 1000 * (PerformanceCount.QuadPart - v37.QuadPart) / v38.QuadPart;
      if ( v39 > 1000 )
      {
        v40 = *((_QWORD *)g_pMediaControl + 2);
        _InterlockedExchange((volatile __int32 *)(v40 + 20), 1000 * this[147].LowPart / (unsigned int)v39);
        _InterlockedExchange((volatile __int32 *)(v40 + 28), 100 * this[150].QuadPart / v39);
        this[148] = PerformanceCount;
        this[147].LowPart = 0;
        this[150].QuadPart = 0LL;
      }
    }
  }
  result = (unsigned int)v26;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  return result;
}
