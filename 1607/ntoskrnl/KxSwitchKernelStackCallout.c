/*
 * XREFs of KxSwitchKernelStackCallout @ 0x140161DF0
 * Callers:
 *     KiSwitchKernelStackAndCallout @ 0x140161D60 (KiSwitchKernelStackAndCallout.c)
 * Callees:
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 */

void __fastcall KxSwitchKernelStackCallout(
        __int64 a1,
        void (*a2)(void),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( !a4 || !(unsigned int)MmGrowKernelStackEx((__int64)&retaddr, a4) )
    a2();
  v8 = (_QWORD *)v7[5];
  _disable();
  v7[7] = v8[2];
  v7[6] = v8[3];
  v9 = v8[5];
  v7[5] = v9;
  if ( (KiKvaShadow & 1) != 0 )
    __writegsqword(0x7008u, v9);
  else
    *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v9;
  __writegsqword(0x1A8u, v9);
  _enable();
  JUMPOUT(0x140161DDDLL);
}
