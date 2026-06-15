/*
 * XREFs of ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x18007D790
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::IsUsingResource(CAudioStream *this, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // di

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2 )
    return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 184LL))(*((_QWORD *)this + 7), a2) != 0;
  return v3;
}
