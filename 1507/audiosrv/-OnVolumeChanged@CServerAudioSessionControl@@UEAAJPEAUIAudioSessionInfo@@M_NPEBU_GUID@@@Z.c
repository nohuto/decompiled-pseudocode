/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180018200
 * Callers:
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800312F0 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     StringCopyWorkerW_0 @ 0x18002E560 (StringCopyWorkerW_0.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sgd @ 0x18007EA70 (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  HANDLE ProcessHeap; // rax
  char *v15; // rax
  size_t *v16; // r8
  void *v17; // rbx
  GUID *v18; // rcx
  size_t v19; // rdx
  GUID v20; // xmm0
  wchar_t *v21; // rcx
  HANDLE v22; // rax
  size_t v24; // [rsp+20h] [rbp-48h]
  double v25; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v27; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        36LL,
        &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        0LL);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control && (*(_BYTE *)(v9 + 28) & 0x40) != 0 && *(_BYTE *)(v9 + 25) >= 4u )
    {
      v25 = a3;
      WPP_SF_Sgd(*(_QWORD *)(v9 + 16), (_DWORD)a2, v5, 0, SLOBYTE(v25), a4);
    }
  }
  v27 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v10 + 704) - 16LL);
    v12 = 2 * v11 + 2;
    v13 = 2 * v11 + 66;
    ProcessHeap = GetProcessHeap();
    v15 = (char *)HeapAlloc(ProcessHeap, 0, v13);
    v17 = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = v13;
      v18 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a5 )
        v18 = a5;
      v19 = (unsigned __int64)v12 >> 1;
      v20 = *v18;
      v21 = (wchar_t *)(v15 + 64);
      *((_DWORD *)v15 + 1) = 1;
      *((float *)v15 + 12) = a3;
      *(GUID *)(v15 + 28) = v20;
      *((_DWORD *)v15 + 6) = v12;
      v15[52] = a4;
      if ( v19 - 1 > 0x7FFFFFFE )
      {
        if ( v19 )
          *v21 = 0;
      }
      else
      {
        StringCopyWorkerW_0(v21, v19, v16, *(STRSAFE_PCNZWCH *)(*((_QWORD *)this + 9) + 704LL), v24);
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          38LL,
          &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          v17,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v17, *((unsigned int *)this + 20));
      v22 = GetProcessHeap();
      HeapFree(v22, 0, v17);
      if ( MediaEvent < 0
        && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          39LL,
          &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          (unsigned int)MediaEvent);
      }
    }
  }
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
