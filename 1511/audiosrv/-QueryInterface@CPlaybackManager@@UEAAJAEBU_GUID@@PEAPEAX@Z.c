/*
 * XREFs of ?QueryInterface@CPlaybackManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1340
 * Callers:
 *     ?QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800495A0 (-QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPlaybackManager::QueryInterface(CPlaybackManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
    {
      v4 = (char *)this + 16;
      if ( !this )
        v4 = 0LL;
      *a3 = v4;
      (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      return (unsigned int)CUnknown::QueryInterface(this, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
