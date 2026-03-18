/*
 * XREFs of PostInertiaMessage @ 0x1C02398B8
 * Callers:
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F4E30 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     _PostThreadMessage @ 0x1C0090EB0 (_PostThreadMessage.c)
 */

__int64 __fastcall PostInertiaMessage(unsigned int a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 - 571 <= 1 )
  {
    v8 = ValidateHwnd(a2);
    if ( v8 )
    {
      if ( *(char *)(v8 + 44) >= 0 && *(char *)(v8 + 43) >= 0 )
      {
        if ( !a3 )
          return PostMessage(
                   v8,
                   a1,
                   a4,
                   (struct _LARGE_STRING *)((unsigned __int16)a5 | (unsigned __int64)(WORD2(a5) << 16)));
        v9 = *(_QWORD *)(v8 + 312);
        if ( v9 )
          return PostThreadMessage(
                   v9,
                   a1,
                   (LARGE_INTEGER)a4,
                   (LARGE_INTEGER)((unsigned __int16)a5 | (unsigned __int64)(WORD2(a5) << 16)));
      }
    }
  }
  return 0LL;
}
