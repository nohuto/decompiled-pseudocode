/*
 * XREFs of ?Release@CWindowsPolicyManager@@UEAAKXZ @ 0x18001B370
 * Callers:
 *     ?Release@CWindowsPolicyManager@@W7EAAKXZ @ 0x180049440 (-Release@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?Release@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x180049450 (-Release@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::Release(CWindowsPolicyManager *this)
{
  char *v1; // rsi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 16;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 16);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
