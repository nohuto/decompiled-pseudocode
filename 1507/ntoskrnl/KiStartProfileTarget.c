/*
 * XREFs of KiStartProfileTarget @ 0x1402050C0
 * Callers:
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 **v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 *v11; // r9
  unsigned __int16 v12; // r10
  unsigned __int64 i; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  char *v16; // rbx
  _BYTE *v17; // r8
  unsigned __int16 v18; // dx
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  char *v24; // r8
  char *v25; // r10
  unsigned __int16 v26; // dx
  signed __int64 v27; // rbx
  _QWORD *v28; // r11
  signed __int64 v29; // r14
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG_PTR result; // rax
  signed __int32 v35[12]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v36[176]; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v37[176]; // [rsp+E0h] [rbp-E8h] BYREF

  v2 = *Argument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v2 + 242) )
    {
      *((_BYTE *)Argument + 192) = 0;
    }
    else
    {
      v4 = *(_QWORD *)(v2 + 24);
      v5 = (__int64 *)(v2 + 8);
      *(_BYTE *)(v2 + 242) = 1;
      if ( v4 )
      {
        v6 = *(__int64 ***)(v4 + 32);
        v7 = v4 + 24;
        *v5 = v7;
        *(_QWORD *)(v2 + 16) = v6;
        if ( *v6 != (__int64 *)v7 )
          __fastfail(3u);
        *v6 = v5;
        *(_QWORD *)(v7 + 8) = v5;
      }
      else
      {
        v8 = (__int64 **)qword_140338FB8;
        *v5 = (__int64)&KiProfileListHead;
        *(_QWORD *)(v2 + 16) = v8;
        if ( *v8 != &KiProfileListHead )
          __fastfail(3u);
        *v8 = v5;
        qword_140338FB8 = v2 + 8;
      }
      v9 = KiProfileSourceListHead;
      if ( (__int64 *)KiProfileSourceListHead == &KiProfileSourceListHead )
      {
LABEL_14:
        v9 = Argument[23];
        Argument[23] = 0LL;
        *(_DWORD *)(v9 + 16) = *(__int16 *)(v2 + 240);
        *(_QWORD *)(v9 + 24) = 1310721LL;
        memset((void *)(v9 + 32), 0, 0xA0uLL);
        v10 = KiProfileSourceListHead;
        *(_QWORD *)v9 = KiProfileSourceListHead;
        *(_QWORD *)(v9 + 8) = &KiProfileSourceListHead;
        if ( *(__int64 **)(v10 + 8) != &KiProfileSourceListHead )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = v9;
        KiProfileSourceListHead = v9;
        if ( *(_WORD *)(v2 + 240) == 1 )
          KiProfileAlignmentFixup = 1;
      }
      else
      {
        while ( *(_DWORD *)(v9 + 16) != *(__int16 *)(v2 + 240) )
        {
          v9 = *(_QWORD *)v9;
          if ( (__int64 *)v9 == &KiProfileSourceListHead )
            goto LABEL_14;
        }
      }
      v11 = (unsigned __int16 *)(v2 + 72);
      v12 = 0;
      for ( i = *(_QWORD *)(v2 + 80); ; i = *(_QWORD *)&v11[4 * v12 + 4] )
      {
        while ( i )
        {
          _BitScanForward64(&v14, i);
          i &= ~(1LL << v14);
          v35[8] = v14;
          v15 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v12 + (unsigned __int8)v14];
          ++*(_DWORD *)(v9 + 4 * v15 + 192);
        }
        if ( ++v12 >= (unsigned int)*v11 )
          break;
      }
      v16 = (char *)(v9 + 24);
      v17 = v36;
      v18 = 0;
      if ( Argument != (__int64 *)-16LL )
        v17 = Argument + 2;
      *((_WORD *)v17 + 1) = 20;
      *(_WORD *)v17 = *v11;
      LOWORD(v19) = *(_WORD *)v16;
      if ( *v11 < *(_WORD *)v16 )
        LOWORD(v19) = *v11;
      if ( (_WORD)v19 )
      {
        v18 = v19;
        v20 = (_QWORD *)(v2 + 80);
        v19 = (unsigned __int16)v19;
        do
        {
          *(_QWORD *)((char *)v20 + v17 - (_BYTE *)v11) = *v20 & ~*(_QWORD *)((char *)v20 + v16 - (char *)v11);
          ++v20;
          --v19;
        }
        while ( v19 );
      }
      while ( v18 < *v11 )
      {
        v21 = v18++;
        *(_QWORD *)&v17[8 * v21 + 8] = *(_QWORD *)&v11[4 * v21 + 4];
      }
      if ( v17 != v36 )
      {
        *((_DWORD *)v17 + 1) = 0;
        while ( v18 < *((_WORD *)v17 + 1) )
        {
          v22 = v18++;
          *(_QWORD *)&v17[8 * v22 + 8] = 0LL;
        }
      }
      _InterlockedOr(v35, 0);
      v23 = *(_WORD *)v16;
      v24 = v37;
      if ( v16 )
        v24 = v16;
      if ( v23 >= *v11 )
      {
        v25 = v16;
        v23 = *v11;
      }
      else
      {
        v25 = (char *)(v2 + 72);
      }
      *((_WORD *)v24 + 1) = 20;
      v26 = 0;
      *(_WORD *)v24 = *(_WORD *)v25;
      if ( v23 )
      {
        v27 = v16 - (char *)v11;
        v26 = v23;
        v28 = (_QWORD *)(v2 + 80);
        v29 = v24 - (char *)v11;
        v30 = v23;
        do
        {
          *(_QWORD *)((char *)v28 + v29) = *v28 | *(_QWORD *)((char *)v28 + v27);
          ++v28;
          --v30;
        }
        while ( v30 );
      }
      while ( v26 < *(_WORD *)v25 )
      {
        v31 = v26++;
        *(_QWORD *)&v24[8 * v31 + 8] = *(_QWORD *)&v25[8 * v31 + 8];
      }
      if ( v24 != v37 )
      {
        *((_DWORD *)v24 + 1) = 0;
        while ( v26 < *((_WORD *)v24 + 1) )
        {
          v32 = v26++;
          *(_QWORD *)&v24[8 * v32 + 8] = 0LL;
        }
      }
      *((_BYTE *)Argument + 192) = 1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStartProfileInterrupt((unsigned int)*(__int16 *)(v2 + 240));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
