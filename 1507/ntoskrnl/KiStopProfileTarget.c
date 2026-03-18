/*
 * XREFs of KiStopProfileTarget @ 0x140205448
 * Callers:
 *     KeStopProfile @ 0x140204E84 (KeStopProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(__int64 *Argument)
{
  __int64 v2; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 **v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int16 i; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r11
  _BYTE *v19; // r10
  char *v20; // rdi
  unsigned __int16 v21; // dx
  __int64 v22; // rsi
  signed __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG_PTR result; // rax
  signed __int32 v32[12]; // [rsp+0h] [rbp-118h] BYREF
  _BYTE v33[176]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = *Argument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v2 + 242) )
  {
    v4 = (__int64 *)(v2 + 8);
    *(_BYTE *)(v2 + 242) = 0;
    if ( (__int64 *)*v4 != v4 )
    {
      v5 = (__int64 *)*v4;
      v6 = *(__int64 ***)(v2 + 16);
      if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
    v7 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( *((_DWORD *)v8 + 4) != *(__int16 *)(v2 + 240) );
    v9 = *(_QWORD *)(v2 + 80);
    for ( i = 0; ; v9 = *(_QWORD *)(v2 + 8LL * i + 80) )
    {
      while ( v9 )
      {
        _BitScanForward64(&v11, v9);
        v9 &= ~(1LL << v11);
        v32[8] = v11;
        v12 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v11];
        if ( (*((_DWORD *)v8 + v12 + 48))-- == 1 )
        {
          v14 = KiProcessorIndexToNumberMappingTable[v12] & 0x3F;
          v15 = (unsigned int)KiProcessorIndexToNumberMappingTable[v12] >> 6;
          if ( *((unsigned __int16 *)Argument + 8) <= (unsigned int)v15 )
            *((_WORD *)Argument + 8) = v15 + 1;
          v16 = (unsigned int)v15;
          v17 = Argument[v15 + 3];
          _bittestandset64(&v17, v14);
          Argument[v16 + 3] = v17;
        }
      }
      if ( ++i >= (unsigned int)*(unsigned __int16 *)(v2 + 72) )
        break;
    }
    _InterlockedOr(v32, 0);
    v18 = (char *)(v8 + 3);
    v19 = v33;
    v20 = (char *)(Argument + 2);
    v21 = 0;
    if ( v8 != (_QWORD *)-24LL )
      v19 = v8 + 3;
    *((_WORD *)v19 + 1) = 20;
    *(_WORD *)v19 = *(_WORD *)v18;
    LOWORD(v22) = *(_WORD *)v20;
    if ( *(_WORD *)v18 < *(_WORD *)v20 )
      LOWORD(v22) = *(_WORD *)v18;
    if ( (_WORD)v22 )
    {
      v23 = v20 - v18;
      v21 = v22;
      v24 = v8 + 4;
      v22 = (unsigned __int16)v22;
      do
      {
        *(_QWORD *)((char *)v24 + v19 - v18) = *v24 & ~*(_QWORD *)((char *)v24 + v23);
        ++v24;
        --v22;
      }
      while ( v22 );
    }
    while ( v21 < *(_WORD *)v18 )
    {
      v25 = v21++;
      *(_QWORD *)&v19[8 * v25 + 8] = *(_QWORD *)&v18[8 * v25 + 8];
    }
    if ( v19 != v33 )
    {
      *((_DWORD *)v19 + 1) = 0;
      while ( v21 < *((_WORD *)v19 + 1) )
      {
        v26 = v21++;
        *(_QWORD *)&v19[8 * v26 + 8] = 0LL;
      }
    }
    v27 = 0;
    if ( *(_WORD *)v18 )
    {
      while ( !*(_QWORD *)&v18[8 * v27 + 8] )
      {
        if ( ++v27 >= *(_WORD *)v18 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      v28 = *v8;
      v29 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v29 != v8 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      Argument[23] = (__int64)v8;
      if ( *(_WORD *)(v2 + 240) == 1 )
        KiProfileAlignmentFixup = 0;
    }
    *((_BYTE *)Argument + 192) = 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v2 + 240));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
