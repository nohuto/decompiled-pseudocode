/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1401C8B10
 * Callers:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( !*(_DWORD *)(v2 + 1328) )
    return 1;
  if ( *(_QWORD *)(v2 + 1336) )
  {
LABEL_7:
    if ( *(_DWORD *)(v2 + 1328) && !*(_QWORD *)(v2 + 1336) )
      return v3;
    return 1;
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2) )
  {
    RIMFindMonitorForDigitizer(v2, a1, 1LL);
    goto LABEL_7;
  }
  return 0LL;
}
