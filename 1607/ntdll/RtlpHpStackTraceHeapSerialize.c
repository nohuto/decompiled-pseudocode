/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x1800F8670
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180042420 (RtlRunOnceBeginInitialize.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  _RTL_RUN_ONCE *v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // r8
  __int64 (__fastcall *v7)(__int64 *, __int64, __int64); // rax
  __int64 result; // rax
  _BYTE *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _BYTE *i; // rdx
  __int64 v14; // r8
  _QWORD *v15; // [rsp+28h] [rbp-48h]
  _BYTE *v16; // [rsp+30h] [rbp-40h]
  PVOID Context; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v4 = (_RTL_RUN_ONCE *)(a1 + 136);
  else
    v4 = (_RTL_RUN_ONCE *)(a1 + 368);
  if ( RtlRunOnceBeginInitialize(v4, 1u, &Context) >= 0 )
  {
    v5 = Context;
    v6 = *(_QWORD *)(a2 + 24);
    v20 = 0LL;
    v19 = 524289LL;
    HIDWORD(v19) = *((_DWORD *)Context + 2);
    v7 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v20 = a1;
    result = v7(&v19, 16LL, v6);
    if ( (int)result < 0 )
      return result;
    v9 = (_BYTE *)v5[2];
    v10 = v9;
    v16 = v9;
    v15 = v9;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_12;
      if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v9 = v16;
        v10 = v15;
      }
      v11 = (_QWORD *)*v10;
      if ( (*v10 & 1) != 0 )
      {
LABEL_12:
        for ( i = v9 + 8; ; i += 8 )
        {
          if ( (unsigned __int64)i >= v5[2] + 8 * ((unsigned __int64)*((unsigned int *)v5 + 3) >> 5) )
          {
            v12 = 0LL;
            goto LABEL_17;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v10 = *(_QWORD **)i;
        v9 = i;
        v15 = *(_QWORD **)i;
        v12 = *(_QWORD **)i;
        v16 = i;
      }
      else
      {
        v10 = (_QWORD *)*v10;
        v15 = v11;
        v12 = v11;
      }
LABEL_17:
      if ( !v12 )
        break;
      v14 = *(_QWORD *)(a2 + 24);
      v18[0] = v12[1];
      v18[1] = v12[2];
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(a2 + 16))(v18, 16LL, v14);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
