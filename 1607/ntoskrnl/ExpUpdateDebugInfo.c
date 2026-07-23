/*
 * XREFs of ExpUpdateDebugInfo @ 0x1406AD94C
 * Callers:
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     ExDestroyHandle @ 0x14051C038 (ExDestroyHandle.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExReferenceHandleDebugInfo @ 0x1404B7C04 (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD484 (ExDereferenceHandleDebugInfo.c)
 */

void __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  char v10; // si
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r11d
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r8
  volatile signed __int32 *v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  volatile signed __int32 *v23; // r14
  ULONG v24; // edi
  ULONG v25; // edi
  ULONG v26; // eax

  v8 = ExReferenceHandleDebugInfo(a1);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    if ( (v8[2] & 3) != 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v8 + 4));
      v10 = 1;
    }
    v11 = *((_DWORD *)v9 + 2);
    if ( (v11 & 1) != 0 )
    {
      *((_DWORD *)v9 + 2) = v11 & 0x3FFFFFFE | 0x80000000;
      *((_DWORD *)v9 + 18) = 0;
      memset((void *)(v9 + 20), 0, 160LL * *((unsigned int *)v9 + 1) + 80);
    }
    v12 = *((_DWORD *)v9 + 2);
    if ( (v12 & 2) != 0 && a4 == 2 )
    {
      v13 = *((_DWORD *)v9 + 18);
      v14 = v13;
      if ( (v12 & 0x40000000) != 0 )
        v14 = *((_DWORD *)v9 + 1);
      v15 = 1;
      if ( v14 )
      {
        v16 = *((_DWORD *)v9 + 1);
        while ( 1 )
        {
          v17 = v15 % v16;
          if ( v9[40 * (unsigned int)v17 + 26] == 1 && *(_QWORD *)&v9[40 * v17 + 24] == a3 )
            break;
          if ( ++v15 > v14 )
            goto LABEL_25;
        }
        *((_DWORD *)v9 + 18) = v13 - 1;
        v18 = (v13 - 1) % v16;
        if ( (_DWORD)v18 )
        {
          v19 = &v9[40 * (v15 % v16)];
          v20 = &v9[40 * v18];
          *((_OWORD *)v19 + 5) = *((_OWORD *)v20 + 5);
          *((_OWORD *)v19 + 6) = *((_OWORD *)v20 + 6);
          *((_OWORD *)v19 + 7) = *((_OWORD *)v20 + 7);
          *((_OWORD *)v19 + 8) = *((_OWORD *)v20 + 8);
          *((_OWORD *)v19 + 9) = *((_OWORD *)v20 + 9);
          *((_OWORD *)v19 + 10) = *((_OWORD *)v20 + 10);
          *((_OWORD *)v19 + 11) = *((_OWORD *)v20 + 11);
          *((_OWORD *)v19 + 12) = *((_OWORD *)v20 + 12);
          *((_OWORD *)v19 + 13) = *((_OWORD *)v20 + 13);
          *((_OWORD *)v19 + 14) = *((_OWORD *)v20 + 14);
        }
      }
    }
    else
    {
      v21 = (unsigned int)_InterlockedIncrement(v9 + 18) % *((_DWORD *)v9 + 1);
      if ( !v21 )
      {
        v22 = *((_DWORD *)v9 + 2) | 0x40000000;
        *((_DWORD *)v9 + 2) = v22;
        if ( (v22 & 4) != 0 )
          __debugbreak();
      }
      v23 = &v9[40 * v21 + 20];
      *(_OWORD *)v23 = *(_OWORD *)(a2 + 1584);
      *((_QWORD *)v23 + 2) = a3;
      *((_DWORD *)v23 + 6) = a4;
      v24 = RtlWalkFrameChain((PVOID *)v23 + 4, 0x10u, 0x300u);
      if ( v24 <= 3 )
        v25 = 0;
      else
        v25 = v24 - 3;
      v26 = RtlWalkFrameChain((PVOID *)&v23[2 * v25 + 8], 16 - v25, 1u);
      memset((void *)&v23[2 * v26 + 8 + 2 * v25], 0, 8LL * (16 - (v26 + v25)));
    }
LABEL_25:
    if ( v10 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 4));
    ExDereferenceHandleDebugInfo(a1, v9);
  }
}
