/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1401791D4
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int i; // ebp
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = InternalBeginDeferWindowPos(*(unsigned int *)(a1 + 28));
  if ( v2 )
  {
    memmove(*(void **)(v2 + 40), *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_QWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 28) = v3;
    for ( i = v3 - 1; i >= 0; --i )
    {
      if ( (*(_DWORD *)(v4 + 156) & 0x20) != 0 )
      {
        if ( *(_QWORD *)v4 )
        {
          v6 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
          if ( v6 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL);
            if ( v7 != *(_QWORD *)(v4 + 128) )
              *(_QWORD *)(v4 + 128) = v7;
          }
        }
      }
      v4 += 168LL;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  Win32FreePool((void *)a1);
}
