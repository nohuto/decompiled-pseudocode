/*
 * XREFs of KeConnectInterrupt @ 0x140122784
 * Callers:
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 * Callees:
 *     KeDisconnectInterrupt @ 0x140115AA4 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x14012286C (KiConnectInterrupt.c)
 *     KiIntSteerEnable @ 0x140122AD4 (KiIntSteerEnable.c)
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x1401230BC (KiIsInterruptTypeSecondary.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1401C6918 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1401C6E5C (KiUnmaskSecondaryInterruptInternal.c)
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
        if ( (int)off_1402D2950() < 0 )
          return 295;
        v14 = IsInterruptTypeSecondary
            ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v15, v13)
            : off_1402D27E8();
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
