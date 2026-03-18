/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B5D8
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AF9C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

void __fastcall RefreshMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 1136) + 8LL);
  if ( *(_QWORD *)a1 != v4 )
  {
    v6 = ValidateHwnd(v4);
    if ( v6 )
      FindTimer(v6, 65523, 2, 1, 0LL);
    *(_QWORD *)(*(_QWORD *)(v1 + 1136) + 8LL) = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(v1 + 1136) + 16LL) = v3 - 101;
  }
  v5 = *(_QWORD *)(v1 + 1136);
  if ( (unsigned int)(v3 - *(_DWORD *)(v5 + 16)) > 0x64 )
  {
    *(_DWORD *)(v5 + 16) = v3;
    SetSystemTimer((_DWORD)a1, 65523, 1150, (unsigned int)MiPIdleTimerFunc, 1);
  }
}
