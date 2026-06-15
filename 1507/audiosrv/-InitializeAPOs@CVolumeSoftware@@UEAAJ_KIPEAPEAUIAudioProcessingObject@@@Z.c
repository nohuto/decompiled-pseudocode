/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006EF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int v9; // ebp
  int v10; // r12d
  _QWORD *v11; // r15
  int v12; // eax
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0;
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x53u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( !a3 )
  {
    v8 = -2147467262;
LABEL_30:
    if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control && (*(_DWORD *)(v7 + 28) & 0x10000) != 0 && *(_BYTE *)(v7 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v7 + 16), 0x56u, (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, v8);
    return (unsigned int)v8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = 0;
  v10 = 1;
  v11 = (_QWORD *)((char *)this + 88);
  do
  {
    ATL::CComPtrBase<IPart>::Release((__int64 *)this + 11);
    if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
           *a4,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           (char *)this + 88) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v11 + 40LL))(*v11, &v14);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( *v11 )
        break;
    }
    ++v9;
    ++a4;
  }
  while ( v9 < a3 );
  if ( *((_QWORD *)this + 11) )
  {
    if ( *((_DWORD *)this + 17) == v14 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
      v10 = 0;
      v12 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)this + 216LL))(this);
    }
    else
    {
      *((_DWORD *)this + 17) = v14;
      v12 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)this + 224LL))(this);
    }
    v8 = v12;
    if ( v12 >= 0 )
    {
      v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
LABEL_27:
        if ( !v10 )
          goto LABEL_29;
        goto LABEL_28;
      }
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x55u,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        this,
        v12);
    }
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_27;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x54u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids);
  }
  v8 = -2147467262;
LABEL_28:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_29:
  if ( v8 < 0 )
    goto LABEL_30;
  return (unsigned int)v8;
}
