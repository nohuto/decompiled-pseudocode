/*
 * XREFs of TppPrepareDirectParams @ 0x180020170
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TppUpdatePoolNodeStatus @ 0x180087B60 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A8F90 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r10
  int v11; // ebp
  int v13; // r9d
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  _RTL_SRWLOCK *v18; // rax
  char v19; // r11
  signed __int64 v20; // rax
  unsigned __int8 v21; // bl
  char v22; // si
  int v23; // r9d
  char v24; // r10
  char v25; // r8
  unsigned int v26; // ecx
  signed __int64 v27; // rtt
  __int64 result; // rax
  unsigned __int64 **v29; // rbx
  _RTL_SRWLOCK *v30; // rcx
  unsigned __int64 *v31; // rax
  _RTL_SRWLOCK **Value; // rdx
  unsigned __int64 **v33; // rbx
  _RTL_SRWLOCK *v34; // rcx
  unsigned __int64 **v35; // rcx
  unsigned __int64 *v36; // rax
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
  __int64 v48; // r8
  __int64 **v49; // rax
  unsigned int j; // esi
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned int v53; // esi
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  __int64 v56; // [rsp+0h] [rbp-98h] BYREF
  bool v57; // [rsp+20h] [rbp-78h]
  unsigned int v58; // [rsp+24h] [rbp-74h]
  __int64 v59; // [rsp+28h] [rbp-70h]
  PRTL_SRWLOCK SRWLock; // [rsp+30h] [rbp-68h]
  _RTL_SRWLOCK *v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  __int64 *v63; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 *v64; // [rsp+50h] [rbp-48h]
  char v65; // [rsp+A0h] [rbp+8h]
  signed __int64 v66; // [rsp+A0h] [rbp+8h]
  char v67; // [rsp+A8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v59) = 0;
  v10 = 0;
  v62 = a1 + 304;
  v65 = 0;
  v11 = 0;
  v67 = 0;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    if ( *(_QWORD *)v9 )
    {
      v19 = 1;
    }
    else
    {
      v67 = 1;
      v19 = 0;
    }
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v64 = (unsigned __int64 *)&v63;
    v14 = a2 + 56 * v8;
    v15 = a3;
    v63 = (__int64 *)&v63;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      v17 = v15;
      v18 = *(_RTL_SRWLOCK **)v16;
      v61 = v18;
      if ( v18 )
      {
        if ( v10 )
        {
          v29 = (unsigned __int64 **)(a2 + 56LL * v15);
          SRWLock = v18 + 4;
          memmove(v29, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v30 = SRWLock;
          v29[6] = (unsigned __int64 *)v14;
          RtlAcquireSRWLockExclusive(v30);
          v31 = (unsigned __int64 *)&v61[5];
          Value = (_RTL_SRWLOCK **)v61[6].Value;
          v57 = *v31 == (_QWORD)v31;
          v33 = v29 + 4;
          if ( *Value != &v61[5] )
            __fastfail(3u);
          v34 = SRWLock;
          *v33 = v31;
          v33[1] = (unsigned __int64 *)Value;
          *Value = (_RTL_SRWLOCK *)v33;
          v31[1] = (unsigned __int64)v33;
          RtlReleaseSRWLockExclusive(v34);
          v13 = v59 + 1;
          LODWORD(v59) = v59 + 1;
          if ( v57 )
          {
            v35 = (unsigned __int64 **)v64;
            v36 = (unsigned __int64 *)&v61[2];
            if ( (__int64 **)*v64 != &v63 )
              __fastfail(3u);
            v61[3].Value = (unsigned __int64)v64;
            *v36 = (unsigned __int64)&v63;
            ++v11;
            *v35 = v36;
            v64 = v36;
          }
          v10 = v65;
          v9 = v62;
        }
        else
        {
          v10 = 1;
          v65 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v67 = 1;
      }
    }
    while ( v15 );
    if ( v13 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v14);
    if ( v11 )
    {
      v37 = (__int64)(v63 - 2);
      v38 = &v56 + 7;
      v39 = 4294967294LL;
      if ( v63 - 2 != v38 )
      {
        do
        {
          v17 = *(unsigned int *)(v37 + 8);
          v6 |= 1LL << v17;
          if ( (_DWORD)v39 != -1 )
          {
            if ( (_DWORD)v39 == -2 )
            {
              v39 = (unsigned int)v17;
            }
            else if ( (_DWORD)v39 != (_DWORD)v17 )
            {
              v39 = 0xFFFFFFFFLL;
            }
          }
          v37 = *(_QWORD *)(v37 + 16) - 16LL;
        }
        while ( (__int64 *)v37 != v38 );
      }
      TppUpdatePoolNodeStatus(a5, v39, v17);
      v59 = v6;
      if ( (_DWORD)v6 )
      {
        v40 = v6;
        do
        {
          v41 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v42, v40);
          v58 = v42;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v41 + 8 * (v42 + 2 * (v42 + 1))));
          v40 &= ~(1 << v42);
        }
        while ( v40 );
      }
      for ( i = HIDWORD(v59); i; i &= ~(1 << v54) )
      {
        _BitScanForward(&v54, i);
        v58 = v54;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v54 + 32 + 2 * (v54 + 32 + 1LL))));
      }
      while ( 1 )
      {
        v44 = v63;
        if ( v63 == (__int64 *)&v63 )
          break;
        v45 = (__int64 *)*v63;
        v46 = (__int64 **)v63[1];
        if ( *(__int64 **)(*v63 + 8) != v63 || *v46 != v63 )
          __fastfail(3u);
        *v46 = v45;
        v45[1] = (__int64)v46;
        v47 = v44;
        v48 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v44 - 2);
        v49 = *(__int64 ***)(v48 + 8);
        if ( *v49 != (__int64 *)v48 )
          __fastfail(3u);
        *v47 = v48;
        v47[1] = (__int64)v49;
        *v49 = v47;
        *(_QWORD *)(v48 + 8) = v47;
      }
      v59 = v6;
      if ( HIDWORD(v6) )
      {
        v53 = HIDWORD(v59);
        do
        {
          _BitScanReverse(&v55, v53);
          v58 = v55;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v55 + 32 + 2 * (v55 + 32 + 1LL))));
          v53 &= ~(1 << v55);
        }
        while ( v53 );
      }
      for ( j = v59; j; j &= ~(1 << v52) )
      {
        v51 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v52, j);
        v58 = v52;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v51 + 8 * (v52 + 2 * (v52 + 1))));
      }
    }
    v19 = v65;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v66) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = v11 + HIDWORD(v20);
    v24 = 0;
    HIDWORD(v66) = v11 + HIDWORD(v20);
    if ( !v21 )
    {
      v25 = v67;
      v26 = (unsigned __int16)(v66 ^ (v66 - 1)) ^ (unsigned int)v66;
      LODWORD(v66) = v26;
      if ( v67 )
      {
        v25 = v67;
        v26 = (unsigned __int16)v26 | ((HIWORD(v26) - 1) << 16);
        LODWORD(v66) = v26;
      }
      if ( !v19 )
      {
        if ( v23 )
        {
          HIDWORD(v66) = --v23;
        }
        else
        {
          v22 = 1;
          v26 ^= (unsigned __int16)(v26 ^ (v26 + 1));
          LODWORD(v66) = v26;
        }
      }
      if ( (v11 || v25) && v23 && (v26 & 0xFFFF0000) == 0 )
      {
        v24 = 1;
        LODWORD(v66) = (unsigned __int16)v26 ^ ((v26 & 0xFFFF0000) + 0x10000);
      }
    }
    v27 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v66, v20);
    LODWORD(v66) = v20;
  }
  while ( v27 != v20 );
  if ( v24 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v21;
  *a6 = v22;
  return result;
}
