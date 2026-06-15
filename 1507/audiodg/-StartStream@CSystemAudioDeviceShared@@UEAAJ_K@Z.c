/*
 * XREFs of ?StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ?FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z @ 0x1400299F4 (-FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?AEWMILOG_AUDIODG_STREAM_START_STOP@@YAXKPEAXE_K11111@Z @ 0x14002BD98 (-AEWMILOG_AUDIODG_STREAM_START_STOP@@YAXKPEAXE_K11111@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::StartStream(CSystemAudioDeviceShared *this, void *a2)
{
  int v2; // ebx
  struct CStreamInstance *StreamInstance; // rax
  __int64 v6; // r8
  struct CStreamInstance *v7; // r14
  void *v8; // rdx
  unsigned __int64 v9; // rdx
  void *v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = 0;
  AEWMILOG_AUDIODG_STREAM_START_STOP(
    (__int64)this,
    a2,
    *((unsigned int *)this + 95),
    (__int64)this,
    (unsigned __int64)a2,
    *((unsigned int *)this + 95),
    *((unsigned int *)this + 96),
    1uLL,
    0LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x1Fu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  StreamInstance = CSystemAudioDeviceBase::FindStreamInstance(this, (__int64)a2);
  v7 = StreamInstance;
  if ( !StreamInstance )
  {
    v2 = -2005139430;
    goto LABEL_28;
  }
  *((_DWORD *)StreamInstance + 9) = 1;
  if ( !*((_DWORD *)this + 94) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 45) + 88LL))(
           *((_QWORD *)this + 45),
           (char *)this + 272);
    if ( v2 < 0 )
      goto LABEL_28;
    *((_DWORD *)this + 94) = 1;
  }
  v8 = (void *)*((unsigned int *)v7 + 8);
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)((_DWORD)v8 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
        ++*((_DWORD *)this + 97);
      else
        v2 = -2147024809;
      goto LABEL_28;
    }
    ++*((_DWORD *)this + 96);
    AEWMILOG_AUDIODG_STREAM_START_STOP(
      *((unsigned int *)this + 96),
      (void *)v9,
      v6,
      (__int64)this,
      (unsigned __int64)a2,
      *((unsigned int *)this + 95),
      *((unsigned int *)this + 96),
      1uLL,
      0xBuLL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x21u,
        (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
        *((_DWORD *)this + 96));
    }
    v12 = *((unsigned int *)this + 96);
    if ( (_DWORD)v12 )
    {
      AEWMILOG_AUDIODG_STREAM_START_STOP(
        *((unsigned int *)this + 95),
        v10,
        v11,
        (__int64)this,
        (unsigned __int64)a2,
        *((unsigned int *)this + 95),
        v12,
        1uLL,
        0xCuLL);
LABEL_27:
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 112LL))(*((_QWORD *)this + 45));
    }
  }
  else
  {
    ++*((_DWORD *)this + 95);
    AEWMILOG_AUDIODG_STREAM_START_STOP(
      *((unsigned int *)this + 95),
      v8,
      v6,
      (__int64)this,
      (unsigned __int64)a2,
      *((unsigned int *)this + 95),
      *((unsigned int *)this + 96),
      1uLL,
      1uLL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x20u,
        (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
        *((_DWORD *)this + 95));
    }
    v15 = *((unsigned int *)this + 95);
    if ( (_DWORD)v15 )
    {
      AEWMILOG_AUDIODG_STREAM_START_STOP(
        v15,
        v13,
        v14,
        (__int64)this,
        (unsigned __int64)a2,
        v15,
        *((unsigned int *)this + 96),
        1uLL,
        2uLL);
      goto LABEL_27;
    }
  }
LABEL_28:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v16 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x22u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v2 < 0
    && (unsigned int *)v16 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v16 + 28) & 0x200) != 0
    && *(_BYTE *)(v16 + 25) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(v16 + 16),
      0x23u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2,
      (__int64)"CSystemAudioDeviceShared::StartStream");
  }
  return (unsigned int)v2;
}
