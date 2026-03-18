/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x14067D47C
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     Template_hzr0qqhzr4 @ 0x1401FA878 (Template_hzr0qqhzr4.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeviceRemovalForResetComplete(_QWORD *P, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rdx

  v3 = P[21];
  v4 = *((_DWORD *)P + 41);
  v6 = *(_QWORD *)(v3 + 144);
  if ( v4 >= 0 || !*((_DWORD *)P + 40) )
  {
    if ( v6 )
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
    else
      v7 = 0LL;
    v8 = *(_DWORD **)(v3 + 48);
    if ( v8 && (a3 = *(_QWORD *)(v3 + 56)) != 0 )
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
        Template_hzr0qqhzr4(
          *(_WORD *)a3 >> 1,
          v7,
          a3,
          *(_WORD *)(v7 + 40) >> 1,
          *(_QWORD *)(v7 + 48),
          v4,
          *v8,
          *(_WORD *)a3 >> 1,
          *(_QWORD *)(a3 + 8));
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      Template_hzr0qqhzr4((__int64)P, v7, a3, *(_WORD *)(v7 + 40) >> 1, *(_QWORD *)(v7 + 48), v4, -1, 0, 0LL);
    }
  }
  if ( v4 >= 0 || (v9 = *((_DWORD *)P + 44), v9 >= PnpResetMaximumRetryAttempts) )
  {
    ExFreePoolWithTag(P, 0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v3, 0x4B706E50u);
  }
  else
  {
    v10 = PnpResetRetryInterval;
    *((_DWORD *)P + 44) = v9 + 1;
    *((_DWORD *)P + 40) = v4;
    KiSetTimerEx((__int64)P, v10, 0, 0, (__int64)(P + 8));
  }
}
