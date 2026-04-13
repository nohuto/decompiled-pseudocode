/*
 * XREFs of pfnti @ 0x1800092B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A240 @ 0x18000A240 (sub_18000A240.c)
 */

void __fastcall pfnti(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rbx

  if ( *((_BYTE *)Context + 97) )
  {
    v4 = 0LL;
    AcquireSRWLockExclusive(&SRWLock);
    if ( *((_BYTE *)Context + 97) )
    {
      byte_18003A096 = 0;
      v4 = Context[3];
      if ( v4 )
      {
        Context[3] = *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v4 + 24) = 0LL;
        if ( Context[4] == v4 )
          Context[4] = 0LL;
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v4 )
      sub_18000A240(v4);
  }
}
