/*
 * XREFs of ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180007380
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180007F40 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180020D30 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180020D40 (-IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008D5B8 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008D620 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::DestroyStream(CSharedStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edi
  bool (__fastcall *v8)(CAudioStream *__hidden); // rbx
  bool IsPeriodicitySensitiveClient; // al
  bool v10; // r8
  bool (__fastcall *v11)(CAudioStream *__hidden); // rbx
  bool IsFormatSensitiveClient; // al
  bool v13; // r8

  v2 = (__int64 *)*((_QWORD *)this + 8);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 40))(v2, v6);
  v8 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 112LL);
  if ( v8 == CAudioStream::IsPeriodicitySensitiveClient )
    IsPeriodicitySensitiveClient = CAudioStream::IsPeriodicitySensitiveClient(a2);
  else
    IsPeriodicitySensitiveClient = v8(a2);
  if ( IsPeriodicitySensitiveClient )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, -1, v10);
  if ( v7 >= 0 )
  {
    v11 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 120LL);
    if ( v11 == CAudioStream::IsFormatSensitiveClient )
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
    else
      IsFormatSensitiveClient = v11(a2);
    if ( IsFormatSensitiveClient )
      CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, -1, v13);
  }
  return (unsigned int)v7;
}
