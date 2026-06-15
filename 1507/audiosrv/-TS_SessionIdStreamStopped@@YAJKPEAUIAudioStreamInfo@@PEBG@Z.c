/*
 * XREFs of ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002C6A0
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall TS_SessionIdStreamStopped(DWORD a1, struct IAudioStreamInfo *a2, const unsigned __int16 *a3)
{
  _QWORD *v6; // rax
  struct TSSession *v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  int v11; // eax
  struct TSSession *v12; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      49LL,
      &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      a1);
  }
  v12 = 0LL;
  v6 = qword_1800E88D0;
  while ( v6 )
  {
    v7 = (struct TSSession *)v6[2];
    v6 = (_QWORD *)*v6;
    if ( a1 == *(_DWORD *)v7 )
      goto LABEL_8;
  }
  v11 = TsSessionCreate(a1, 0LL, &v12);
  v9 = v11;
  if ( !v11 )
  {
    v7 = v12;
LABEL_8:
    v8 = *((_QWORD *)v7 + 39);
    if ( v8 )
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *, const unsigned __int16 *))(*(_QWORD *)v8 + 32LL))(
             *((_QWORD *)v7 + 39),
             a2,
             a3);
    else
      v9 = -2147418113;
    goto LABEL_10;
  }
  if ( v11 > 0 )
    v9 = (unsigned __int16)v11 | 0x80070000;
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (v9 & 0x80000000) != 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      50LL,
      &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v9);
  }
  return v9;
}
