/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010C20
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180011344 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800196B0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044C10 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044C20 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044C30 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044C40 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B0B0 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066C00 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa.Data4;
  if ( !v3 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data4;
  if ( !v4 )
  {
    if ( this )
    {
      v7 = (char *)this + 16;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data4;
  if ( !v5 )
  {
    if ( this )
    {
      v7 = (char *)this + 24;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4;
  if ( v6 )
    return CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
  if ( !this )
  {
LABEL_21:
    v7 = 0LL;
    goto LABEL_16;
  }
  v7 = (char *)this + 8;
LABEL_16:
  *a3 = v7;
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
