/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C00B35E0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 */

unsigned __int64 __fastcall HmgNextGarbageCollectible(__int64 a1, _BYTE *a2, int a3)
{
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rbx

  v4 = a1;
  GreAcquireHmgrSemaphore(a1, (int)a2, a3);
  v7 = (unsigned int)v4 + 1;
  if ( (unsigned int)v7 >= gcMaxHmgr )
  {
LABEL_6:
    v8 = 0LL;
  }
  else
  {
    v6 = 3 * v7;
    v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v7;
    while ( 1 )
    {
      if ( *(_DWORD *)(v5 + 8) == -2147483630 )
      {
        v6 = *(unsigned __int16 *)(*(_QWORD *)v5 + 14LL);
        if ( (v6 & 0x4000) != 0 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      v5 += 24LL;
      if ( (unsigned int)v7 >= gcMaxHmgr )
        goto LABEL_6;
    }
    *a2 = *(_BYTE *)(v5 + 14);
    v8 = (int)v7 | (unsigned __int64)(*(unsigned __int16 *)(v5 + 12) << 16);
  }
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v8;
}
