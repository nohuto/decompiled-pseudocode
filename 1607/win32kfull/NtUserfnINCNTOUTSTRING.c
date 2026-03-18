/*
 * XREFs of NtUserfnINCNTOUTSTRING @ 0x1C021C840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned __int16 *v11; // rax
  signed int v12; // edx
  __int64 result; // rax
  int v14; // [rsp+48h] [rbp-20h] BYREF
  int v15; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int16 *v16; // [rsp+50h] [rbp-18h]

  v15 = (a7 << 31) | v15 & 0x7FFFFFFF;
  v11 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v11 = (unsigned __int16 *)W32UserProbeAddress;
  v12 = *v11 | v15 & 0x80000000;
  v15 = v12;
  if ( !a7 )
  {
    v12 ^= (v12 ^ (2 * v12)) & 0x7FFFFFFF;
    v15 = v12;
  }
  if ( (v12 & 0x7FFFFFFFu) < 2 )
    return 0LL;
  v14 = 0;
  v16 = a4;
  ProbeForWrite(a4, v12 & 0x7FFFFFFF, 2 - (v12 < 0));
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v14,
             a5);
  if ( !result )
  {
    if ( a7 )
      *(_BYTE *)a4 = 0;
    else
      *a4 = 0;
  }
  return result;
}
