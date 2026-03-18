/*
 * XREFs of UsingPenCursors @ 0x1401B49C0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     ?IsCursorImageSuppressed@@YA_NXZ @ 0x1401B4954 (-IsCursorImageSuppressed@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsingPenCursors(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36344);
  if ( *(_DWORD *)(v4 + 88) || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 36344) + 92LL) )
    return 1;
  return v2;
}
