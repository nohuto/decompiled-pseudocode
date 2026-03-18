/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C02224E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        SIZE_T a3,
        _WORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  int v10; // r10d
  __int64 v11; // rbx
  SIZE_T v12; // rdx
  int v14; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+44h] [rbp-14h]
  _WORD *v16; // [rsp+48h] [rbp-10h]

  v10 = (((a7 << 31) | v15 & 0x7FFFFFFF) ^ a3) & 0x7FFFFFFF ^ ((a7 << 31) | v15 & 0x7FFFFFFF);
  v15 = v10;
  v11 = 0LL;
  if ( !a7 )
  {
    v10 ^= (v10 ^ (2 * v10)) & 0x7FFFFFFF;
    v15 = v10;
  }
  if ( (v10 & 0x7FFFFFFFu) < 2 || (v12 = v10 & 0x7FFFFFFF, v12 < a3) )
  {
    UserSetLastError(87);
  }
  else
  {
    v14 = 0;
    v16 = a4;
    ProbeForWrite(a4, v12, 2 - (v10 < 0));
    *v16 = 0;
    return ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v14,
             a5);
  }
  return v11;
}
