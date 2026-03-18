/*
 * XREFs of LockDesktopMenu @ 0x1C0128B90
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0231F9C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // rcx

  if ( !a2 || !*(_DWORD *)(a2 + 52) || !*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    return 0LL;
  *(_DWORD *)(a2 + 40) |= 0x40u;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL) + 24LL) + 16LL);
  HMChangeOwnerPheProcess(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a2, v4);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 80) + 16LL);
  v5[10] |= 0x40u;
  HMChangeOwnerPheProcess(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v5, v4);
  HMAssignmentLock(a1, a2);
  return 1LL;
}
