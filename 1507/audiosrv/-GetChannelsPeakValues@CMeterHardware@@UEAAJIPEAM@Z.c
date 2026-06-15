/*
 * XREFs of ?GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z @ 0x18006CA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterHardware::GetChannelsPeakValues(CMeterHardware *this, unsigned int a2, float *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v12; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( a2 == *((_DWORD *)this + 8) )
    {
      v5 = 0;
      if ( *((_QWORD *)this + 6) )
      {
        v6 = 0LL;
        if ( !*((_DWORD *)this + 8) )
          return v5;
        do
        {
          v7 = *((_QWORD *)this + 6);
          v12 = 0.0;
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v7 + 32LL))(v7, (unsigned int)v6, &v12);
          v9 = v12;
          v5 = v8;
          if ( v12 >= 1.0 )
            v10 = FLOAT_1_0;
          else
            v10 = v12;
          if ( v10 <= 0.0 )
          {
            v9 = 0.0;
          }
          else if ( v12 >= 1.0 )
          {
            v9 = FLOAT_1_0;
          }
          a3[v6] = v9;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *((_DWORD *)this + 8) );
      }
      else
      {
        if ( !a2 )
          return v5;
        memset_0(a3, 0, 4LL * a2);
      }
      if ( (v5 & 0x80000000) == 0 )
        return v5;
    }
    else
    {
      v5 = -2147024809;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      v5);
  }
  return v5;
}
