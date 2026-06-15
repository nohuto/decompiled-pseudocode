/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180014260
 * Callers:
 *     AudioServerGetAllVolumes @ 0x1800135F0 (AudioServerGetAllVolumes.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8

  v4 = a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      68LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      this);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v7 = *((_QWORD *)this + 28);
  if ( v7 && *((_DWORD *)this + 54) )
  {
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        54LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        *((_QWORD *)this + 28));
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (_DWORD)v4 == *(_DWORD *)(v7 + 80) )
    {
      v9 = 0;
      if ( (_DWORD)v4 )
      {
        v10 = 0LL;
        v11 = v4;
        do
        {
          ++v10;
          a3[v10 - 1] = *(float *)(v10 * 4 + *(_QWORD *)(v7 + 104) - 4);
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v9 = -2147024809;
      if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_BYTE *)(v8 + 28) & 0x40) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
        WPP_SF_D(*(_QWORD *)(v8 + 16), 55LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, 2147942487LL);
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
      69LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v9);
  }
  return (unsigned int)v9;
}
