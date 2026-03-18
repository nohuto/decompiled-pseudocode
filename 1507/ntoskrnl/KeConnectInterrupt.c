/*
 * XREFs of KeConnectInterrupt @ 0x140155538
 * Callers:
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x140155620 (KiConnectInterrupt.c)
 *     KiIntSteerEnable @ 0x140155888 (KiIntSteerEnable.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x140155F14 (KiIsInterruptTypeSecondary.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x140203414 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140203B50 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  char v6; // bp
  unsigned __int8 v7; // di
  char IsInterruptTypeSecondary; // r13
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  if ( a2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a1[v7] + 104) &= ~1u;
      v9 = IsInterruptTypeSecondary ? KiConnectSecondaryInterrupt() : KiConnectInterrupt();
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( v9 == 295 )
        v6 = 1;
      if ( ++v7 >= a2 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v11 = KiIntSteerConnect(a1, a2, a3 + 8);
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        if ( (int)off_140321AA0() < 0 )
          return 295;
        v14 = IsInterruptTypeSecondary
            ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v15, v13)
            : off_140321938();
        v11 = v14;
        if ( v14 >= 0 )
          return 295;
      }
      else
      {
        v11 = HalEnableInterrupt(a3);
        if ( v11 >= 0 )
        {
          KiIntSteerEnable(a1, a2);
          return (unsigned int)v11;
        }
      }
    }
  }
  if ( v7 )
  {
    LOBYTE(v10) = v7;
    KeDisconnectInterrupt(a1, v10, a3);
  }
  return (unsigned int)v11;
}
