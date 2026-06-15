/*
 * XREFs of ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180029A90
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001E760 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001E770 (-IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008FD28 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008FD94 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::DestroyStream(CSharedStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edi
  bool (__fastcall *v8)(CAudioStream *); // rbx
  bool IsPeriodicitySensitiveClient; // al
  bool v10; // r8
  bool (__fastcall *v11)(CAudioStream *); // rbx
  bool IsFormatSensitiveClient; // al
  bool v13; // r8

  v2 = (__int64 *)*((_QWORD *)this + 9);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 40))(v2, v6);
  v8 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 112LL);
  if ( v8 == CAudioStream::IsPeriodicitySensitiveClient )
    IsPeriodicitySensitiveClient = CAudioStream::IsPeriodicitySensitiveClient(a2);
  else
    IsPeriodicitySensitiveClient = v8(a2);
  if ( IsPeriodicitySensitiveClient )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, -1, v10);
  if ( v7 >= 0 )
  {
    v11 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 120LL);
    if ( v11 == CAudioStream::IsFormatSensitiveClient )
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
    else
      IsFormatSensitiveClient = v11(a2);
    if ( IsFormatSensitiveClient )
      CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, -1, v13);
  }
  return (unsigned int)v7;
}
