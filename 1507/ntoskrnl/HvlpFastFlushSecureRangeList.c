/*
 * XREFs of HvlpFastFlushSecureRangeList @ 0x1401EDFF0
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall HvlpFastFlushSecureRangeList(unsigned __int64 *a1, unsigned int a2)
{
  char v4; // bl
  _KPROCESS *Process; // rbp
  unsigned __int64 *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x68uLL);
  if ( !a2 )
    return 0;
  v6 = &v10[2];
  v7 = a2;
  do
  {
    v8 = *a1++;
    *v6++ = v8;
    if ( v8 <= (unsigned __int64)MmHighestUserAddress )
      v4 = 1;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
    return 0;
  v10[1] = Process->SecurePid;
  return HvlpEnterIumSecureMode(1u, 225, 0, (unsigned __int8 *)v10);
}
