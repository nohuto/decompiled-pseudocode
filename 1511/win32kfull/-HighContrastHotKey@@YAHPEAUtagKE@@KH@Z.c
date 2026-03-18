/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED9C0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1)
{
  char v1; // dl
  int v2; // r8d
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx

  v1 = *((_BYTE *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  v4 = gHighContrast[1];
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 && v1 == 44 && !v2 && v3 == 17 )
    {
      v7 = v4 & 0xFFFFFFFE;
      gHighContrast[1] = v7;
      if ( (v7 & 0x10) != 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
        PostEventMessageEx(v8, *(_QWORD *)(v8 + 384), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
      }
      PostWinlogonMessage(1026LL, 9LL);
    }
    return 1LL;
  }
  if ( (v4 & 4) == 0 || v1 != 44 || v2 || v3 != 17 )
    return 1LL;
  if ( (v4 & 0x10) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v5, *(_QWORD *)(v5 + 384), 0xEu, 0LL, 0, 0LL, 0LL, 0LL);
  }
  PostWinlogonMessage(1026LL, 5LL);
  return 0LL;
}
