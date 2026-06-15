/*
 * XREFs of ?QueryInterface@AudioEffectsWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800715C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::QueryInterface(AudioEffectsWatcher *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4 )
    {
      (*(void (__fastcall **)(AudioEffectsWatcher *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
