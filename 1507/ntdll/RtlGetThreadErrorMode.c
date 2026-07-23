/*
 * XREFs of RtlGetThreadErrorMode @ 0x1800730E0
 * Callers:
 *     LdrpLogLoadFailureEtwEvent @ 0x180073030 (LdrpLogLoadFailureEtwEvent.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetThreadErrorMode(void)
{
  struct _TEB *v0; // rcx
  int WowTebOffset; // eax
  struct _TEB *v2; // rdx
  __int64 v3; // rax
  bool v4; // zf
  struct _TEB *v5; // rcx
  __int64 v6; // rax

  v0 = NtCurrentTeb();
  WowTebOffset = v0->WowTebOffset;
  if ( WowTebOffset < 0 )
    LODWORD(v0) = WowTebOffset + (_DWORD)v0;
  v2 = NtCurrentTeb();
  v3 = v2->WowTebOffset;
  if ( (int)v3 < 0 )
    v2 = (struct _TEB *)((char *)v2 + v3);
  v4 = (_DWORD)v0 == LODWORD(v2->NtTib.SubSystemTib);
  v5 = NtCurrentTeb();
  v6 = v5->WowTebOffset;
  if ( v4 )
  {
    if ( (int)v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return (ULONG)v5->glDispatchTable[167];
  }
  else
  {
    if ( (int)v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return v5->HardErrorMode;
  }
}
