/*
 * XREFs of TppPrepareDirectParams @ 0x18002CF40
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppUpdatePoolNodeStatus @ 0x180083548 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A7BB0 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
  int v23; // r9d
  char v24; // r10
  unsigned int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  __int64 result; // rax
  _QWORD *v29; // rbx
  volatile signed __int64 *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rbx
  volatile signed __int64 *v34; // rcx
  __int64 **v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned int i; // esi
  __int64 *v44; // rax
  __int64 *v45; // rdx
  __int64 **v46; // rcx
  __int64 *v47; // rdx
  __int64 **v48; // rax
  unsigned int j; // esi
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned int v52; // esi
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  __int64 v55; // [rsp+0h] [rbp-98h] BYREF
  bool v56; // [rsp+20h] [rbp-78h]
  unsigned int v57; // [rsp+24h] [rbp-74h]
  __int64 v58; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v59; // [rsp+30h] [rbp-68h]
  _QWORD *v60; // [rsp+38h] [rbp-60h]
  __int64 v61; // [rsp+40h] [rbp-58h]
  __int64 *v62; // [rsp+48h] [rbp-50h] BYREF
  __int64 **v63; // [rsp+50h] [rbp-48h]
  char v64; // [rsp+A0h] [rbp+8h]
  signed __int64 v65; // [rsp+A0h] [rbp+8h]
  char v66; // [rsp+A8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v58) = 0;
  v10 = 0;
  v61 = a1 + 304;
  v11 = 0;
  v64 = 0;
  v66 = 0;
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
    v63 = &v62;
    v15 = a2 + 56 * v8;
    v16 = a3;
    v62 = (__int64 *)&v62;
    *(_DWORD *)(v15 + 8) += a3 - 1;
    do
    {
      v17 = (__int64 *)(a2 + 32LL * --v16);
      a3 = v16;
      v18 = *v17;
      v60 = (_QWORD *)v18;
      if ( v18 )
      {
        if ( v10 )
        {
          v29 = (_QWORD *)(a2 + 56LL * v16);
          v59 = (volatile signed __int64 *)(v18 + 32);
          memmove(v29, (const void *)(a2 + 32LL * v16), 0x20uLL);
          v30 = v59;
          v29[6] = v15;
          RtlAcquireSRWLockExclusive(v30);
          v31 = v60 + 5;
          v32 = (_QWORD *)v60[6];
          v56 = *v31 == (_QWORD)v31;
          v29[4] = v60 + 5;
          v33 = v29 + 4;
          v33[1] = v32;
          if ( (_QWORD *)*v32 != v31 )
            __fastfail(3u);
          v34 = v59;
          *v32 = v33;
          v31[1] = v33;
          RtlReleaseSRWLockExclusive(v34);
          v13 = v58 + 1;
          LODWORD(v58) = v58 + 1;
          if ( v56 )
          {
            v35 = v63;
            v36 = v60 + 2;
            v60[2] = &v62;
            v36[1] = (__int64)v35;
            if ( *v35 != (__int64 *)&v62 )
              __fastfail(3u);
            *v35 = v36;
            ++v14;
            v63 = (__int64 **)v36;
          }
          v10 = v64;
          v9 = v61;
        }
        else
        {
          v10 = 1;
          v64 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v17;
          *(_OWORD *)(v9 + 16) = *((_OWORD *)v17 + 1);
        }
      }
      else
      {
        v66 = 1;
      }
    }
    while ( v16 );
    if ( v13 != v12 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v15);
    if ( v14 )
    {
      v37 = (__int64)(v62 - 2);
      v38 = &v55 + 7;
      v39 = 4294967294LL;
      if ( v62 - 2 != v38 )
      {
        do
        {
          a3 = *(unsigned int *)(v37 + 8);
          v6 |= 1LL << a3;
          if ( (_DWORD)v39 != -1 )
          {
            if ( (_DWORD)v39 == -2 )
            {
              v39 = (unsigned int)a3;
            }
            else if ( (_DWORD)v39 != (_DWORD)a3 )
            {
              v39 = 0xFFFFFFFFLL;
            }
          }
          v37 = *(_QWORD *)(v37 + 16) - 16LL;
        }
        while ( (__int64 *)v37 != v38 );
      }
      TppUpdatePoolNodeStatus(a5, v39, a3);
      v58 = v6;
      if ( (_DWORD)v6 )
      {
        v40 = v6;
        do
        {
          v41 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v42, v40);
          v57 = v42;
          RtlAcquireSRWLockExclusive(v41 + 8 * (v42 + 2 * (v42 + 1)));
          v40 &= ~(1 << v42);
        }
        while ( v40 );
      }
      for ( i = HIDWORD(v58); i; i &= ~(1 << v53) )
      {
        _BitScanForward(&v53, i);
        v57 = v53;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (3LL * (v53 + 32) + 2));
      }
      while ( 1 )
      {
        v44 = v62;
        if ( v62 == (__int64 *)&v62 )
          break;
        v45 = (__int64 *)*v62;
        v46 = (__int64 **)v62[1];
        if ( *(__int64 **)(*v62 + 8) != v62 || *v46 != v62 )
          __fastfail(3u);
        *v46 = v45;
        v45[1] = (__int64)v46;
        v47 = v44;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v44 - 2);
        v48 = *(__int64 ***)(a3 + 8);
        *v47 = a3;
        v47[1] = (__int64)v48;
        if ( *v48 != (__int64 *)a3 )
          __fastfail(3u);
        *v48 = v47;
        *(_QWORD *)(a3 + 8) = v47;
      }
      v58 = v6;
      if ( HIDWORD(v6) )
      {
        v52 = HIDWORD(v58);
        do
        {
          _BitScanReverse(&v54, v52);
          v57 = v54;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (3LL * (v54 + 32) + 2)));
          v52 &= ~(1 << v54);
        }
        while ( v52 );
      }
      for ( j = v58; j; j &= ~(1 << v51) )
      {
        v50 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v51, j);
        v57 = v51;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v50 + 8 * (v51 + 2 * (v51 + 1))));
      }
    }
    v19 = v64;
    v11 = v66;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v65) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = v14 + HIDWORD(v20);
    v24 = 0;
    HIDWORD(v65) = v14 + HIDWORD(v20);
    if ( !v21 )
    {
      v25 = (unsigned __int16)(v65 ^ (v65 - 1)) ^ (unsigned int)v65;
      LODWORD(v65) = v25;
      if ( v11 )
      {
        a3 = (HIWORD(v25) - 1) << 16;
        v25 = (unsigned __int16)v25 | ((HIWORD(v25) - 1) << 16);
        LODWORD(v65) = v25;
      }
      if ( !v19 )
      {
        if ( v23 )
        {
          HIDWORD(v65) = --v23;
        }
        else
        {
          v22 = 1;
          v25 ^= (unsigned __int16)(v25 ^ (v25 + 1));
          LODWORD(v65) = v25;
        }
      }
      if ( (v14 || v11) && v23 && (v25 & 0xFFFF0000) == 0 )
      {
        v24 = 1;
        a3 = (unsigned __int16)v25 ^ ((v25 & 0xFFFF0000) + 0x10000);
        LODWORD(v65) = (unsigned __int16)v25 ^ ((v25 & 0xFFFF0000) + 0x10000);
      }
    }
    v26 = v65;
    v27 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v65, v20);
    LODWORD(v65) = v20;
  }
  while ( v27 != v20 );
  if ( v24 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v26, a3);
  result = v21;
  *a6 = v22;
  return result;
}
