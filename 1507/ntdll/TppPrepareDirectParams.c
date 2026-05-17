/*
 * XREFs of TppPrepareDirectParams @ 0x18003B540
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppUpdatePoolNodeStatus @ 0x1800776A0 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180094E50 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r10
  char v11; // r13
  int v12; // r15d
  int v13; // r9d
  int v14; // ebp
  __int64 v15; // r13
  unsigned int v16; // esi
  __int64 *v17; // rcx
  __int64 v18; // rax
  char v19; // r11
  signed __int64 v20; // rax
  unsigned __int8 v21; // bl
  char v22; // si
  __int64 v23; // r9
  char v24; // r10
  unsigned int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  __int64 result; // rax
  _QWORD *v29; // rbx
  volatile signed __int64 *v30; // rcx
  char *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rbx
  volatile signed __int64 *v37; // rcx
  __int64 **v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rdx
  char *v43; // rdx
  __int64 v44; // r9
  unsigned int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rbx
  unsigned int i; // esi
  __int64 *v49; // rax
  __int64 *v50; // rdx
  __int64 **v51; // rcx
  __int64 *v52; // rdx
  __int64 **v53; // rax
  unsigned int j; // esi
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned int v57; // esi
  unsigned int v58; // ebx
  unsigned int v59; // ebx
  __int64 v60; // [rsp+0h] [rbp-98h] BYREF
  bool v61; // [rsp+20h] [rbp-78h]
  unsigned int v62; // [rsp+24h] [rbp-74h]
  __int64 v63; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v64; // [rsp+30h] [rbp-68h]
  _QWORD *v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  __int64 *v67; // [rsp+48h] [rbp-50h] BYREF
  __int64 **v68; // [rsp+50h] [rbp-48h]
  char v69; // [rsp+A0h] [rbp+8h]
  signed __int64 v70; // [rsp+A0h] [rbp+8h]
  char v71; // [rsp+A8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v63) = 0;
  v10 = 0;
  v66 = a1 + 304;
  v11 = 0;
  v69 = 0;
  v71 = 0;
  v12 = a3;
  v13 = 0;
  v14 = 0;
  if ( a2 == a1 + 304 )
  {
    if ( *(_QWORD *)v9 )
    {
      v19 = 1;
    }
    else
    {
      v11 = 1;
      v19 = 0;
    }
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v68 = &v67;
    v15 = a2 + 56 * v8;
    v16 = a3;
    v67 = (__int64 *)&v67;
    *(_DWORD *)(v15 + 8) += a3 - 1;
    do
    {
      v17 = (__int64 *)(a2 + 32LL * --v16);
      a3 = v16;
      v18 = *v17;
      v65 = (_QWORD *)v18;
      if ( v18 )
      {
        if ( v10 )
        {
          v29 = (_QWORD *)(a2 + 56LL * v16);
          v64 = (volatile signed __int64 *)(v18 + 32);
          memmove(v29, (const void *)(a2 + 32LL * v16), 0x20uLL);
          v30 = v64;
          v29[6] = v15;
          RtlAcquireSRWLockExclusive(v30, v31, v32, v33);
          v34 = v65 + 5;
          v35 = (_QWORD *)v65[6];
          v61 = *v34 == (_QWORD)v34;
          v29[4] = v65 + 5;
          v36 = v29 + 4;
          v36[1] = v35;
          if ( (_QWORD *)*v35 != v34 )
            __fastfail(3u);
          v37 = v64;
          *v35 = v36;
          v34[1] = v36;
          RtlReleaseSRWLockExclusive(v37);
          v13 = v63 + 1;
          LODWORD(v63) = v63 + 1;
          if ( v61 )
          {
            v38 = v68;
            v39 = v65 + 2;
            v65[2] = &v67;
            v39[1] = (__int64)v38;
            if ( *v38 != (__int64 *)&v67 )
              __fastfail(3u);
            *v38 = v39;
            ++v14;
            v68 = (__int64 **)v39;
          }
          v10 = v69;
          v9 = v66;
        }
        else
        {
          v10 = 1;
          v69 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v17;
          *(_OWORD *)(v9 + 16) = *((_OWORD *)v17 + 1);
        }
      }
      else
      {
        v71 = 1;
      }
    }
    while ( v16 );
    if ( v13 != v12 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v15);
    if ( v14 )
    {
      v40 = (__int64)(v67 - 2);
      v41 = &v60 + 7;
      v42 = 4294967294LL;
      if ( v67 - 2 != v41 )
      {
        do
        {
          a3 = *(unsigned int *)(v40 + 8);
          v6 |= 1LL << a3;
          if ( (_DWORD)v42 != -1 )
          {
            if ( (_DWORD)v42 == -2 )
            {
              v42 = (unsigned int)a3;
            }
            else if ( (_DWORD)v42 != (_DWORD)a3 )
            {
              v42 = 0xFFFFFFFFLL;
            }
          }
          v40 = *(_QWORD *)(v40 + 16) - 16LL;
        }
        while ( (__int64 *)v40 != v41 );
      }
      TppUpdatePoolNodeStatus(a5, v42, a3);
      v63 = v6;
      if ( (_DWORD)v6 )
      {
        v45 = v6;
        do
        {
          v46 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v47, v45);
          v62 = v47;
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v46 + 8 * (v47 + 2 * (v47 + 1))), v43, a3, v44);
          v45 &= ~(1 << v47);
        }
        while ( v45 );
      }
      for ( i = HIDWORD(v63); i; i &= ~(1 << v58) )
      {
        _BitScanForward(&v58, i);
        v62 = v58;
        RtlAcquireSRWLockExclusive(
          (volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (3LL * (v58 + 32) + 2)),
          v43,
          a3,
          v44);
      }
      while ( 1 )
      {
        v49 = v67;
        if ( v67 == (__int64 *)&v67 )
          break;
        v50 = (__int64 *)*v67;
        v51 = (__int64 **)v67[1];
        if ( *(__int64 **)(*v67 + 8) != v67 || *v51 != v67 )
          __fastfail(3u);
        *v51 = v50;
        v50[1] = (__int64)v51;
        v52 = v49;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v49 - 2);
        v53 = *(__int64 ***)(a3 + 8);
        *v52 = a3;
        v52[1] = (__int64)v53;
        if ( *v53 != (__int64 *)a3 )
          __fastfail(3u);
        *v53 = v52;
        *(_QWORD *)(a3 + 8) = v52;
      }
      v63 = v6;
      if ( HIDWORD(v6) )
      {
        v57 = HIDWORD(v63);
        do
        {
          _BitScanReverse(&v59, v57);
          v62 = v59;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (3LL * (v59 + 32) + 2)));
          v57 &= ~(1 << v59);
        }
        while ( v57 );
      }
      for ( j = v63; j; j &= ~(1 << v56) )
      {
        v55 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v56, j);
        v62 = v56;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v55 + 8 * (v56 + 2 * (v56 + 1))));
      }
    }
    v19 = v69;
    v11 = v71;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v70) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = (unsigned int)(v14 + HIDWORD(v20));
    v24 = 0;
    HIDWORD(v70) = v14 + HIDWORD(v20);
    if ( !v21 )
    {
      v25 = (unsigned __int16)(v70 ^ (v70 - 1)) ^ (unsigned int)v70;
      LODWORD(v70) = v25;
      if ( v11 )
      {
        a3 = (HIWORD(v25) - 1) << 16;
        v25 = (unsigned __int16)v25 | ((HIWORD(v25) - 1) << 16);
        LODWORD(v70) = v25;
      }
      if ( !v19 )
      {
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          HIDWORD(v70) = v23;
        }
        else
        {
          v22 = 1;
          v25 ^= (unsigned __int16)(v25 ^ (v25 + 1));
          LODWORD(v70) = v25;
        }
      }
      if ( (v14 || v11) && (_DWORD)v23 && (v25 & 0xFFFF0000) == 0 )
      {
        v24 = 1;
        a3 = (unsigned __int16)v25 ^ ((v25 & 0xFFFF0000) + 0x10000);
        LODWORD(v70) = (unsigned __int16)v25 ^ ((v25 & 0xFFFF0000) + 0x10000);
      }
    }
    v26 = v70;
    v27 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v70, v20);
    LODWORD(v70) = v20;
  }
  while ( v27 != v20 );
  if ( v24 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v26, a3, v23);
  result = v21;
  *a6 = v22;
  return result;
}
