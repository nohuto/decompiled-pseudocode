/*
 * XREFs of CanForceForeground @ 0x1C009AF60
 * Callers:
 *     _AllowSetForegroundWindow @ 0x1C0099100 (_AllowSetForegroundWindow.c)
 *     CheckAllowForeground @ 0x1C009AD00 (CheckAllowForeground.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00AAC64 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _LockSetForegroundWindow @ 0x1C01CAB60 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CanForceForeground(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  _QWORD *v3; // r8

  v1 = 0;
  v2 = glinp[8];
  if ( !v2 )
    return 1LL;
  v3 = *(_QWORD **)(v2 + 376);
  if ( v3 == (_QWORD *)a1
    || !gptiForeground
    || *(_QWORD *)(gptiForeground + 376LL) == a1
    || (*(_DWORD *)(a1 + 12) & 0x80100) != 0
    || a1 == gppiInputProvider
    || !gpqForeground
    || !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*v3) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 376LL))) )
  {
    return 1LL;
  }
  LOBYTE(v1) = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - *(_DWORD *)(gpsi + 5376LL) > *(_DWORD *)UPDWORDPointer(0x2000LL);
  return v1;
}
