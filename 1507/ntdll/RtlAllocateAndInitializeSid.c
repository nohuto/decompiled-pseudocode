/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18004F230
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSid(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  int v15; // ebx
  int v16; // edi
  unsigned int v17; // eax
  __int64 Heap; // rax
  int v19; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi

  if ( a2 > 8u )
    return 3221225592LL;
  v15 = NtdllBaseTag;
  v16 = a2;
  v17 = RtlLengthRequiredSid(a2);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v15 + 1310720, v17);
  if ( Heap )
  {
    *(_BYTE *)(Heap + 1) = a2;
    *(_BYTE *)Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
    *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
    v19 = v16 - 1;
    if ( v19 )
    {
      v21 = v19 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 != 1 )
                    goto LABEL_5;
                  *(_DWORD *)(Heap + 36) = a10;
                }
                *(_DWORD *)(Heap + 32) = a9;
              }
              *(_DWORD *)(Heap + 28) = a8;
            }
            *(_DWORD *)(Heap + 24) = a7;
          }
          *(_DWORD *)(Heap + 20) = a6;
        }
        *(_DWORD *)(Heap + 16) = a5;
      }
      *(_DWORD *)(Heap + 12) = a4;
    }
    *(_DWORD *)(Heap + 8) = a3;
LABEL_5:
    *a11 = Heap;
    return 0LL;
  }
  return 3221225495LL;
}
