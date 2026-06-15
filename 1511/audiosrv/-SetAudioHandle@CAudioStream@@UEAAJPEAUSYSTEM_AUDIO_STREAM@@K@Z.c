/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800205F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000BE30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v7; // r12
  __int64 (__fastcall *v9)(__int64, unsigned int, unsigned int, unsigned int); // rdi
  unsigned int updated; // eax

  v3 = 0;
  v4 = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 6));
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 45) = a3;
    v9 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v4 + 192LL);
    if ( v9 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority(v4, 0, a3, 0xFFFFFFFF);
    else
      updated = v9(v4, 0, a3, 0xFFFFFFFF);
    v3 = updated;
  }
  *((_QWORD *)a2 + 7) = 0LL;
  return v3;
}
