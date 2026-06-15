/*
 * XREFs of ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180024350
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A110 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001A130 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A140 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075AE0 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075B28 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075B78 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::DestroyStream(CSharedStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ebx
  bool (__fastcall *v8)(CAudioStream *); // rax
  bool IsStrictPeriodicityClient; // al
  bool v10; // r8
  bool (__fastcall *v11)(CAudioStream *); // rax
  bool IsFormatSensitiveClient; // al
  bool v13; // r8
  bool (__fastcall *v14)(CAudioStream *); // rax
  bool IsLazyPeriodicityClient; // al
  bool v16; // r8

  v2 = (__int64 *)*((_QWORD *)this + 8);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 40))(v2, v6);
  v8 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 120LL);
  if ( v8 == CAudioStream::IsStrictPeriodicityClient )
    IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
  else
    IsStrictPeriodicityClient = v8(a2);
  if ( IsStrictPeriodicityClient )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, -1, v10);
  if ( v7 >= 0 )
  {
    v11 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 128LL);
    if ( v11 == CAudioStream::IsFormatSensitiveClient )
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
    else
      IsFormatSensitiveClient = v11(a2);
    if ( IsFormatSensitiveClient )
      CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, -1, v13);
    v14 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 136LL);
    if ( v14 == CAudioStream::IsLazyPeriodicityClient )
      IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
    else
      IsLazyPeriodicityClient = v14(a2);
    if ( IsLazyPeriodicityClient )
      CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, -1, v16);
  }
  return (unsigned int)v7;
}
