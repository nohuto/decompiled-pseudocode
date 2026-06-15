/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CSystemAudioDeviceShared@@UEAAJH@Z @ 0x14002CF20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ?AEWMILOG_AUDIODG_STREAM_START_STOP@@YAXKPEAXE_K11111@Z @ 0x14002BD98 (-AEWMILOG_AUDIODG_STREAM_START_STOP@@YAXKPEAXE_K11111@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::NotifyStreamSuspensionStateChanged(
        CSystemAudioDeviceShared *this,
        void *a2)
{
  int v2; // esi
  int v3; // ebx
  void *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = 0;
  v3 = (int)a2;
  AEWMILOG_AUDIODG_STREAM_START_STOP(
    (__int64)this,
    a2,
    *((unsigned int *)this + 95),
    (__int64)this,
    0LL,
    *((unsigned int *)this + 95),
    *((unsigned int *)this + 96),
    2uLL,
    0x20uLL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 95) && !*((_DWORD *)this + 97) && !*((_DWORD *)this + 96) )
    {
      AEWMILOG_AUDIODG_STREAM_START_STOP(v6, v5, v7, (__int64)this, 0LL, 0LL, 0LL, 2uLL, 0x21uLL);
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 104LL))(*((_QWORD *)this + 45));
    }
  }
  else
  {
    AEWMILOG_AUDIODG_STREAM_START_STOP(
      v6,
      (void *)*((unsigned int *)this + 95),
      v7,
      (__int64)this,
      0LL,
      *((unsigned int *)this + 95),
      *((unsigned int *)this + 96),
      2uLL,
      0x23uLL);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x2Bu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v2 < 0
    && (unsigned int *)v8 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v8 + 28) & 0x200) != 0
    && *(_BYTE *)(v8 + 25) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(v8 + 16),
      0x2Cu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v2,
      (__int64)"CSystemAudioDeviceShared::NotifyStreamSuspensionStateChanged");
  }
  return (unsigned int)v2;
}
