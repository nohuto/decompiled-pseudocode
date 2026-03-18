/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0006938
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0006310 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 */

void __fastcall RefreshMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 1120) + 8LL);
  if ( *(_QWORD *)a1 != v4 )
  {
    v5 = ValidateHwnd(v4);
    if ( v5 )
      FindTimer(v5, 65523, 2, 1, 0LL);
    *(_QWORD *)(*(_QWORD *)(v1 + 1120) + 8LL) = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(v1 + 1120) + 16LL) = v3 - 101;
  }
  v6 = *(_QWORD *)(v1 + 1120);
  if ( (unsigned int)(v3 - *(_DWORD *)(v6 + 16)) > 0x64 )
  {
    *(_DWORD *)(v6 + 16) = v3;
    SetSystemTimer((_DWORD)a1, 65523, 1150, (unsigned int)MiPIdleTimerFunc, 1);
  }
}
