/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x18006CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(CMeterSoftware *this, unsigned int a2, float *a3)
{
  __int64 v3; // rdi
  float *v4; // rbp
  int v6; // ebx
  __int64 v7; // r15
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm2_4
  _BYTE v14[384]; // [rsp+20h] [rbp-1C8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_27:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Bu,
        (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
        v6);
    }
    return (unsigned int)v6;
  }
  if ( a2 != *((_DWORD *)this + 8) )
  {
    v6 = -2147024809;
    goto LABEL_27;
  }
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = *((_QWORD *)this + 5);
  if ( v7 && *((_DWORD *)this + 8) <= 0x20u )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)v7 + 24LL))(
           *((_QWORD *)this + 5),
           v14,
           (unsigned int)v3);
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset_0(v4, 0, 4 * v3);
        ATL::CComPtrBase<IAudioMeter>::Release((__int64 *)this + 5);
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v9 = (float *)v14;
      v10 = v3;
      do
      {
        v11 = *v9;
        if ( *v9 >= 1.0 )
          v12 = FLOAT_1_0;
        else
          v12 = *v9;
        if ( v12 <= 0.0 )
        {
          v11 = 0.0;
        }
        else if ( v11 >= 1.0 )
        {
          v11 = FLOAT_1_0;
        }
        *v4 = v11;
        v9 += 3;
        ++v4;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset_0(v4, 0, 4 * v3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v6 < 0 )
    goto LABEL_27;
  return (unsigned int)v6;
}
