/*
 * XREFs of EvtIntReportEventWorker @ 0x18000E64C
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x18000E5E0 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x1800F4E30 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     EtwEventWriteFull @ 0x18000F610 (EtwEventWriteFull.c)
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18006E250 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _local_unwind @ 0x180084C50 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        char a6,
        __int64 a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // r15
  _BYTE *Heap; // rdi
  int v15; // ecx
  char v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r10d
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned int v24; // edx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r10d
  int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v36; // [rsp+0h] [rbp-2C8h] BYREF
  int v37; // [rsp+40h] [rbp-288h]
  unsigned int v38; // [rsp+44h] [rbp-284h]
  int v39; // [rsp+48h] [rbp-280h] BYREF
  int v40; // [rsp+4Ch] [rbp-27Ch] BYREF
  int v41; // [rsp+50h] [rbp-278h] BYREF
  char v42; // [rsp+54h] [rbp-274h]
  char v43; // [rsp+55h] [rbp-273h]
  __int16 v44; // [rsp+56h] [rbp-272h]
  unsigned __int64 v45; // [rsp+58h] [rbp-270h]
  int v46; // [rsp+60h] [rbp-268h]
  unsigned int v47; // [rsp+64h] [rbp-264h]
  _BYTE *v48; // [rsp+68h] [rbp-260h]
  __int64 v49; // [rsp+70h] [rbp-258h]
  __int64 v50; // [rsp+78h] [rbp-250h] BYREF
  __int64 *v51; // [rsp+80h] [rbp-248h]
  _BYTE v52[512]; // [rsp+90h] [rbp-238h] BYREF

  v51 = &v36;
  v46 = a2;
  v49 = a1;
  v13 = a7;
  v38 = 0;
  Heap = v52;
  v48 = v52;
  v15 = 7;
  v16 = 0;
  v39 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    v38 = 87;
    goto LABEL_36;
  }
  if ( a7 )
    v15 = 8;
  v17 = a8 + v15;
  if ( a9 )
    ++v17;
  if ( v17 > 0x20 )
  {
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 16LL * v17);
    v48 = Heap;
    if ( !Heap )
    {
      v38 = 8;
      goto LABEL_36;
    }
  }
  v18 = 0x8000000000000000uLL;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v16 = 2;
        break;
      case 2:
        v16 = 3;
        break;
      case 4:
        v16 = 4;
        break;
      case 8:
        v18 = 0x8020000000000000uLL;
        break;
      case 16:
        v18 = 0x8010000000000000uLL;
        break;
    }
  }
  else
  {
    v16 = 0;
  }
  v41 = 0;
  v42 = v16;
  v44 = a5;
  v43 = 0;
  v45 = v18;
  if ( v13 )
  {
    if ( !(unsigned __int8)RtlValidSid(v13) )
    {
      v38 = 87;
      local_unwind(v51, &loc_18000E99C);
      goto LABEL_33;
    }
    v39 = 4 * *(unsigned __int8 *)(v13 + 1) + 8;
  }
  v50 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v50;
  *((_QWORD *)Heap + 1) = 8LL;
  *((_QWORD *)Heap + 2) = &a6;
  *((_QWORD *)Heap + 3) = 4LL;
  v37 = 2;
  v34 = -1LL;
  do
    ++v34;
  while ( *(_WORD *)(a3 + 2 * v34) );
  v40 = (unsigned __int16)(v34 + 1);
  *((_QWORD *)Heap + 4) = &v40;
  *((_QWORD *)Heap + 5) = 2LL;
  v19 = 2 * v40;
  *((_QWORD *)Heap + 6) = a3;
  *((_DWORD *)Heap + 14) = v19;
  *((_DWORD *)Heap + 15) = 0;
  *((_QWORD *)Heap + 8) = &v39;
  *((_QWORD *)Heap + 9) = 2LL;
  v20 = 5;
  v37 = 5;
  v21 = v39;
  if ( v39 )
  {
    *((_QWORD *)Heap + 10) = v13;
    *((_DWORD *)Heap + 22) = v21;
    *((_DWORD *)Heap + 23) = 0;
    v20 = 6;
    v37 = 6;
  }
  v22 = 2LL * v20;
  *(_QWORD *)&Heap[8 * v22] = &a8;
  *(_QWORD *)&Heap[8 * v22 + 8] = 2LL;
  v23 = v20 + 1;
  v37 = v23;
  v24 = 0;
  v47 = 0;
  while ( v24 < a8 )
  {
    v25 = *(_QWORD *)(a10 + 8LL * v24);
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(v25 + 2 * v26) );
    v27 = 2 * v26 + 2;
    v28 = 2LL * v23;
    *(_QWORD *)&Heap[8 * v28] = v25;
    *(_QWORD *)&Heap[8 * v28 + 8] = v27;
    v37 = ++v23;
    v47 = ++v24;
  }
  v29 = 2LL * v23;
  *(_QWORD *)&Heap[8 * v29] = &a9;
  *(_QWORD *)&Heap[8 * v29 + 8] = 4LL;
  v30 = v23 + 1;
  v37 = v30;
  v31 = a9;
  if ( a9 )
  {
    v32 = 2LL * v30;
    *(_QWORD *)&Heap[8 * v32] = a11;
    *(_DWORD *)&Heap[8 * v32 + 8] = v31;
    *(_DWORD *)&Heap[8 * v32 + 12] = 0;
    v37 = ++v30;
  }
  if ( !v46 )
  {
    v33 = EtwEventWriteFull(v49, (unsigned int)&v41, 4, 0, 0LL, v30, (__int64)Heap);
    goto LABEL_34;
  }
LABEL_33:
  v33 = EtwWriteUMSecurityEvent(&v41, 4LL, v30, Heap);
LABEL_34:
  v38 = v33;
  if ( Heap != v52 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_36:
  RtlSetLastWin32Error(v38);
  return v38 == 0;
}
