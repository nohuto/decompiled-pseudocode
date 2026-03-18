/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8D40
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MouseKeys(struct tagKE *a1)
{
  unsigned __int8 v1; // di
  int v2; // r9d
  int v3; // r8d
  __int64 v5; // rcx
  __int16 v6; // dx
  unsigned int v7; // ebx
  int v8; // esi
  _WORD *v9; // rcx
  __int64 i; // rax
  __int16 v11; // dx

  v1 = *((_BYTE *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  if ( (xmmword_1C0326F04 & 1) == 0 )
  {
    if ( (xmmword_1C0326F04 & 4) != 0 && v1 == gNumLockVk && (*((_WORD *)a1 + 1) & 0x8000) == 0 && v3 == 17 )
    {
      gMKPreviousVk = *((_BYTE *)a1 + 2);
      if ( (xmmword_1C0326F04 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
        PostEventMessageEx(v5, *(_QWORD *)(v5 + 384), 0xEu, 0LL, 0, 0LL, 0LL, 0LL);
      }
      PostWinlogonMessage(1026LL, 3LL);
      return 0LL;
    }
    return 1LL;
  }
  v6 = *((unsigned __int8 *)a1 + 2);
  v7 = 0;
  v8 = 0;
  v9 = (_WORD *)gpusMouseVKey;
  for ( i = 0LL; i < 16; ++i )
  {
    if ( v6 == *v9 )
      break;
    ++v8;
    ++v9;
  }
  if ( v8 == 16 )
    return 1LL;
  v11 = gNumLockVk;
  if ( !gbMKMouseMode && v1 != gNumLockVk )
    return 1LL;
  if ( v1 == 46 && (v3 & 0x30) != 0 && (v3 & 0xC) != 0 )
    return 1LL;
  if ( v2 )
  {
    if ( gMKPreviousVk == v1 )
    {
      if ( gtmridMKMoveCursor )
      {
        FindTimer(0, gtmridMKMoveCursor, 4, 1, 0LL);
        v11 = gNumLockVk;
        gtmridMKMoveCursor = 0LL;
      }
      gMKPreviousVk = 0;
      gdwPUDFlags &= ~0x2000u;
    }
    LOBYTE(v7) = (unsigned __int16)v1 == v11;
    return v7;
  }
  else
  {
    if ( gMKPreviousVk == v1 )
      gdwPUDFlags |= 0x2000u;
    else
      gdwPUDFlags &= ~0x2000u;
    if ( (gdwPUDFlags & 0x2000) == 0 && gtmridMKMoveCursor )
    {
      FindTimer(0, gtmridMKMoveCursor, 4, 1, 0LL);
      gtmridMKMoveCursor = 0LL;
    }
    gMKPreviousVk = v1;
    return off_1C02E5310[v8](word_1C02F0128[v8]);
  }
}
