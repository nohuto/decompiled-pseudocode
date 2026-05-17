/*
 * XREFs of TppPrepareDirectParams @ 0x180020180
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     TppUpdatePoolNodeStatus @ 0x180087B70 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A8F90 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r10
  int v11; // ebp
  int v12; // r15d
  int v13; // r9d
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 *v16; // rcx
  __int64 v17; // rax
  char v18; // r11
  signed __int64 v19; // rax
  unsigned __int8 v20; // bl
  char v21; // si
  int v22; // r9d
  char v23; // r10
  unsigned int v24; // ecx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  __int64 result; // rax
  _QWORD *v28; // rbx
  volatile signed __int64 *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rbx
  volatile signed __int64 *v33; // rcx
  _QWORD *v34; // rcx
  __int64 ***v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int i; // esi
  __int64 *v43; // rax
  __int64 *v44; // rdx
  __int64 **v45; // rcx
  __int64 *v46; // rdx
  __int64 **v47; // rax
  unsigned int j; // esi
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // esi
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  __int64 v54; // [rsp+0h] [rbp-98h] BYREF
  bool v55; // [rsp+20h] [rbp-78h]
  unsigned int v56; // [rsp+24h] [rbp-74h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v58; // [rsp+30h] [rbp-68h]
  _QWORD *v59; // [rsp+38h] [rbp-60h]
  __int64 v60; // [rsp+40h] [rbp-58h]
  __int64 *v61; // [rsp+48h] [rbp-50h] BYREF
  __int64 **v62; // [rsp+50h] [rbp-48h]
  char v63; // [rsp+A0h] [rbp+8h]
  signed __int64 v64; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v65; // [rsp+A8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v57) = 0;
  v10 = 0;
  v60 = a1 + 304;
  v63 = 0;
  v11 = 0;
  v65 = 0;
  v12 = a3;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    if ( *(_QWORD *)v9 )
    {
      v18 = 1;
    }
    else
    {
      v65 = 1;
      v18 = 0;
    }
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v62 = &v61;
    v14 = a2 + 56 * v8;
    v15 = a3;
    v61 = (__int64 *)&v61;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = (__int64 *)(a2 + 32LL * --v15);
      a3 = v15;
      v17 = *v16;
      v59 = (_QWORD *)v17;
      if ( v17 )
      {
        if ( v10 )
        {
          v28 = (_QWORD *)(a2 + 56LL * v15);
          v58 = (volatile signed __int64 *)(v17 + 32);
          memmove(v28, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v29 = v58;
          v28[6] = v14;
          RtlAcquireSRWLockExclusive(v29);
          v30 = v59 + 5;
          v31 = (_QWORD *)v59[6];
          v55 = *v30 == (_QWORD)v30;
          v32 = v28 + 4;
          if ( (_QWORD *)*v31 != v59 + 5 )
            __fastfail(3u);
          v33 = v58;
          *v32 = v30;
          v32[1] = v31;
          *v31 = v32;
          v30[1] = v32;
          RtlReleaseSRWLockExclusive(v33);
          v13 = v57 + 1;
          LODWORD(v57) = v57 + 1;
          if ( v55 )
          {
            v34 = v62;
            v35 = (__int64 ***)(v59 + 2);
            if ( *v62 != (__int64 *)&v61 )
              __fastfail(3u);
            v59[3] = v62;
            *v35 = &v61;
            ++v11;
            *v34 = v35;
            v62 = (__int64 **)v35;
          }
          v10 = v63;
          v9 = v60;
        }
        else
        {
          v10 = 1;
          v63 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *((_OWORD *)v16 + 1);
        }
      }
      else
      {
        v65 = 1;
      }
    }
    while ( v15 );
    if ( v13 != v12 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *(_QWORD *)v14);
    if ( v11 )
    {
      v36 = (__int64)(v61 - 2);
      v37 = &v54 + 7;
      v38 = 4294967294LL;
      if ( v61 - 2 != v37 )
      {
        do
        {
          a3 = *(unsigned int *)(v36 + 8);
          v6 |= 1LL << a3;
          if ( (_DWORD)v38 != -1 )
          {
            if ( (_DWORD)v38 == -2 )
            {
              v38 = (unsigned int)a3;
            }
            else if ( (_DWORD)v38 != (_DWORD)a3 )
            {
              v38 = 0xFFFFFFFFLL;
            }
          }
          v36 = *(_QWORD *)(v36 + 16) - 16LL;
        }
        while ( (__int64 *)v36 != v37 );
      }
      TppUpdatePoolNodeStatus(a5, v38, a3);
      v57 = v6;
      if ( (_DWORD)v6 )
      {
        v39 = v6;
        do
        {
          v40 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v41, v39);
          v56 = v41;
          RtlAcquireSRWLockExclusive(v40 + 8 * (v41 + 2 * (v41 + 1)));
          v39 &= ~(1 << v41);
        }
        while ( v39 );
      }
      for ( i = HIDWORD(v57); i; i &= ~(1 << v52) )
      {
        _BitScanForward(&v52, i);
        v56 = v52;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v52 + 32 + 2 * (v52 + 32 + 1LL)));
      }
      while ( 1 )
      {
        v43 = v61;
        if ( v61 == (__int64 *)&v61 )
          break;
        v44 = (__int64 *)*v61;
        v45 = (__int64 **)v61[1];
        if ( *(__int64 **)(*v61 + 8) != v61 || *v45 != v61 )
          __fastfail(3u);
        *v45 = v44;
        v44[1] = (__int64)v45;
        v46 = v43;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v43 - 2);
        v47 = *(__int64 ***)(a3 + 8);
        if ( *v47 != (__int64 *)a3 )
          __fastfail(3u);
        *v46 = a3;
        v46[1] = (__int64)v47;
        *v47 = v46;
        *(_QWORD *)(a3 + 8) = v46;
      }
      v57 = v6;
      if ( HIDWORD(v6) )
      {
        v51 = HIDWORD(v57);
        do
        {
          _BitScanReverse(&v53, v51);
          v56 = v53;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24)
                                                               + 8 * (v53 + 32 + 2 * (v53 + 32 + 1LL))));
          v51 &= ~(1 << v53);
        }
        while ( v51 );
      }
      for ( j = v57; j; j &= ~(1 << v50) )
      {
        v49 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v50, j);
        v56 = v50;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v49 + 8 * (v50 + 2 * (v50 + 1))));
      }
    }
    v18 = v63;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v64) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = v11 + HIDWORD(v19);
    v23 = 0;
    HIDWORD(v64) = v11 + HIDWORD(v19);
    if ( !v20 )
    {
      a3 = v65;
      v24 = (unsigned __int16)(v64 ^ (v64 - 1)) ^ (unsigned int)v64;
      LODWORD(v64) = v24;
      if ( v65 )
      {
        a3 = v65;
        v24 = (unsigned __int16)v24 | ((HIWORD(v24) - 1) << 16);
        LODWORD(v64) = v24;
      }
      if ( !v18 )
      {
        if ( v22 )
        {
          HIDWORD(v64) = --v22;
        }
        else
        {
          v21 = 1;
          v24 ^= (unsigned __int16)(v24 ^ (v24 + 1));
          LODWORD(v64) = v24;
        }
      }
      if ( (v11 || (_BYTE)a3) && v22 && (v24 & 0xFFFF0000) == 0 )
      {
        v23 = 1;
        a3 = (unsigned __int16)v24 ^ ((v24 & 0xFFFF0000) + 0x10000);
        LODWORD(v64) = (unsigned __int16)v24 ^ ((v24 & 0xFFFF0000) + 0x10000);
      }
    }
    v25 = v64;
    v26 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v64, v19);
    LODWORD(v64) = v19;
  }
  while ( v26 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v25, a3);
  result = v20;
  *a6 = v21;
  return result;
}
