/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180014350
 * Callers:
 *     AudioServerSetAllVolumes @ 0x180013590 (AudioServerSetAllVolumes.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  _DWORD *v7; // rsi
  __int64 v8; // r10
  int v9; // edi
  unsigned int v10; // eax
  float *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  float v14; // eax
  __int64 (__fastcall *v15)(CAudioStream *__hidden); // rbx
  __int64 v17; // rdx

  v4 = a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      66LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v7 = (_DWORD *)*((_QWORD *)this + 28);
  if ( v7 && *((_DWORD *)this + 54) )
  {
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        56LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        v7,
        v4);
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (_DWORD)v4 == v7[20] )
    {
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v4 )
      {
        v11 = a3;
        while ( *v11 >= 0.0 && *v11 <= 1.0 )
        {
          ++v10;
          ++v11;
          if ( v10 >= (unsigned int)v4 )
          {
            v12 = 0LL;
            v13 = v4;
            do
            {
              v14 = a3[v12++];
              *(float *)(v12 * 4 + *((_QWORD *)v7 + 13) - 4) = v14;
              --v13;
            }
            while ( v13 );
            goto LABEL_19;
          }
        }
        v9 = -2147024809;
        if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_BYTE *)(v8 + 28) & 0x40) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
        {
          v17 = 58LL;
          goto LABEL_27;
        }
      }
      else
      {
LABEL_19:
        v15 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v7 + 120LL);
        if ( v15 == CAudioStream::RecalculateVolume )
          CAudioStream::RecalculateVolume((CAudioStream *)v7);
        else
          v15((CAudioStream *)v7);
      }
    }
    else
    {
      v9 = -2147024809;
      if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_BYTE *)(v8 + 28) & 0x40) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
      {
        v17 = 57LL;
LABEL_27:
        WPP_SF_D(*(_QWORD *)(v8 + 16), v17, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, 2147942487LL);
      }
    }
  }
  else
  {
    v9 = -2004287487;
  }
  LeaveCriticalSection(v6);
  if ( v9 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      67LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v9);
  }
  return (unsigned int)v9;
}
