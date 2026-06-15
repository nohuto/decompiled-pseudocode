/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18001C268
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 * Callees:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C150 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // esi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( !*((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 56) = 1;
    while ( 1 )
    {
      v3 = *((_DWORD *)this + 57);
      if ( v3 == *((_DWORD *)this + 58) && !*((_DWORD *)this + 129) )
        break;
      *((_DWORD *)this + 58) = v3;
      LeaveCriticalSection(v1);
      CApplication::SendSoundLevelNotification((__int64)this, v3);
      EnterCriticalSection(v1);
      *((_DWORD *)this + 129) = 0;
    }
    *((_DWORD *)this + 56) = 0;
  }
  LeaveCriticalSection(v1);
}
