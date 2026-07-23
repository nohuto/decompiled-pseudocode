/*
 * XREFs of KiMarkBugCheckRegions @ 0x140157534
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     MmQueryApiSetSchema @ 0x1400B0D70 (MmQueryApiSetSchema.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     MmIsAddressValid @ 0x1401E6774 (MmIsAddressValid.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // esi
  char result; // al
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // r14
  int *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD v34[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v35[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v36[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID VirtualAddress; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF

  v6 = 4;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
  if ( qword_1402F9BC8 )
  {
    KiMismatchSummary = qword_1402F9BC8;
    IoAddTriageDumpDataBlock((int)&KiMismatchSummary, 8);
  }
  result = 1;
  if ( a4 == 257 )
  {
    if ( dword_1402F9BC0 )
    {
      v8 = qword_1402F9BB0;
      v9 = 0;
      do
      {
        if ( MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          v10 = MmPteBase;
          v11 = v34;
          v12 = 4LL;
          v13 = MmPteBase + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
          LODWORD(v14) = 4;
          do
          {
            *v11++ = v13;
            v13 = v10 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
            --v12;
          }
          while ( v12 );
          do
          {
            if ( (_DWORD)v12 )
            {
              v14 = (unsigned int)(v14 - 1);
              v34[v14] = 0LL;
            }
            else
            {
              LODWORD(v14) = v14 - 1;
              if ( !(_DWORD)v14 )
                break;
              LODWORD(v12) = *(char *)v34[(unsigned int)v14] < 0;
            }
          }
          while ( (_DWORD)v14 );
          v15 = 4;
          do
          {
            v16 = v34[v15 - 1];
            if ( !v16 )
              break;
            IoAddTriageDumpDataBlock(v16, 8);
            --v15;
          }
          while ( v15 );
        }
        v9 += 4096;
      }
      while ( v9 < dword_1402F9BC0 );
      dword_1402F9BC0 = 4096;
    }
    result = 1;
  }
  v17 = &qword_1402F9BB0;
  v18 = 2LL;
  v19 = &dword_1402F9BC0;
  do
  {
    if ( *v19 )
    {
      IoAddTriageDumpDataBlock(*v17, *v19);
      result = 1;
    }
    ++v19;
    ++v17;
    --v18;
  }
  while ( v18 );
  if ( a3 )
  {
    IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
    IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, 4096);
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v20 = MmPteBase;
      v21 = v35;
      v22 = 4LL;
      v23 = MmPteBase + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      LODWORD(v24) = 4;
      do
      {
        *v21++ = v23;
        v23 = v20 + ((v23 >> 9) & 0x7FFFFFFFF8LL);
        --v22;
      }
      while ( v22 );
      do
      {
        if ( (_DWORD)v22 )
        {
          v24 = (unsigned int)(v24 - 1);
          v35[v24] = 0LL;
        }
        else
        {
          LODWORD(v24) = v24 - 1;
          if ( !(_DWORD)v24 )
            break;
          LODWORD(v22) = *(char *)v35[(unsigned int)v24] < 0;
        }
      }
      while ( (_DWORD)v24 );
      v25 = 4;
      do
      {
        v26 = v35[v25 - 1];
        if ( !v26 )
          break;
        IoAddTriageDumpDataBlock(v26, 8);
        --v25;
      }
      while ( v25 );
    }
    v27 = ((a3 & 0xFFFFFFFFFFFFF000uLL) + 4096) & 0xFFFFFFFFFFFFF000uLL;
    if ( MmIsAddressValid((PVOID)v27) )
    {
      v28 = MmPteBase;
      v29 = v36;
      v30 = 4LL;
      v31 = MmPteBase + ((v27 >> 9) & 0x7FFFFFFFF8LL);
      LODWORD(v32) = 4;
      do
      {
        *v29++ = v31;
        v31 = v28 + ((v31 >> 9) & 0x7FFFFFFFF8LL);
        --v30;
      }
      while ( v30 );
      do
      {
        if ( (_DWORD)v30 )
        {
          v32 = (unsigned int)(v32 - 1);
          v36[v32] = 0LL;
        }
        else
        {
          LODWORD(v32) = v32 - 1;
          if ( !(_DWORD)v32 )
            goto LABEL_46;
          LODWORD(v30) = *(char *)v36[(unsigned int)v32] < 0;
        }
      }
      while ( (_DWORD)v32 );
      do
      {
LABEL_46:
        v33 = v36[v6 - 1];
        if ( !v33 )
          break;
        IoAddTriageDumpDataBlock(v33, 8);
        --v6;
      }
      while ( v6 );
    }
    if ( a3 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((int)&HvlpHypercallCodeVa, 8);
    if ( a3 == HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((int)&HvlpVsmVtlCallVa, 8);
    MmQueryApiSetSchema(&VirtualAddress, &v38);
    result = MmIsAddressValid(VirtualAddress);
    if ( result && a3 == *(_QWORD *)VirtualAddress )
      result = IoAddTriageDumpDataBlock((int)VirtualAddress, 8);
  }
  if ( qword_1403AA200 )
    return IoAddTriageDumpDataBlock(qword_1403AA200, 1944);
  return result;
}
