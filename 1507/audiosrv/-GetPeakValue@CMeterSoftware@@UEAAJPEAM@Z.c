/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x18006CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(CMeterSoftware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // r15
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
  float *v12; // rax
  float v13; // xmm1_4
  _BYTE v14[384]; // [rsp+20h] [rbp-1C8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 8);
    if ( v9 > 0x20 )
    {
      LeaveCriticalSection(v7);
      return 2147942487LL;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)v8 + 24LL))(*((_QWORD *)this + 5), v14, v9);
    v2 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -2147417848 || v10 == -2147023174 )
      {
        ATL::CComPtrBase<IAudioMeter>::Release((__int64 *)this + 5);
        v2 = 0;
      }
    }
    else if ( *((_DWORD *)this + 8) )
    {
      v11 = *((unsigned int *)this + 8);
      v12 = (float *)v14;
      do
      {
        if ( *v12 > v5 )
          v5 = *v12;
        v12 += 3;
        --v11;
      }
      while ( v11 );
    }
  }
  LeaveCriticalSection(v7);
  if ( v5 >= 1.0 )
    v13 = FLOAT_1_0;
  else
    v13 = v5;
  if ( v13 <= 0.0 )
  {
    v5 = 0.0;
  }
  else if ( v5 >= 1.0 )
  {
    v5 = FLOAT_1_0;
  }
  *a2 = v5;
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Au,
      (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
