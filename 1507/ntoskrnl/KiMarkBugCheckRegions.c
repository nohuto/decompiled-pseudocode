/*
 * XREFs of KiMarkBugCheckRegions @ 0x14017BCEC
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     MmQueryApiSetSchema @ 0x1401708D0 (MmQueryApiSetSchema.c)
 *     MmIsAddressValid @ 0x1402175B0 (MmIsAddressValid.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD), int a4)
{
  unsigned __int64 v5; // rbp
  char result; // al
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  unsigned int i; // edi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rsi
  int *v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned int j; // edi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned int k; // ebx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  _QWORD v27[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v5 = (unsigned __int64)a3;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
  result = qword_140323988;
  if ( qword_140323988 )
  {
    KiMismatchSummary = qword_140323988;
    result = IoAddTriageDumpDataBlock((int)&KiMismatchSummary, 8);
  }
  if ( a4 == 257 )
  {
    result = dword_140323980;
    if ( dword_140323980 )
    {
      v7 = qword_140323970;
      v8 = 0;
      v26 = qword_140323970;
      v29 = 0;
      do
      {
        v9 = (v7 + v8) & 0xFFFFFFFFFFFFF000uLL;
        result = MmIsAddressValid((PVOID)v9);
        if ( result )
        {
          for ( i = 0; i < 4; ++i )
          {
            v11 = (v7 + v8) & 0xFFFFFFFFFFFFF000uLL;
            if ( i )
            {
              result = i - 1;
              if ( i != 1 )
              {
                if ( i != 2 )
                  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              }
              v12 = (((((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
            else
            {
              v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              result = *(_BYTE *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 7;
              if ( *(char *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
                v12 = 0LL;
            }
            if ( v12 )
              result = IoAddTriageDumpDataBlock(v12, 8);
          }
          v8 = v29;
          v7 = v26;
        }
        v8 += 4096;
        v29 = v8;
      }
      while ( v8 < dword_140323980 );
      v5 = (unsigned __int64)a3;
      dword_140323980 = 4096;
    }
  }
  v13 = &qword_140323970;
  v14 = 2LL;
  v15 = &dword_140323980;
  do
  {
    if ( *v15 )
      result = IoAddTriageDumpDataBlock(*v13, *v15);
    ++v15;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( v5 )
  {
    IoAddTriageDumpDataBlock(v5 & 0xFFFFF000, 4096);
    v16 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    IoAddTriageDumpDataBlock((v5 & 0xFFFFF000) + 4096, 4096);
    v17 = v5 & 0xFFFFFFFFFFFFF000uLL;
    if ( MmIsAddressValid((PVOID)(v5 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      for ( j = 0; j < 4; ++j )
      {
        v19 = v5 & 0xFFFFFFFFFFFFF000uLL;
        if ( j )
        {
          if ( j != 1 )
          {
            if ( j != 2 )
              v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          v20 = (((((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        else
        {
          v20 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( *(char *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
            v20 = 0LL;
        }
        if ( v20 )
          IoAddTriageDumpDataBlock(v20, 8);
      }
      v16 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v5 = (unsigned __int64)a3;
    }
    v21 = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( MmIsAddressValid((PVOID)v21) )
    {
      for ( k = 0; k < 4; ++k )
      {
        v23 = v21;
        if ( k )
        {
          if ( k != 1 )
          {
            if ( k != 2 )
              v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          v24 = (((((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        else
        {
          v24 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( *(char *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
            v24 = 0LL;
        }
        if ( v24 )
          IoAddTriageDumpDataBlock(v24, 8);
      }
      v5 = (unsigned __int64)a3;
    }
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v5 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((int)&HvlpHypercallCodeVa, 8);
    if ( v5 == HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((int)&HvlpVsmVtlCallVa, 8);
    MmQueryApiSetSchema(&VirtualAddress, v27);
    result = MmIsAddressValid(VirtualAddress);
    if ( result && v5 == *(_QWORD *)VirtualAddress )
      result = IoAddTriageDumpDataBlock((int)VirtualAddress, 8);
  }
  if ( qword_1403D11C0 )
    return IoAddTriageDumpDataBlock(qword_1403D11C0, 1872);
  return result;
}
