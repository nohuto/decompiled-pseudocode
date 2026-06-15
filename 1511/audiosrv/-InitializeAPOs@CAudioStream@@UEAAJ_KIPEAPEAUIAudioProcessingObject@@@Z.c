/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001FF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180020730 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v7; // r12d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rsi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rsi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rsi
  TraceLoggingHProvider v18; // rcx
  __int64 v19; // rsi
  int v20; // ebx
  __int64 (__fastcall *v21)(CAudioStream *__hidden, unsigned int); // rbx
  int v22; // eax
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v34; // [rsp+28h] [rbp-20h]
  __int64 v35; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 27) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 112);
  v34 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    do
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v35 = 0LL;
      v9 = (**v8)(v8, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v35);
      v10 = v35;
      if ( v9 >= 0 && *((_QWORD *)this + 19) != v35 )
      {
        v24 = v35;
        if ( v35 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
          v10 = v35;
        }
        v25 = *((_QWORD *)this + 19);
        if ( v25 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 16LL))(*((_QWORD *)this + 19));
          v10 = v35;
        }
        *((_QWORD *)this + 19) = v24;
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v35 = 0LL;
      v12 = (**v11)(v11, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, &v35);
      v13 = v35;
      if ( v12 >= 0 && *((_QWORD *)this + 20) != v35 )
      {
        v26 = v35;
        if ( v35 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
          v13 = v35;
        }
        v27 = *((_QWORD *)this + 20);
        if ( v27 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(*((_QWORD *)this + 20));
          v13 = v35;
        }
        *((_QWORD *)this + 20) = v26;
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v35 = 0LL;
      v15 = (**v14)(v14, &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9, &v35);
      v16 = v35;
      if ( v15 >= 0 && *((_QWORD *)this + 22) != v35 )
      {
        v31 = v35;
        if ( v35 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
          v16 = v35;
        }
        v32 = *((_QWORD *)this + 22);
        if ( v32 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)this + 22));
          v16 = v35;
        }
        *((_QWORD *)this + 22) = v31;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a4;
      v35 = 0LL;
      if ( (int)(**v17)(v17, &GUID_419b26e3_fa99_4408_83de_cc1276efa489, &v35) < 0 )
        goto LABEL_14;
      v28 = v35;
      if ( *((_QWORD *)this + 21) != v35 )
      {
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        v29 = *((_QWORD *)this + 21);
        if ( v29 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 16LL))(*((_QWORD *)this + 21));
        *((_QWORD *)this + 21) = v28;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 32LL))(
              *((_QWORD *)this + 21),
              (char *)this + 76);
      if ( v30 < 0 )
      {
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            38LL,
            &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
            (unsigned int)v30);
          v18 = WPP_GLOBAL_Control;
        }
      }
      else
      {
LABEL_14:
        v18 = WPP_GLOBAL_Control;
      }
      if ( v35 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v18 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)this + 19) && *((_QWORD *)this + 20) && *((_QWORD *)this + 22) && *((_QWORD *)this + 21) )
        break;
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
  }
  if ( v34 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v18 = WPP_GLOBAL_Control;
  }
  if ( !*((_BYTE *)this + 41) )
  {
    v19 = *((_QWORD *)this + 19);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v19 + 40LL))(*((_QWORD *)this + 19), &v36);
      if ( v20 >= 0 )
      {
        v21 = *(__int64 (__fastcall **)(CAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 152LL);
        if ( v21 == CAudioStream::InitializeVolumeCoefficientCount )
          v22 = CAudioStream::InitializeVolumeCoefficientCount(this, v36);
        else
          v22 = v21(this, v36);
        v20 = v22;
      }
      v18 = WPP_GLOBAL_Control;
    }
    else
    {
      if ( v18 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v18 + 7) & 0x200000) != 0
        && *((_BYTE *)v18 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v18 + 2), 0x27u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
        v18 = WPP_GLOBAL_Control;
      }
      v20 = -2147467262;
    }
    if ( *((_QWORD *)this + 20) )
    {
      if ( v20 >= 0 )
        return (unsigned int)v20;
    }
    else
    {
      if ( v18 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v18 + 7) & 0x200000) != 0
        && *((_BYTE *)v18 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v18 + 2), 0x28u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
        v18 = WPP_GLOBAL_Control;
      }
      v20 = -2147467262;
    }
    if ( v18 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v18 + 28) & 0x40) != 0
      && *((_BYTE *)v18 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v18 + 2), 41LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, (unsigned int)v20);
    }
    return (unsigned int)v20;
  }
  return 0LL;
}
