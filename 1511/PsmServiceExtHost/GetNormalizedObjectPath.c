/*
 * XREFs of GetNormalizedObjectPath @ 0x18001E458
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001E9F8 (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x18001EA20 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x18001EB5C (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x18001EBC0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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
  unsigned int v12; // r11d
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  bool v17; // zf
  SIZE_T v18; // rdx
  __int64 v19; // r11
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int16 v22; // r9
  unsigned int v24; // r8d
  int *v25; // r9
  __int64 v26; // r10
  __int16 v27; // ax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-28h] BYREF
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-18h] BYREF
  int v37; // [rsp+50h] [rbp-10h] BYREF
  __int16 v38; // [rsp+54h] [rbp-Ch]

  v37 = 3473445;
  v35 = 0LL;
  Heap = 0LL;
  v38 = 67;
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
    v28 = a1 - 1;
    if ( !v28 )
    {
      v10 = L"%5C%5C.%5CEvent%5C";
      goto LABEL_7;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v10 = L"%5C%5C.%5CSemaphore%5C";
      goto LABEL_7;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v10 = L"%5C%5C.%5CWaitableTimer%5C";
      goto LABEL_7;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v10 = L"%5C%5C.%5CJobObject%5C";
      goto LABEL_7;
    }
    if ( v31 == 1 )
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
    v32 = v9 - 1;
    if ( !v32 )
    {
      v10 = L"%5C%5C.%5CTemplate%5C";
      goto LABEL_7;
    }
    if ( v32 == 1 )
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
      v11 = RtlStringLengthWorkerW(a2, v12, &v34);
    else
      v11 = -1073741811;
    v13 = v34;
    if ( v11 < 0 )
      v13 = 0LL;
    v34 = v13;
    if ( v11 >= 0 )
    {
      v14 = Size;
      v15 = 0;
      v16 = 0LL;
      do
      {
        v17 = *(_WORD *)(a2 + 2 * v16) == 92;
        v18 = v14 + 6;
        if ( !v17 )
          v18 = v14 + 2;
        if ( v18 < v14 )
        {
          v11 = -1073741675;
          goto LABEL_26;
        }
        ++v15;
        Size = v18;
        v14 = v18;
        v16 = v15;
      }
      while ( v15 <= v13 );
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
      if ( Heap )
      {
        v11 = RtlStringCbCopyExW((_DWORD)Heap, Size, (_DWORD)v10, (unsigned int)&v35, (__int64)&v36);
        if ( v11 >= 0 )
        {
          v19 = v35;
          v20 = 0;
          v21 = 0;
          do
          {
            if ( v21 >= v36 )
              break;
            v22 = *(_WORD *)(a2 + 2LL * v20);
            if ( v22 == 92 )
            {
              v24 = 0;
              v25 = &v37;
              do
              {
                v26 = v21;
                if ( v21 >= v36 )
                  break;
                v27 = *(_WORD *)v25;
                ++v21;
                v25 = (int *)((char *)v25 + 2);
                *(_WORD *)(v19 + 2 * v26) = v27;
                ++v24;
              }
              while ( v24 < 3 );
            }
            else
            {
              *(_WORD *)(v19 + 2LL * v21++) = v22;
            }
            ++v20;
          }
          while ( v20 <= v34 );
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
