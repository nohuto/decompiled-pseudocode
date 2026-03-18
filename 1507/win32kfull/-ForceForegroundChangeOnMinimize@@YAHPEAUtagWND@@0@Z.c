/*
 * XREFs of ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C003E5C4
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 */

_BOOL8 __fastcall ForceForegroundChangeOnMinimize(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  _BOOL8 result; // rax

  v3 = *((_QWORD *)a1 + 2);
  result = 0;
  if ( (*(_DWORD *)(v3 + 1080) & 0x40000) != 0 && *(struct tagWND **)(v3 + 1232) == a1 )
  {
    v4 = *(_QWORD *)(v3 + 392);
    if ( v4 == gpqForeground && *(struct tagWND **)(v4 + 80) == a1 )
    {
      v5 = *(_QWORD *)(v3 + 1240);
      if ( v5 )
      {
        if ( *(_QWORD *)(v5 + 16) == gptiForeground
          && *(_QWORD *)(*((_QWORD *)a2 + 2) + 392LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v3 + 384)) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
