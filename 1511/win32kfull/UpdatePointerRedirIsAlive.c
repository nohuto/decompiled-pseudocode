/*
 * XREFs of UpdatePointerRedirIsAlive @ 0x1C0068228
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     IsPointerInputRedirected @ 0x1C01FBE2C (IsPointerInputRedirected.c)
 *     _RegisterPointerInputTarget @ 0x1C01FBEF8 (_RegisterPointerInputTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall UpdatePointerRedirIsAlive(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned int i; // ebx
  __int64 v4; // rdx
  char result; // al

  v2 = (__int64 *)(a1 + 208);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *(char *)(v4 + 44) < 0 || (result = *(_BYTE *)(v4 + 43), result < 0) )
        result = HMAssignmentUnlock(a1 + 8 * (i + 26LL));
    }
    ++v2;
  }
  return result;
}
