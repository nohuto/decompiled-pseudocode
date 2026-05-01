/*
 * XREFs of GetNormalizedObjectPath @ 0x180002BC0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180002934 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x180002A5C (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x180002A84 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x180002D44 (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x180002DB0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  _WORD *Heap; // rdi
  int v5; // ebx
  unsigned int v6; // r11d
  int v7; // eax
  unsigned __int64 v8; // r8
  SIZE_T v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  bool v12; // zf
  SIZE_T v13; // rcx
  __int64 v14; // r11
  unsigned int v15; // edx
  unsigned int v16; // ecx
  wchar_t v17; // r9
  unsigned int v19; // r8d
  int *v20; // r9
  __int64 v21; // r10
  __int16 v22; // ax
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+50h] [rbp-10h] BYREF
  __int16 v28; // [rsp+54h] [rbp-Ch]

  v27 = 3473445;
  v25 = 0LL;
  Heap = 0LL;
  v28 = 67;
  v5 = RtlStringCbLengthW(L"%5C%5C.%5CWnf%5C", 0x7FFFFFFFLL, &Size);
  if ( v5 >= 0 )
  {
    v7 = RtlStringLengthWorkerW(L"CommitMemoryWNFEvents", v6, &v24);
    v8 = v24;
    v5 = v7;
    if ( v7 < 0 )
      v8 = 0LL;
    v24 = v8;
    if ( v7 >= 0 )
    {
      v9 = Size;
      v10 = 0;
      v11 = 0LL;
      do
      {
        v12 = aCommitmemorywn[v11] == 92;
        v13 = v9 + 6;
        if ( !v12 )
          v13 = v9 + 2;
        if ( v13 < v9 )
        {
          v5 = -1073741675;
          goto LABEL_18;
        }
        ++v10;
        Size = v13;
        v9 = v13;
        v11 = v10;
      }
      while ( v10 <= v8 );
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
      if ( Heap )
      {
        v5 = RtlStringCbCopyExW(Heap, Size, L"%5C%5C.%5CWnf%5C", &v25, &v26);
        if ( v5 >= 0 )
        {
          v14 = v25;
          v15 = 0;
          v16 = 0;
          do
          {
            if ( v16 >= v26 )
              break;
            v17 = aCommitmemorywn[v15];
            if ( v17 == 92 )
            {
              v19 = 0;
              v20 = &v27;
              do
              {
                v21 = v16;
                if ( v16 >= v26 )
                  break;
                v22 = *(_WORD *)v20;
                ++v16;
                v20 = (int *)((char *)v20 + 2);
                *(_WORD *)(v14 + 2 * v21) = v22;
                ++v19;
              }
              while ( v19 < 3 );
            }
            else
            {
              *(_WORD *)(v14 + 2LL * v16++) = v17;
            }
            ++v15;
          }
          while ( v15 <= v24 );
          *a3 = Heap;
          Heap = 0LL;
        }
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
LABEL_18:
  AccessHlprFree(Heap);
  return (unsigned int)v5;
}
