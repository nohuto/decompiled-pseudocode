/*
 * XREFs of RtlSparseBitmapEnumerateBitmap @ 0x180100A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE58 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF30 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF50 (RtlpSparseBitmapCtxLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpSparseBitmapRangeArrayCleanup @ 0x1801014B4 (RtlpSparseBitmapRangeArrayCleanup.c)
 */

__int64 __fastcall RtlSparseBitmapEnumerateBitmap(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD *, char *, __int64, int *),
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // r12d
  int v9; // r15d
  _QWORD *v10; // r14
  char *v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall *v16)(__int64, _QWORD *, char *, __int64, int *); // [rsp+88h] [rbp+10h]
  __int64 v17; // [rsp+90h] [rbp+18h]

  v17 = a3;
  v16 = a2;
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 1;
  RtlpSparseBitmapCtxLockExclusive(a1, (char *)a1, a3, a4);
  v9 = *(_DWORD *)(a1 + 48);
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 52) )
    {
      while ( 1 )
      {
        if ( !v8 || !v9 )
        {
LABEL_14:
          v7 = 0LL;
          goto LABEL_17;
        }
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( RtlpSparseBitmapCheckRangeArrayPage(a1, v7) )
          {
            v10 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v7);
            if ( v10 )
            {
              --v9;
              v11 = *(_DWORD *)(a1 + 68) ? (char *)v10 + *(unsigned int *)(a1 + 64) : 0LL;
              v12 = *(unsigned int *)(a1 + 56);
              v15 = 0;
              v8 = v16((unsigned int)v7 * v12, v10 + 1, v11, v17, &v15);
              if ( v15 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = 0LL;
                --*(_DWORD *)(a1 + 48);
                *v10 = v4;
                v4 = v10;
                if ( !*(_DWORD *)(a1 + 48) )
                  break;
              }
            }
          }
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 52) )
          goto LABEL_14;
      }
      v6 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      v7 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
  }
LABEL_17:
  RtlpSparseBitmapCtxUnlockExclusive(a1, (volatile signed __int64 *)a1);
  if ( v6 )
    RtlpSparseBitmapRangeArrayCleanup(a1, v6, v7);
  while ( 1 )
  {
    v13 = v4;
    if ( !v4 )
      break;
    v4 = (_QWORD *)*v4;
    (*(void (__fastcall **)(_QWORD *))(a1 + 40))(v13);
  }
  return v8;
}
