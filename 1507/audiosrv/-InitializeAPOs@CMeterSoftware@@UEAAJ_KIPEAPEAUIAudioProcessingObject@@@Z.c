/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800302C0
 * Callers:
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D020 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // r15
  int v7; // esi
  __int64 v8; // rcx
  unsigned int v9; // r12d
  _QWORD *v10; // r14
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v7 = -2147023537;
  if ( !a4 )
    return 2147500035LL;
  v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      28LL,
      &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      this);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v9 = 0;
    v10 = (_QWORD *)((char *)this + 40);
    while ( 1 )
    {
      v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
      }
      v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))(*v4)->lpVtbl->QueryInterface)(
             *v4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 40);
      if ( !v7 )
        break;
      ++v9;
      ++v4;
      if ( v9 >= a3 )
        goto LABEL_16;
    }
    v12 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
    v13 = 0LL;
    v16 = 0LL;
    if ( v12 && ((**v12)(v12, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v16), (v13 = v16) != 0) )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 32LL))(*v10, (char *)this + 32);
      v13 = v16;
      v7 = v14;
    }
    else
    {
      v7 = -2147467262;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_16:
    if ( !*((_QWORD *)this + 5) )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Du,
          (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids);
      }
      v7 = -2147023537;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_DWORD *)(v8 + 28) & 0x10000) != 0 && *(_BYTE *)(v8 + 25) >= 4u )
  {
    WPP_SF_q(*(_QWORD *)(v8 + 16), 30LL, &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, this);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v7 < 0
    && (struct _GUID *)v8 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v8 + 28) & 0x10000) != 0
    && *(_BYTE *)(v8 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v8 + 16), 31LL, &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, (unsigned int)v7);
  }
  return (unsigned int)v7;
}
