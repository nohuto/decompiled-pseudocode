/*
 * XREFs of ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000D2A4
 * Callers:
 *     ?UnregisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180005670 (-UnregisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009AD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::UnregisterAppVolumePolicyChange(
        CApplication *this,
        struct IAudioAppVolumePolicyChange *a2)
{
  unsigned int v4; // edi
  __int64 *i; // r8
  __int64 *v6; // rax
  __int64 v7; // rax
  bool v8; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  v4 = -2147023728;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (__int64 *)*((_QWORD *)this + 15); i && (struct IAudioAppVolumePolicyChange *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v6 = (__int64 *)*i;
    if ( i == *((__int64 **)this + 15) )
      *((_QWORD *)this + 15) = v6;
    else
      *(_QWORD *)i[1] = v6;
    v7 = i[1];
    if ( i == *((__int64 **)this + 16) )
      *((_QWORD *)this + 16) = v7;
    else
      *(_QWORD *)(*i + 8) = v7;
    *i = *((_QWORD *)this + 19);
    v8 = (*((_QWORD *)this + 17))-- == 1LL;
    *((_QWORD *)this + 19) = i;
    if ( v8 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
    v4 = 0;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
