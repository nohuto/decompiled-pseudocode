/*
 * XREFs of NtUserfnOUTSTRING @ 0x1C00FB4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTSTRING(__int64 a1, unsigned int a2, SIZE_T a3, _BYTE *a4, __int64 a5, char a6, int a7)
{
  int v11; // r10d
  SIZE_T v12; // rdx
  ULONG v13; // r8d
  __int64 v14; // rbx
  int v16; // [rsp+48h] [rbp-20h] BYREF
  int v17; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v18; // [rsp+50h] [rbp-18h]

  v11 = (((a7 << 31) | v17 & 0x7FFFFFFF) ^ a3) & 0x7FFFFFFF ^ ((a7 << 31) | v17 & 0x7FFFFFFF);
  v17 = v11;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v17 = v11;
  }
  v12 = v11 & 0x7FFFFFFF;
  if ( v12 < a3 )
  {
    v14 = 0LL;
    UserSetLastError(0LL);
    return v14;
  }
  v16 = 0;
  v18 = a4;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    v13 = 2 - (v11 < 0);
  }
  else
  {
    if ( !a4 )
      goto LABEL_10;
    v13 = 2 - ((unsigned int)v11 >> 31 != 0);
    v12 = 2LL - ((unsigned int)v11 >> 31 != 0);
  }
  ProbeForWrite(a4, v12, v13);
LABEL_10:
  v14 = ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          &v16,
          a5);
  if ( !v14 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v14;
}
