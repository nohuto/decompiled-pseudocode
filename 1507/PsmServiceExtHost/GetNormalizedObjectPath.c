/*
 * XREFs of GetNormalizedObjectPath @ 0x180003E10
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180004258 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x1800043B0 (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x1800043D8 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x18000451C (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x18000457C (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(int a1, __int64 a2, _QWORD *a3)
{
  PVOID Heap; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const wchar_t *v10; // rdi
  int v11; // ebx
  unsigned __int64 v12; // rcx
  SIZE_T v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  bool v16; // zf
  SIZE_T v17; // rdx
  __int64 v18; // r11
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int16 v21; // r9
  unsigned int v23; // r8d
  int *v24; // r9
  __int64 v25; // r10
  __int16 v26; // ax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  int v36; // [rsp+50h] [rbp-10h] BYREF
  __int16 v37; // [rsp+54h] [rbp-Ch]

  v36 = 3473445;
  v34 = 0LL;
  Heap = 0LL;
  v37 = 67;
  if ( a1 <= 6 )
  {
    if ( a1 == 6 )
    {
      v10 = L"%5C%5C.%5CNamedPipe%5C";
      goto LABEL_7;
    }
    if ( !a1 )
    {
      v10 = L"%5C%5C.%5CMutex%5C";
      goto LABEL_7;
    }
    v27 = a1 - 1;
    if ( !v27 )
    {
      v10 = L"%5C%5C.%5CEvent%5C";
      goto LABEL_7;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v10 = L"%5C%5C.%5CSemaphore%5C";
      goto LABEL_7;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v10 = L"%5C%5C.%5CWaitableTimer%5C";
      goto LABEL_7;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v10 = L"%5C%5C.%5CJobObject%5C";
      goto LABEL_7;
    }
    if ( v30 == 1 )
    {
      v10 = L"%5C%5C.%5CFileMapping%5C";
      goto LABEL_7;
    }
LABEL_54:
    v11 = -1073741811;
    goto LABEL_26;
  }
  v6 = a1 - 7;
  if ( !v6 )
    goto LABEL_54;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = L"%5C%5C.%5CAlpcPort%5C";
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = L"%5C%5C.%5CRpc%5C";
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v31 = v9 - 1;
    if ( !v31 )
    {
      v10 = L"%5C%5C.%5CTemplate%5C";
      goto LABEL_7;
    }
    if ( v31 == 1 )
    {
      v10 = L"%5C%5C.%5CPrivate%5C";
      goto LABEL_7;
    }
    goto LABEL_54;
  }
  v10 = L"%5C%5C.%5CWnf%5C";
LABEL_7:
  v11 = RtlStringCbLengthW(v10, 0x7FFFFFFFLL, &Size);
  if ( v11 >= 0 )
  {
    if ( a2 )
      v11 = RtlStringLengthWorkerW(a2, 0x7FFFFFFFLL, &v33);
    else
      v11 = -1073741811;
    v12 = v33;
    if ( v11 < 0 )
      v12 = 0LL;
    v33 = v12;
    if ( v11 >= 0 )
    {
      v13 = Size;
      v14 = 0;
      v15 = 0LL;
      do
      {
        v16 = *(_WORD *)(a2 + 2 * v15) == 92;
        v17 = v13 + 6;
        if ( !v16 )
          v17 = v13 + 2;
        if ( v17 < v13 )
        {
          v11 = -1073741675;
          goto LABEL_26;
        }
        ++v14;
        Size = v17;
        v13 = v17;
        v15 = v14;
      }
      while ( v14 <= v12 );
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
      if ( Heap )
      {
        v11 = RtlStringCbCopyExW((_DWORD)Heap, Size, (_DWORD)v10, (unsigned int)&v34, (__int64)&v35);
        if ( v11 >= 0 )
        {
          v18 = v34;
          v19 = 0;
          v20 = 0;
          do
          {
            if ( v20 >= v35 )
              break;
            v21 = *(_WORD *)(a2 + 2LL * v19);
            if ( v21 == 92 )
            {
              v23 = 0;
              v24 = &v36;
              do
              {
                v25 = v20;
                if ( v20 >= v35 )
                  break;
                v26 = *(_WORD *)v24;
                ++v20;
                v24 = (int *)((char *)v24 + 2);
                *(_WORD *)(v18 + 2 * v25) = v26;
                ++v23;
              }
              while ( v23 < 3 );
            }
            else
            {
              *(_WORD *)(v18 + 2LL * v20++) = v21;
            }
            ++v19;
          }
          while ( v19 <= v33 );
          *a3 = Heap;
          Heap = 0LL;
        }
      }
      else
      {
        v11 = -1073741801;
      }
    }
  }
LABEL_26:
  AccessHlprFree(Heap);
  return (unsigned int)v11;
}
