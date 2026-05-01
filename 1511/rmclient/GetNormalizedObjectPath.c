/*
 * XREFs of GetNormalizedObjectPath @ 0x1800061C0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800068A0 (RtlStringLengthWorkerW.c)
 *     RtlStringCbLengthW @ 0x1800068F0 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyExW @ 0x180006960 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r8
  SIZE_T v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  SIZE_T v10; // rax
  int v11; // edi
  PVOID Heap; // rbp
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int16 v19; // r9
  unsigned int v20; // r9d
  int *v21; // rsi
  SIZE_T Size; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-40h] BYREF
  int v26; // [rsp+50h] [rbp-38h] BYREF
  __int16 v27; // [rsp+54h] [rbp-34h]

  v24 = 0LL;
  v26 = 3473445;
  v27 = 67;
  result = RtlStringCbLengthW(L"%5C%5C.%5CRpc%5C", 0x7FFFFFFFLL, &Size);
  if ( (int)result < 0 )
    return result;
  if ( a2 )
  {
    result = RtlStringLengthWorkerW(a2, 0x7FFFFFFFLL, &v23);
    if ( (int)result >= 0 )
    {
      v6 = v23;
      goto LABEL_5;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  v6 = 0LL;
  v23 = 0LL;
LABEL_5:
  if ( (int)result >= 0 )
  {
    v7 = Size;
    v8 = 0;
    v9 = 0LL;
    do
    {
      if ( *(_WORD *)(a2 + 2 * v9) == 92 )
        v10 = v7 + 6;
      else
        v10 = v7 + 2;
      if ( v10 < v7 )
        return 3221225621LL;
      ++v8;
      Size = v10;
      v7 = v10;
      v9 = v8;
    }
    while ( v8 <= v6 );
    v11 = Size;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
    if ( Heap )
    {
      v13 = RtlStringCbCopyExW((_DWORD)Heap, v11, (unsigned int)L"%5C%5C.%5CRpc%5C", (unsigned int)&v24, (__int64)&v25);
      if ( v13 < 0 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v14 = v24;
        v15 = 0LL;
        v16 = v23;
        v17 = 0LL;
        v18 = v25;
        do
        {
          if ( (unsigned int)v17 >= v18 )
            break;
          v19 = *(_WORD *)(a2 + 2 * v15);
          if ( v19 == 92 )
          {
            v20 = 0;
            v21 = &v26;
            do
            {
              if ( (unsigned int)v17 >= v18 )
                break;
              ++v20;
              *(_WORD *)(v14 + 2 * v17) = *(_WORD *)v21;
              v21 = (int *)((char *)v21 + 2);
              v17 = (unsigned int)(v17 + 1);
            }
            while ( v20 < 3 );
          }
          else
          {
            *(_WORD *)(v14 + 2 * v17) = v19;
            v17 = (unsigned int)(v17 + 1);
          }
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 <= v16 );
        *a3 = Heap;
      }
      return (unsigned int)v13;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
