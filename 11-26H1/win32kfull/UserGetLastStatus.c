/*
 * XREFs of UserGetLastStatus @ 0x1401B0AD8
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastStatus()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1, v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[200].Self);
  else
    return LODWORD(Self[83].ArbitraryUserPointer);
}
