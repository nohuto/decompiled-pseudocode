/*
 * XREFs of KeyboardClassDequeueRead @ 0x1C0002880
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0002920 (KeyboardClassServiceCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardClassDequeueRead(__int64 a1)
{
  __int64 **v1; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rax

  v1 = (__int64 **)(a1 + 168);
  while ( *v1 != (__int64 *)v1 )
  {
    v3 = *v1;
    v4 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v1 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v1;
    if ( _InterlockedExchange64(v3 - 8, 0LL) )
    {
      if ( v3 != (__int64 *)168 )
        return nullsub_1();
    }
    else
    {
      v3[1] = (__int64)v3;
      *v3 = (__int64)v3;
    }
  }
  return nullsub_1();
}
