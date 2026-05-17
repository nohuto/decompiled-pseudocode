/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18008CFC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, char *a2)
{
  char v2; // bl
  char v5; // bp
  int v6; // edi
  unsigned __int64 Heap; // rsi
  __int64 v8; // rcx
  _BYTE *v9; // rax
  _BYTE v11[56]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v13 = 0LL;
  v5 = 0;
  v6 = NtReadFile(a1, 0LL, 0LL, 0LL, v11, &v12, 4, &v13, 0LL);
  if ( v6 >= 0 )
  {
    if ( v12 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
      if ( Heap )
      {
        v6 = NtReadFile(a1, 0LL, 0LL, 0LL, v11, Heap, v12, &v13, 0LL);
        if ( v6 >= 0 )
        {
          if ( !v12 )
            goto LABEL_9;
          v8 = v12;
          v9 = (_BYTE *)Heap;
          do
          {
            v5 += *v9++;
            --v8;
          }
          while ( v8 );
          if ( !v5 )
LABEL_9:
            v2 = 1;
          *a2 = v2;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      *a2 = 0;
    }
  }
  return (unsigned int)v6;
}
