/*
 * XREFs of HvlpIumEfiRuntimeService @ 0x1401B3808
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 */

unsigned __int64 __fastcall HvlpIumEfiRuntimeService(unsigned int a1, __int64 a2, unsigned int a3, __int128 *a4)
{
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  __int128 v7; // xmm1
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v9; // esi
  __int128 v10; // xmm1
  unsigned __int64 v11; // rbx
  _QWORD v12[8]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int8 v13[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v14; // [rsp+78h] [rbp-41h]
  __int64 v15; // [rsp+80h] [rbp-39h]
  __int64 v16; // [rsp+88h] [rbp-31h]
  unsigned __int64 v17; // [rsp+90h] [rbp-29h]
  __int128 v18; // [rsp+98h] [rbp-21h]
  __int128 v19; // [rsp+A8h] [rbp-11h]

  memset(v12, 0, sizeof(v12));
  v4 = a1;
  if ( a2 )
  {
    LODWORD(result) = HvlpLockPagesForTransfer(v12, a2, a3, 2LL, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v15 = v12[0];
  v16 = v12[7];
  v14 = v4;
  if ( a4 )
  {
    v7 = a4[1];
    v18 = *a4;
    v19 = v7;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&HvlpIumEfiLock);
  v9 = HvlpEnterIumSecureMode(1u, 232, 0, v13);
  ExReleaseSpinLockExclusiveFromDpcLevel(&HvlpIumEfiLock);
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v10 = v19;
    *a4 = v18;
    a4[1] = v10;
  }
  if ( v9 == -1073741811 )
  {
    v11 = 0x8000000000000002uLL;
  }
  else if ( v9 == -1073741801 )
  {
    v11 = 0x8000000000000009uLL;
  }
  else
  {
    v11 = v17;
    if ( v9 )
      v11 = 0x8000000000000003uLL;
  }
  if ( v12[0] )
    HvlpUnlockPagesForTransfer(v12);
  return v11;
}
