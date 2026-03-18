/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01EEEB0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01EE3CC (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE850 (-xxxMKButtonSetState@@YAHG@Z.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys()
{
  BOOL v0; // edi
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int16 v3; // bx
  __int64 v4; // rcx

  v0 = 1;
  if ( (gdwPUDFlags & 0x2000) == 0 )
  {
    if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) == 17 )
    {
      if ( (xmmword_1C032229C & 4) != 0 )
      {
        v0 = gbMKMouseMode != 0;
        TurnOffMouseKeys();
      }
    }
    else
    {
      v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      v2 = *(_QWORD *)(v1 + 384);
      if ( (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)gNumLockVk >> 2]) != 0) != (unsigned __int8)xmmword_1C032229C >> 7 )
      {
        gbMKMouseMode = 0;
        PostEventMessageEx(v1, v2, 0xEu, 0LL, 2u, 0LL, 0LL, 0LL);
        v3 = gwMKCurrentButton;
        gwMKCurrentButton = 3;
        xxxMKButtonSetState(1u);
        gwMKCurrentButton = v3;
      }
      else
      {
        gbMKMouseMode = 1;
        PostEventMessageEx(v1, v2, 0xEu, 0LL, 3u, 0LL, 0LL, 0LL);
      }
      v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      PostEventMessageEx(v4, *(_QWORD *)(v4 + 384), 0xDu, 0LL, 0, 11LL, 3LL, 0LL);
    }
  }
  return v0;
}
