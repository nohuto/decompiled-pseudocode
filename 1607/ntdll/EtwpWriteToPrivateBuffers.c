/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18005B244
 * Callers:
 *     EtwpEventWriteFull @ 0x18005AF94 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x1800FD1A0 (EtwEventWriteString.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18005BD00 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
 *     EtwpCheckForEnoughStackSpace @ 0x1800FD808 (EtwpCheckForEnoughStackSpace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1800FDA00 (EtwpGetStackExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        unsigned __int64 a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  unsigned int v13; // r12d
  unsigned int v14; // r8d
  int v15; // eax
  _BYTE *v16; // rdi
  _WORD *v17; // r13
  unsigned __int16 v18; // r11
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int16 v25; // r8
  unsigned int v26; // r9d
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r15
  _GUID ActivityId; // xmm0
  unsigned int v32; // esi
  void *v33; // rcx
  _BYTE *v34; // rdi
  __int64 v35; // rsi
  unsigned int v36; // r12d
  int v37; // edx
  char v38; // al
  void *v39; // rcx
  unsigned __int64 v40; // rax
  struct _TEB *v41; // rcx
  unsigned __int16 *v43; // rax
  unsigned int v44; // edx
  unsigned __int16 v45; // si
  unsigned __int16 v46; // si
  unsigned __int16 *v47; // rdi
  __int64 v48; // rbx
  unsigned __int16 *v49; // rcx
  unsigned __int16 *v50; // rbx
  __int64 v51; // rcx
  unsigned __int16 v52; // ax
  size_t v53; // rbx
  char *v54; // r13
  void *v55; // rsp
  NTSTATUS v56; // eax
  ULONG v57; // r8d
  _WORD *v58; // rbx
  unsigned __int16 v59; // di
  _DWORD *v60; // rdx
  void *v61; // rbx
  char v62; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v63; // [rsp+810h] [rbp+0h]
  char v64; // [rsp+814h] [rbp+4h]
  char v65; // [rsp+815h] [rbp+5h]
  char v66; // [rsp+816h] [rbp+6h]
  unsigned __int16 v67[2]; // [rsp+818h] [rbp+8h] BYREF
  int v68; // [rsp+81Ch] [rbp+Ch]
  unsigned __int16 v69; // [rsp+820h] [rbp+10h]
  int v70; // [rsp+824h] [rbp+14h]
  ULONG ReturnLength; // [rsp+828h] [rbp+18h] BYREF
  int v72; // [rsp+82Ch] [rbp+1Ch]
  unsigned int v73; // [rsp+830h] [rbp+20h]
  int v74; // [rsp+834h] [rbp+24h]
  unsigned int v75; // [rsp+838h] [rbp+28h]
  ULONG v76; // [rsp+83Ch] [rbp+2Ch]
  void *v77; // [rsp+840h] [rbp+30h] BYREF
  unsigned __int64 v78; // [rsp+848h] [rbp+38h]
  unsigned __int16 *v79; // [rsp+850h] [rbp+40h] BYREF
  unsigned __int64 v80; // [rsp+858h] [rbp+48h] BYREF
  _BYTE *v81; // [rsp+860h] [rbp+50h]
  __int64 v82; // [rsp+870h] [rbp+60h]
  void *Src; // [rsp+880h] [rbp+70h]
  void *v84; // [rsp+888h] [rbp+78h]
  __int64 v85; // [rsp+890h] [rbp+80h]
  __int64 v86; // [rsp+898h] [rbp+88h]
  char TokenInformation[16]; // [rsp+8B0h] [rbp+A0h] BYREF
  char v88[80]; // [rsp+8C0h] [rbp+B0h] BYREF
  _OWORD *v89; // [rsp+978h] [rbp+168h]

  v89 = a2;
  v11 = a1;
  v78 = a1;
  v80 = a1;
  v12 = a9;
  v86 = a9;
  v82 = a10;
  v13 = 0;
  v77 = 0LL;
  v67[0] = 0;
  v69 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
  {
    if ( (unsigned __int8)EtwpCheckForEnoughStackSpace() )
    {
      v55 = alloca(2064LL);
      v77 = &v62;
      EtwpGetStackExtendedHeaderItem(&v77, v67);
    }
    a2 = v89;
  }
  v14 = 0;
  v73 = 0;
  v15 = a4;
  v70 = a4;
  v16 = (_BYTE *)(v11 + 149);
  v81 = (_BYTE *)(v11 + 149);
  while ( 1 )
  {
    v85 = 0LL;
    v79 = 0LL;
    v17 = 0LL;
    v68 = 80;
    v65 = 0;
    v64 = 0;
    v66 = 0;
    LOWORD(v76) = 0;
    ReturnLength = 0;
    v18 = 0;
    v63 = 0;
    v72 = 0;
    v84 = 0LL;
    if ( !_bittest(&v15, v14) )
    {
      v19 = *((_QWORD *)a2 + 1);
      if ( *(v16 - 1) )
        break;
    }
LABEL_6:
    v73 = ++v14;
    v16 += 24;
    v81 = v16;
    if ( v14 >= 4 )
      return v13;
    v12 = v86;
    a2 = v89;
  }
  if ( *((_BYTE *)a2 + 4) > *v16 && *v16
    || ((*(v16 - 5) & 0x40) == 0 || v19)
    && ((v19 & *(_QWORD *)(v16 - 13)) == 0 || (v19 & *(_QWORD *)(v16 - 21)) != *(_QWORD *)(v16 - 21)) )
  {
    goto LABEL_56;
  }
  v20 = (unsigned __int8)v16[1];
  v75 = v20;
  v21 = v20 & 0xFFFF7FFF;
  if ( (v20 & 0xFFFF7FFF) < 0x40 && EtwpLoggerArray )
  {
    _mm_lfence();
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v21 + 8), 1u);
    if ( (*(_QWORD *)(EtwpLoggerArray + 16LL * v21) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v21 + 8));
      v13 = 4201;
      goto LABEL_56;
    }
    v85 = *(_QWORD *)(EtwpLoggerArray + 16LL * v21);
    v13 = 0;
  }
  else
  {
    v13 = 4201;
  }
  v74 = v13;
  if ( v13 )
  {
LABEL_56:
    v15 = v70;
    goto LABEL_6;
  }
  v22 = 80;
  if ( a7 )
    v22 = 104;
  if ( (*(v16 - 5) & 1) != 0 )
  {
    v56 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength);
    v20 = v75;
    v18 = 0;
    if ( v56 >= 0 )
    {
      v57 = ReturnLength - 16;
      ReturnLength = v57;
      LOWORD(v57) = (v57 + 15) & 0xFFF8;
      v76 = v57;
      v64 = 1;
      v22 += (unsigned __int16)v57;
    }
  }
  if ( (*(v16 - 5) & 4) != 0 && v77 )
  {
    v66 = 1;
    v22 += v67[0];
  }
  if ( (*(v16 - 5) & 2) != 0 )
  {
    v65 = 1;
    v22 += 16;
  }
  v23 = v82 + 32LL * *(unsigned int *)(v82 + 128);
  v24 = 0;
  if ( a8 )
  {
    v25 = (*(_WORD *)(v11 + 98) >> 14) & 1;
    while ( 1 )
    {
      v26 = v22;
      v27 = v25 ? *(_BYTE *)(16LL * v24 + v12 + 12) : 0;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          v18 += *(_WORD *)(v12 + 16LL * v24 + 8);
          v63 = v18;
          ++v72;
        }
        else if ( v27 == 2 )
        {
          Src = *(void **)(v12 + 16LL * v24);
          v69 = *(_WORD *)(v12 + 16LL * v24 + 8);
          v22 += (v69 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v22 += *(_DWORD *)(v12 + 16LL * v24 + 8);
      }
      if ( v22 < v26 )
        break;
      if ( ++v24 >= a8 )
        goto LABEL_32;
    }
    v13 = 534;
    v74 = 534;
  }
LABEL_32:
  if ( v72 )
    v22 += (v18 + 15) & 0xFFFFFFF8;
  if ( v13 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v20 + 8));
    return v13;
  }
  *(_DWORD *)(v23 + 24) = v22;
  v28 = v85;
  v29 = EtwpReserveTraceBuffer(v85, v22, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v80, &v79);
  v30 = v29;
  if ( v29 )
  {
    *(_QWORD *)v23 = v28;
    *(_QWORD *)(v23 + 8) = v29;
    *(_QWORD *)(v23 + 16) = v79;
    ++*(_DWORD *)(v82 + 128);
    *(_DWORD *)v29 = v22 | *(_DWORD *)(v28 + 44);
    *(_WORD *)(v29 + 4) = a5;
    *(_WORD *)(v29 + 6) = a3;
    *(_OWORD *)(v29 + 24) = *(_OWORD *)(v78 + 32);
    *(_OWORD *)(v29 + 40) = *v89;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(_GUID *)(v29 + 64) = ActivityId;
    if ( a7 )
    {
      v17 = (_WORD *)(v29 + 80);
      *(_DWORD *)(v29 + 80) = 65560;
      *(_DWORD *)(v29 + 84) = 0x100000;
      *(_OWORD *)(v29 + 88) = *a7;
      *(_WORD *)(v29 + 4) |= 1u;
      v32 = 104;
      v68 = 104;
    }
    else
    {
      v32 = v68;
    }
    if ( v64 == 1 )
    {
      v58 = (_WORD *)(v29 + v32);
      v59 = v76;
      *v58 = v76;
      v58[1] = 2;
      v58[3] = ReturnLength;
      v58[2] = 0;
      memmove(v58 + 4, v88, ReturnLength);
      *(_WORD *)(v30 + 4) |= 1u;
      v32 += v59;
      v68 = v32;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v58;
    }
    if ( v65 == 1 )
    {
      v60 = (_DWORD *)(v30 + v32);
      *v60 = 196624;
      v60[1] = 0x40000;
      v60[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v30 + 4) |= 1u;
      v32 += 16;
      v68 = v32;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v60;
    }
    if ( v66 == 1 )
    {
      v61 = (void *)(v30 + v32);
      memmove(v61, v77, v67[0]);
      *(_WORD *)(v30 + 4) |= 1u;
      v32 += v67[0];
      v68 = v32;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v61;
    }
    v33 = Src;
    if ( Src )
    {
      v43 = (unsigned __int16 *)(v30 + v32);
      v79 = v43;
      v44 = v69;
      v45 = (v69 + 15) & 0xFFF8;
      *v43 = v45;
      *(_DWORD *)(v43 + 1) = 12;
      v43[3] = v44;
      v46 = v45 - v44 - 8;
      v47 = v43 + 4;
      v48 = v44;
      memmove(v43 + 4, v33, v44);
      memset((char *)v47 + v48, 0, v46);
      *(_WORD *)(v30 + 4) |= 1u;
      v49 = v79;
      v32 = *v79 + v68;
      v68 = v32;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v49;
    }
    if ( v72 )
    {
      v50 = (unsigned __int16 *)(v30 + v32);
      v51 = v63;
      v52 = (v63 + 15) & 0xFFF8;
      *v50 = v52;
      *(_DWORD *)(v50 + 1) = 11;
      v50[3] = v51;
      v84 = v50 + 4;
      memset((char *)v50 + v51 + 8, 0, (unsigned __int16)(v52 - v51 - 8));
      *(_WORD *)(v30 + 4) |= 1u;
      v68 = *v50 + v32;
      if ( v17 )
        v17[2] |= 1u;
    }
    if ( a8 )
    {
      v34 = (_BYTE *)(v86 + 12);
      v35 = a8;
      v36 = v68;
      do
      {
        v37 = *((_DWORD *)v34 - 1);
        v38 = 0;
        if ( (*(_WORD *)(v78 + 98) & 0x4000) != 0 )
          v38 = *v34;
        if ( v38 )
        {
          if ( v38 == 1 )
          {
            v53 = *((unsigned int *)v34 - 1);
            v54 = (char *)v84;
            memmove(v84, *(const void **)(v34 - 12), v53);
            v84 = &v54[v53];
          }
          else if ( v38 == 3 && v37 == 8 )
          {
            v80 = **(_QWORD **)(v34 - 12);
          }
        }
        else
        {
          v39 = (void *)(v30 + v36);
          v36 += v37;
          memmove(v39, *(const void **)(v34 - 12), *((unsigned int *)v34 - 1));
        }
        v34 += 16;
        --v35;
      }
      while ( v35 );
      v13 = v74;
    }
    v40 = v80;
    *(_QWORD *)(v30 + 16) = v80;
    if ( *(_DWORD *)(v85 + 16) != 3 )
      v40 = __rdtsc();
    *(_QWORD *)(v30 + 56) = v40;
    v41 = NtCurrentTeb();
    *(_DWORD *)(v30 + 8) = v41->ClientId.UniqueThread;
    *(_DWORD *)(v30 + 12) = v41->ClientId.UniqueProcess;
    v16 = v81;
    v11 = v78;
    v14 = v73;
    goto LABEL_56;
  }
  if ( v22 <= 0xFFF8 )
    v13 = *(_DWORD *)(v28 + 212) < v22 ? 234 : 8;
  else
    v13 = 534;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v75 + 8));
  return v13;
}
