/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015FC0
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003010 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800390E0 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800390F0 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039100 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039110 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004F800 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1eb85143_ba0d_4e03_baf4_19220a4c6c6f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1eb85143_ba0d_4e03_baf4_19220a4c6c6f.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1eb85143_ba0d_4e03_baf4_19220a4c6c6f.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec081b02_27c6_4867_9203_959f1731a3e5.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data4;
        if ( v6 )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4;
          if ( v7 )
            return (unsigned int)CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
          v8 = (char *)this + 8;
        }
        else
        {
          v8 = (char *)this + 24;
        }
      }
      else
      {
        v8 = (char *)this + 16;
      }
      if ( !this )
        v8 = 0LL;
      *a3 = v8;
    }
    else
    {
      *a3 = this;
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
