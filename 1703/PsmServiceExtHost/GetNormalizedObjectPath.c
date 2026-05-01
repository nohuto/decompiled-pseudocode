/*
 * XREFs of GetNormalizedObjectPath @ 0x18001A310
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001A034 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001A148 (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x18001A168 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x18001A4B0 (RtlStringCbLengthW.c)
 *     sub_18001A508 @ 0x18001A508 (sub_18001A508.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  _WORD *Heap; // rdi
  signed int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r10
  SIZE_T v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // rax
  bool v11; // zf
  SIZE_T v12; // rdx
  SIZE_T v13; // rax
  SIZE_T v14; // r8
  SIZE_T v15; // rcx
  __int64 v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // ecx
  wchar_t v19; // r9
  unsigned int v21; // r8d
  int *v22; // r9
  __int64 v23; // r10
  __int16 v24; // ax
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  int v29; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Ch]

  v29 = 3473445;
  v27 = 0LL;
  Heap = 0LL;
  v30 = 67;
  v5 = RtlStringCbLengthW(L"%5C%5C.%5CWnf%5C", 0x7FFFFFFFLL, &Size);
  if ( v5 >= 0 )
  {
    v6 = sub_18001A508(L"CommitMemoryWNFEvents", 0x7FFFFFFFLL, &v26);
    v7 = v26;
    v5 = v6;
    if ( v6 < 0 )
      v7 = 0LL;
    v26 = v7;
    if ( v6 >= 0 )
    {
      v8 = Size;
      v9 = 0;
      v10 = 0LL;
      while ( 1 )
      {
        v11 = aCommitmemorywn[v10] == 92;
        v12 = v8 + 6;
        v13 = -1LL;
        v14 = v8;
        v15 = v8;
        if ( !v11 )
          v12 = v8 + 2;
        if ( v12 >= v8 )
          v13 = v12;
        Size = v13;
        v8 = v13;
        v5 = v12 < v15 ? 0xC0000095 : 0;
        if ( v12 < v14 )
          break;
        v10 = ++v9;
        if ( v9 > v7 )
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
          if ( Heap )
          {
            v5 = RtlStringCbCopyExW(Heap, Size, L"%5C%5C.%5CWnf%5C", &v27, &v28);
            if ( v5 >= 0 )
            {
              v16 = v27;
              v17 = 0;
              v18 = 0;
              do
              {
                if ( v18 >= v28 )
                  break;
                v19 = aCommitmemorywn[v17];
                if ( v19 == 92 )
                {
                  v21 = 0;
                  v22 = &v29;
                  do
                  {
                    v23 = v18;
                    if ( v18 >= v28 )
                      break;
                    v24 = *(_WORD *)v22;
                    ++v18;
                    v22 = (int *)((char *)v22 + 2);
                    *(_WORD *)(v16 + 2 * v23) = v24;
                    ++v21;
                  }
                  while ( v21 < 3 );
                }
                else
                {
                  *(_WORD *)(v16 + 2LL * v18++) = v19;
                }
                ++v17;
              }
              while ( v17 <= v26 );
              *a3 = Heap;
              Heap = 0LL;
            }
          }
          else
          {
            v5 = -1073741801;
          }
          break;
        }
      }
    }
  }
  AccessHlprFree(Heap);
  return (unsigned int)v5;
}
