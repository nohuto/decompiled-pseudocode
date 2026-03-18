/*
 * XREFs of UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C000CB60
 * Callers:
 *     UsbhSsh_CheckHubIdle @ 0x1C000CAE0 (UsbhSsh_CheckHubIdle.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhSsh_CheckPortChangeQueuesIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdx
  unsigned __int16 i; // bx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  KIRQL v14; // al
  bool v15; // zf
  KSPIN_LOCK *v16; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5, a3, a4);
  for ( i = 1; ; ++i )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
      UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
    if ( *(_DWORD *)v7 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v7, a3, a4);
    if ( i > *(unsigned __int8 *)(v7 + 2938) )
      return 0LL;
    v8 = (unsigned int)UsbhLogMask;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v9 = 1413771367;
      *(_QWORD *)(v9 + 16) = i;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      v8 = (unsigned int)UsbhLogMask;
    }
    if ( i )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( !v10 )
        UsbhTrapFatal_Dbg(a1, 0LL, v8, a4);
      if ( *(_DWORD *)v10 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v10, v8, a4);
      if ( i > *(unsigned __int8 *)(v10 + 2938) )
      {
        v12 = 0LL;
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 3056);
        if ( v11 )
        {
          v12 = v11 + 2928LL * (i - 1);
          if ( (v8 & 8) != 0 )
          {
            v13 = *(_QWORD *)(v10 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
            *(_DWORD *)v13 = 1044672615;
            *(_QWORD *)(v13 + 16) = i;
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)(v13 + 24) = v12;
          }
        }
        else
        {
          v12 = 0LL;
        }
      }
    }
    else
    {
      v12 = 0LL;
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 440));
    *(_DWORD *)(v12 + 448) = 1;
    v15 = *(_QWORD *)(v12 + 456) == v12 + 456;
    v16 = (KSPIN_LOCK *)(v12 + 440);
    *(_DWORD *)(v12 + 448) = 0;
    if ( !v15 )
      break;
    KeReleaseSpinLock(v16, v14);
  }
  KeReleaseSpinLock(v16, v14);
  return 3221225473LL;
}
