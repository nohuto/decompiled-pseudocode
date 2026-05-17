/*
 * XREFs of RtlGetProcessHeaps @ 0x180090E70
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E9910 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18004E4CC (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlGetProcessHeaps(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+30h] [rbp-18h]

  v10 = 0;
  v9 = a2;
  v8 = a2 + 8LL * a1;
  RtlpEnumProcessHeaps((__int64)RtlGetProcessHeapsCallback, (__int64)&v8, 2);
  v4 = v9 - a2;
  v5 = v10;
  v6 = v4 >> 3;
  if ( dword_18014C3F8 )
    v5 += ((__int64 (__fastcall *)(_QWORD))qword_18014C440)(a1 - (unsigned int)v6);
  return v5;
}
