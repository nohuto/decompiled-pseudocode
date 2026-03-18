/*
 * XREFs of PsEqualCurrentServerSilo @ 0x140079760
 * Callers:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x1404F4B94 (SepBlockAccessForLogonSession.c)
 *     SepMakeLogonSessionsSiblings @ 0x1406543DC (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsEqualCurrentServerSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 i; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    for ( i = CurrentThread->Process[1].Affinity.Bitmap[16]; i; i = *(_QWORD *)(i + 1064) )
    {
      if ( *(_QWORD *)(i + 1248) )
        break;
    }
  }
  else
  {
    i = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  }
  v4 = 0LL;
  if ( i )
  {
    do
    {
      v6 = *(_QWORD *)(i + 1248);
      if ( *(_QWORD *)(v6 + 136) )
        break;
      i = *(_QWORD *)(v6 + 128);
    }
    while ( i );
  }
  else
  {
    i = 0LL;
  }
  if ( a1 )
  {
    while ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 1248);
      if ( *(_QWORD *)(v7 + 136) )
        break;
      a1 = *(_QWORD *)(v7 + 128);
    }
    v4 = a1;
  }
  return i == v4;
}
