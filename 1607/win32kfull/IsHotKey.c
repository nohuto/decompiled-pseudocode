/*
 * XREFs of IsHotKey @ 0x1C00A3B48
 * Callers:
 *     IsUninterceptable @ 0x1C00A2484 (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01D0210 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     GetDesktopView @ 0x1C009A590 (GetDesktopView.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  struct tagHOTKEY * near *i; // rbx
  struct tagHOTKEY *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    if ( *((unsigned __int16 *)i + 12) == a1 && *((_DWORD *)i + 7) == a2 )
      break;
  }
  v3 = *i;
  if ( (*((_DWORD *)*i + 110) & 0xC) != 0 )
    return i;
  v4 = *((_QWORD *)v3 + 47);
  if ( GetDesktopView(v4, grpdeskRitInput) )
  {
    if ( ((_BYTE)i[3] & 0xB) == 0 )
    {
      if ( gpqForeground )
      {
        v5 = *(_QWORD *)(gpqForeground + 380LL);
        v6 = *(_QWORD *)(v4 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v6 <= (unsigned int)v5 )
          {
            if ( (_DWORD)v6 != (_DWORD)v5
              || (v7 = HIDWORD(v6), v8 = HIDWORD(v5), (_DWORD)v7 != (_DWORD)v8) && (_DWORD)v8 != -1 && (_DWORD)v7 != -1 )
            {
              EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 7);
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
