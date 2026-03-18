/*
 * XREFs of FreeDdeXact @ 0x1C01E2B30
 * Callers:
 *     FindQMsg @ 0x1C00835A0 (FindQMsg.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01E1A18 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B4DE4 (GreDeleteServerMetaFile.c)
 */

__int64 __fastcall FreeDdeXact(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 16) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_QWORD *)(v5 + 48));
      if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 74LL), *(void **)(*(_QWORD *)(a1 + 56) + 48LL));
        *(_DWORD *)(a1 + 64) &= ~0x2000u;
      }
      Win32FreePool(*(_QWORD *)(a1 + 56), v3, v4);
    }
    return HMFreeObject(a1);
  }
  return result;
}
