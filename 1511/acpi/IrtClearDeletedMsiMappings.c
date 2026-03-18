/*
 * XREFs of IrtClearDeletedMsiMappings @ 0x1C006BADC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetBusSlotNumber @ 0x1C006BED8 (PcisuppGetBusSlotNumber.c)
 */

NTSTATUS __fastcall IrtClearDeletedMsiMappings(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID Owner; // r10
  _DWORD *UserData; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v6; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v7; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v8; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+78h] [rbp+3Fh] BYREF
  int v12; // [rsp+80h] [rbp+47h]

  result = RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  while ( Range )
  {
    Owner = Range->Owner;
    if ( Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          if ( (UserData[1] & 8) != 0 && UserData[2] == 3 )
          {
            if ( (int)PcisuppGetBusSlotNumber(
                        (_DWORD)Owner,
                        (unsigned int)&v7,
                        (unsigned int)&v8,
                        (unsigned int)&v6,
                        (__int64)&v11) >= 0 )
            {
              v5 = v8;
              v4 = v7;
            }
            else
            {
              v4 = 0LL;
              v5 = 0LL;
              v7 = 0;
              v8 = 0;
              v11 = 0LL;
              v12 = 0;
              v6 = 0;
            }
            ((void (__fastcall *)(__int64, __int64, __int64 *))HalPrivateDispatchTable[65])(v4, v5, &v11);
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
