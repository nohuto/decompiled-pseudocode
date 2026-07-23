/*
 * XREFs of RtlSparseBitmapEnumerateBitmap @ 0x1801009D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF20 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF40 (RtlpSparseBitmapCtxLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpSparseBitmapRangeArrayCleanup @ 0x1801013F4 (RtlpSparseBitmapRangeArrayCleanup.c)
 */

__int64 __fastcall RtlSparseBitmapEnumerateBitmap(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD *, char *, __int64, int *),
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned int v7; // r12d
  int v8; // r15d
  _QWORD *v9; // r14
  char *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  int v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall *v15)(__int64, _QWORD *, char *, __int64, int *); // [rsp+88h] [rbp+10h]
  __int64 v16; // [rsp+90h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 1;
  RtlpSparseBitmapCtxLockExclusive(a1, (_RTL_SRWLOCK *)a1);
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 52) )
    {
      while ( 1 )
      {
        if ( !v7 || !v8 )
        {
LABEL_14:
          v6 = 0LL;
          goto LABEL_17;
        }
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( RtlpSparseBitmapCheckRangeArrayPage(a1, v6) )
          {
            v9 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v6);
            if ( v9 )
            {
              --v8;
              v10 = *(_DWORD *)(a1 + 68) ? (char *)v9 + *(unsigned int *)(a1 + 64) : 0LL;
              v11 = *(unsigned int *)(a1 + 56);
              v14 = 0;
              v7 = v15((unsigned int)v6 * v11, v9 + 1, v10, v16, &v14);
              if ( v14 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = 0LL;
                --*(_DWORD *)(a1 + 48);
                *v9 = v3;
                v3 = v9;
                if ( !*(_DWORD *)(a1 + 48) )
                  break;
              }
            }
          }
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 52) )
          goto LABEL_14;
      }
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      v6 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
  }
LABEL_17:
  RtlpSparseBitmapCtxUnlockExclusive(a1, (_RTL_SRWLOCK *)a1);
  if ( v5 )
    RtlpSparseBitmapRangeArrayCleanup(a1, v5, v6);
  while ( 1 )
  {
    v12 = v3;
    if ( !v3 )
      break;
    v3 = (_QWORD *)*v3;
    (*(void (__fastcall **)(_QWORD *))(a1 + 40))(v12);
  }
  return v7;
}
