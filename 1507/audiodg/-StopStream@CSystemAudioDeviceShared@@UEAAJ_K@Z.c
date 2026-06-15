/*
 * XREFs of ?StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D690
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

__int64 __fastcall CSystemAudioDeviceShared::StopStream(CSystemAudioDeviceShared *this, void *a2)
{
  int v2; // ebp
  struct CStreamInstance *StreamInstance; // rax
  struct CStreamInstance *v6; // r15
  __int64 v7; // rcx
  void *v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int16 v18; // dx
  int v19; // eax
  void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8

  v2 = 0;
  AEWMILOG_AUDIODG_STREAM_START_STOP(
    (__int64)this,
    a2,
    *((unsigned int *)this + 95),
    (__int64)this,
    (unsigned __int64)a2,
    *((unsigned int *)this + 95),
    *((unsigned int *)this + 96),
    0LL,
    0LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x24u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  StreamInstance = CSystemAudioDeviceBase::FindStreamInstance(this, (__int64)a2);
  v6 = StreamInstance;
  if ( !StreamInstance )
  {
    v2 = -2005139430;
    goto LABEL_7;
  }
  *((_DWORD *)StreamInstance + 9) = 0;
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 45) + 72LL))(*((_QWORD *)this + 45), a2);
  v11 = *((_DWORD *)v6 + 8);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        v2 = -2147024809;
      goto LABEL_7;
    }
    v13 = *((_DWORD *)this + 96);
    if ( v13 )
    {
      *((_DWORD *)this + 96) = v13 - 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x27u,
          (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
          v13 - 1);
      }
      AEWMILOG_AUDIODG_STREAM_START_STOP(
        *((unsigned int *)this + 95),
        v9,
        v10,
        (__int64)this,
        (unsigned __int64)a2,
        *((unsigned int *)this + 95),
        *((unsigned int *)this + 96),
        0LL,
        0xBuLL);
      if ( !*((_DWORD *)this + 96) )
      {
        AEWMILOG_AUDIODG_STREAM_START_STOP(
          v15,
          v14,
          v16,
          (__int64)this,
          (unsigned __int64)a2,
          *((unsigned int *)this + 95),
          0LL,
          0LL,
          0xCuLL);
LABEL_41:
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 104LL))(*((_QWORD *)this + 45));
        goto LABEL_7;
      }
      goto LABEL_7;
    }
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
LABEL_33:
      v2 = -2005139381;
      goto LABEL_7;
    }
    v18 = 40;
LABEL_32:
    WPP_SF_(*(_QWORD *)(v17 + 16), v18, (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
    goto LABEL_33;
  }
  v19 = *((_DWORD *)this + 95);
  if ( !v19 )
  {
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
      goto LABEL_33;
    }
    v18 = 38;
    goto LABEL_32;
  }
  *((_DWORD *)this + 95) = v19 - 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x25u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v19 - 1);
  }
  AEWMILOG_AUDIODG_STREAM_START_STOP(
    *((unsigned int *)this + 95),
    v9,
    v10,
    (__int64)this,
    (unsigned __int64)a2,
    *((unsigned int *)this + 95),
    *((unsigned int *)this + 96),
    0LL,
    1uLL);
  if ( !*((_DWORD *)this + 95) )
  {
    AEWMILOG_AUDIODG_STREAM_START_STOP(
      v21,
      v20,
      v22,
      (__int64)this,
      (unsigned __int64)a2,
      0LL,
      *((unsigned int *)this + 96),
      0LL,
      2uLL);
    goto LABEL_41;
  }
LABEL_7:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x29u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v2 < 0
    && (unsigned int *)v7 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v7 + 28) & 0x200) != 0
    && *(_BYTE *)(v7 + 25) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(v7 + 16),
      0x2Au,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2,
      (__int64)"CSystemAudioDeviceShared::StopStream(/*[in]*/ StreamHandle hStreamHandle)");
  }
  return (unsigned int)v2;
}
