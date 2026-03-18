/*
 * XREFs of UnredirectDCEs @ 0x14012E3C8
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x14012DB84 (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  tagDCE *i; // rbx
  __int64 v11; // r9
  __int16 v12; // r10

  if ( !GetStyleWindow(a1, 2848) )
  {
    GreLockVisRgn(v3, v2, v4);
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
    for ( i = *(tagDCE **)(v8 + 24); ; i = *(tagDCE **)i )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 24LL;
      if ( i == (tagDCE *)v8 )
        return GreUnlockVisRgn(v8);
      if ( (*((_DWORD *)i + 12) & 0x4400800) == 0 && *((_QWORD *)i + 10) )
      {
        if ( (unsigned int)IsDesktopWindow(a1) )
        {
          if ( a1 != v11 )
            continue;
        }
        else
        {
          while ( a1 != v11 )
          {
            v8 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF;
            if ( (_DWORD)v8 == 669 )
              goto LABEL_4;
            v11 = *(_QWORD *)(v11 + 104);
          }
        }
        LOBYTE(v8) = (v12 & 0x1000) == 0;
        if ( ((unsigned __int8)v8 & ((v12 & 2) != 0)) == 0 )
          UpdateRedirectedDCE(i);
      }
LABEL_4:
      ;
    }
  }
  return ChangeRedirectionParentInDCEs(a1, 0LL, v4);
}
