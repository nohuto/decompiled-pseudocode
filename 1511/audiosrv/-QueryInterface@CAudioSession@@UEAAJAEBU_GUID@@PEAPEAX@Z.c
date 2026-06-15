/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028A20
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E30 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E40 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E50 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048E60 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076340 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  char *v4; // rax

  if ( !a3 )
    return 2147500035LL;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa.Data4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data4 )
  {
    if ( this )
    {
      v4 = (char *)this + 16;
LABEL_19:
      *a3 = v4;
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      return 0LL;
    }
    goto LABEL_18;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data4 )
  {
    if ( this )
    {
      v4 = (char *)this + 24;
      goto LABEL_19;
    }
LABEL_18:
    v4 = 0LL;
    goto LABEL_19;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4 )
  {
    if ( this )
    {
      v4 = (char *)this + 8;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  return CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
}
