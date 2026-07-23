/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x140429D0C
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PerfLogImageUnload @ 0x140429AFC (PerfLogImageUnload.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     EtwpTraceImageRundown @ 0x1404B2604 (EtwpTraceImageRundown.c)
 */

void __fastcall EtwpEnumerateAddressSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v5; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v7; // r14
  int v8; // r13d
  __int16 v9; // ax
  _QWORD *v10; // rax
  unsigned __int64 *v11; // rdi
  __m128i *v12; // r15
  int v13; // r12d
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 v16; // r12
  char v17; // r13
  __int64 v18; // r12
  void *v19; // rax
  int v20; // r13d
  int v21; // eax
  __int16 v22; // dx
  unsigned int v23; // r8d
  unsigned __int64 v24; // rax
  int v25; // ecx
  __m128i v26; // xmm1
  int v27; // eax
  __m128i v28; // xmm0
  char v29; // dl
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // ecx
  char v35; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+30h] [rbp-D0h]
  __int16 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  int v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+64h] [rbp-9Ch]
  unsigned int v43; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+6Ch] [rbp-94h]
  int v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  void *v51; // [rsp+A0h] [rbp-60h]
  _QWORD *v52; // [rsp+A8h] [rbp-58h]
  __m128i v53; // [rsp+B0h] [rbp-50h]
  __m128i v54; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v55; // [rsp+100h] [rbp+0h] BYREF
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v58; // [rsp+110h] [rbp+10h] BYREF
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]

  v46 = a1;
  v4 = a1;
  v5 = 0;
  if ( a3 )
  {
    v5 = (*(_BYTE *)a3 & 4) != 0;
    if ( (*(_DWORD *)(a3 + 4) & 0x8000) != 0 )
      v5 |= 4u;
  }
  if ( a2 && a3 && (*(_DWORD *)a3 & 0x8000) != 0 )
    v5 |= 2u;
  if ( !v5 )
  {
    v7 = 0LL;
    goto LABEL_30;
  }
  if ( a2 )
  {
    v7 = *(unsigned __int16 **)(a2 + 16);
    v43 = *(_DWORD *)(a2 + 28);
    if ( *(_BYTE *)(a2 + 96) )
    {
      v41 = 5123;
      v8 = 1063;
      v42 = 640;
      goto LABEL_9;
    }
    v8 = 1064;
    LOWORD(v41) = 5124;
    v9 = 641;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v4 = v46;
    v7 = PoolWithTag;
    v43 = 0;
    LOWORD(v41) = 0;
    v8 = 1062;
    v9 = 611;
  }
  LOWORD(v42) = v9;
LABEL_9:
  v40 = v8;
  if ( !v7 )
  {
    v5 &= ~1u;
    if ( !v5 )
      goto LABEL_30;
  }
  LODWORD(v50) = 0;
  v45 = 0;
  v49 = 0LL;
  v37 = 0;
  v39 = 0;
  v38 = 0;
  v10 = MmEnumerateAddressSpaceAndReferenceImages(v4, v5);
  v52 = v10;
  if ( !v10 )
    goto LABEL_30;
  if ( !*v10 )
    goto LABEL_29;
  v11 = v10 + 1;
  do
  {
    v12 = (__m128i *)(v11 - 1);
    v47 = 0;
    v13 = 0;
    v14 = *(v11 - 1) & 3;
    *(v11 - 1) &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
    {
      if ( (v5 & 2) != 0 )
      {
        v24 = *v11;
        v25 = *v11 & 1;
        v44 = 1;
        v45 = v25;
        v50 = (v24 >> 1) & 0x1F;
        v49 = v11[3];
        *v11 = v24 & 0xFFFFFFFFFFFFFFC0uLL;
      }
      else
      {
        v44 = 0;
      }
      v15 = *v11 >> 10;
      v16 = (*v11 >> 6) & 0xF;
      *v11 &= 0xFFFFFFFFFFFFE03FuLL;
      v17 = v15 & 7;
      v48 = 0LL;
      if ( FltMgrCallbacks
        && (*(int (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 16))(
             v12->m128i_i64[0],
             512LL,
             v7,
             &v48) >= 0
        || (int)ObQueryNameStringMode(v12->m128i_i64[0], (_DWORD)v7, 0x2000, (unsigned int)&v38, 0) >= 0 )
      {
        if ( a2 )
        {
          v35 = v16;
          v18 = v46;
          EtwpTraceImageRundown(
            v43,
            (unsigned __int16)v41,
            (_DWORD)v7,
            *(_QWORD *)(v46 + 744),
            (__int64)(v11 - 1),
            v35,
            v17);
        }
        else
        {
          v36 = v16;
          v18 = v46;
          PerfLogImageUnload(v7, 0LL, *(_QWORD *)(v46 + 744), (void *)*v11, v11[2], *((_DWORD *)v11 + 8), v36, v17, 0);
        }
      }
      else
      {
        v18 = v46;
      }
      if ( v48 )
        (*(void (**)(void))(FltMgrCallbacks + 24))();
      v19 = (void *)v12->m128i_i64[0];
      v20 = v44;
      v51 = (void *)v12->m128i_i64[0];
      if ( v44 )
      {
        v26 = v12[1];
        v53 = *v12;
        v54 = v26;
        memset(v11 - 1, 0, 0x30uLL);
        v27 = *(_DWORD *)(v18 + 744);
        v13 = 3;
        v28 = v53;
        v29 = v45;
        *((_DWORD *)v11 + 8) = v27;
        v30 = *(_QWORD *)(v28.m128i_i64[0] + 24);
        v11[3] = v49;
        v31 = v50 & 0x1F;
        *v11 = v30;
        v12->m128i_i64[0] = _mm_srli_si128(v28, 8).m128i_u64[0];
        v32 = v11[1] & 0xFF40FFFFFFFFFFFFuLL | ((v31 | (32LL * (v29 & 1))) << 48) | 0x40000000000000LL;
        v11[2] = _mm_srli_si128(v54, 8).m128i_u64[0];
        v37 = v40;
        v19 = v51;
        v11[1] = v32;
        v39 = 0x8000;
        v38 = 44;
      }
      else
      {
        v13 = v47;
      }
      ObfDereferenceObject(v19);
      v21 = v38;
      v22 = v37;
      v23 = v39;
LABEL_26:
      if ( !v20 )
        goto LABEL_27;
      goto LABEL_50;
    }
    if ( v14 != 2 )
    {
      v21 = 44;
      v22 = v8;
      v23 = 0x8000;
      v37 = v8;
      v39 = 0x8000;
      v38 = 44;
      v13 = 3;
      v20 = 1;
      goto LABEL_26;
    }
    v22 = v42;
    v23 = 536903680;
    v37 = v42;
    v39 = 536903680;
    if ( a2 )
    {
      v21 = 32;
      v38 = 32;
    }
    else
    {
      v38 = 24;
      *((_DWORD *)v11 + 3) = 0x8000;
      v21 = v38;
    }
LABEL_50:
    if ( a2 )
    {
      v33 = 5249026;
      if ( v13 )
        v33 = v13 | 0x501800;
      v55 = v11 - 1;
      v56 = v21;
      v57 = 0;
      EtwpLogKernelEvent((__int64)&v55, EtwpHostSiloState, v43, 1u, v22, v33);
    }
    else
    {
      v34 = 5249282;
      if ( v13 )
        v34 = v13 | 0x501900;
      v58 = v11 - 1;
      v59 = v21;
      v60 = 0;
      EtwTraceKernelEvent((int)&v58, 1, v23, v22, v34);
    }
LABEL_27:
    LOWORD(v8) = v40;
    v11 += 6;
  }
  while ( *(v11 - 1) );
  v10 = v52;
LABEL_29:
  ExFreePoolWithTag(v10, 0);
LABEL_30:
  if ( !a2 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
}
