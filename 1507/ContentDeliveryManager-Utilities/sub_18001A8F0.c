/*
 * XREFs of sub_18001A8F0 @ 0x18001A8F0
 * Callers:
 *     sub_18001A150 @ 0x18001A150 (sub_18001A150.c)
 *     sub_18001FA20 @ 0x18001FA20 (sub_18001FA20.c)
 *     sub_18001FA60 @ 0x18001FA60 (sub_18001FA60.c)
 *     sub_18001FAF0 @ 0x18001FAF0 (sub_18001FAF0.c)
 *     sub_18001FBF0 @ 0x18001FBF0 (sub_18001FBF0.c)
 *     sub_18001FC60 @ 0x18001FC60 (sub_18001FC60.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001A8F0(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rdx
  unsigned int v4; // edi
  bool v5; // zf
  __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 23);
  if ( v3 < 0 )
  {
    do
LABEL_8:
      a3 = *(unsigned int *)(2 * v3 + 0x10);
    while ( (_DWORD)a3 != 0x7FFFFFFF
         && (_DWORD)a3 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v3 + 16), a3 - 1, a3) );
    v4 = a3 - 1;
LABEL_10:
    if ( !v4 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64, __int64, __int64))(*a1 + 88))(
          a1,
          1LL,
          a3,
          0x7FFFFFFFLL);
      if ( qword_18003AC80 )
        _InterlockedDecrement(&dword_18003AC88);
    }
  }
  else
  {
    while ( (_DWORD)v3 != 0x7FFFFFFF )
    {
      v4 = v3 - 1;
      v6 = _InterlockedCompareExchange64(a1 + 23, v3 - 1, v3);
      v5 = v3 == v6;
      v3 = v6;
      if ( v5 )
        goto LABEL_10;
      if ( v6 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v4;
}
