/*
 * XREFs of IsHotKey @ 0x1C0049900
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D7888 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     GetDesktopView @ 0x1C007F0F0 (GetDesktopView.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(unsigned int a1, unsigned int a2)
{
  struct tagHOTKEY * near *i; // rbx
  struct tagHOTKEY *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    if ( __PAIR64__(*((_DWORD *)i + 7), *((unsigned __int16 *)i + 12)) == __PAIR64__(a2, a1) )
      break;
  }
  v3 = *i;
  if ( (*((_DWORD *)*i + 112) & 0xC) != 0 )
    return i;
  v4 = *((_QWORD *)v3 + 48);
  if ( GetDesktopView(v4, grpdeskRitInput) )
  {
    if ( ((_WORD)i[3] & 0xE00B) == 0 )
    {
      if ( gpqForeground )
      {
        v6 = *(_QWORD *)(gpqForeground + 372LL);
        v7 = *(_QWORD *)(v4 + 832);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v7 <= (unsigned int)v6 )
          {
            if ( (_DWORD)v7 != (_DWORD)v6
              || (v8 = HIDWORD(v7), v9 = HIDWORD(v6), (_DWORD)v8 != (_DWORD)v9) && (_DWORD)v8 != -1 && (_DWORD)v9 != -1 )
            {
              EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 7);
              return 0LL;
            }
          }
        }
      }
    }
    return i;
  }
  return 0LL;
}
