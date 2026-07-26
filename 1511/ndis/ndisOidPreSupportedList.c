/*
 * XREFs of ndisOidPreSupportedList @ 0x1C00221E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

char __fastcall ndisOidPreSupportedList(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rsi
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // r12
  unsigned int v8; // r14d
  __int64 v10; // rcx

  v1 = a1[4];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(79LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  v3 = a1[3];
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    goto LABEL_8;
  }
  if ( !a1[1] )
  {
    v5 = *a1;
    if ( !*a1 )
      v5 = *(_QWORD *)(a1[2] + 32);
LABEL_8:
    v6 = (KSPIN_LOCK *)(v5 + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 1856) = 2299723;
    if ( *(_QWORD *)(v5 + 3128) )
    {
      v8 = *(_DWORD *)(v5 + 3136) + *(_DWORD *)(v5 + 3456);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v8 )
      {
        *(_DWORD *)(v1 + 56) = v8;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( *((_DWORD *)a1 + 10) )
      {
LABEL_12:
        *(_QWORD *)(v5 + 520) = 0LL;
        *(_DWORD *)(v5 + 1856) = 0;
        KeReleaseSpinLock(v6, v7);
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v5 + 3128), *(unsigned int *)(v5 + 3136));
      v10 = *(unsigned int *)(v5 + 3136);
LABEL_18:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v10), *(const void **)(v5 + 3448), *(unsigned int *)(v5 + 3456));
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
      KeReleaseSpinLock(v6, v7);
      *(_DWORD *)(a1[4] + 52) = v8;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  if ( a1[2] )
    goto LABEL_14;
  v5 = *a1;
  v6 = (KSPIN_LOCK *)(*a1 + 96);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2299780;
  if ( *(_QWORD *)(v5 + 496) )
  {
    v8 = *(_DWORD *)(v5 + 3456) + *(_DWORD *)(v5 + 200);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v8 )
    {
      *(_DWORD *)(v1 + 56) = v8;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( *((_DWORD *)a1 + 10) )
      goto LABEL_12;
    memmove(*(void **)(v1 + 40), *(const void **)(v5 + 496), *(unsigned int *)(v5 + 200));
    v10 = *(unsigned int *)(v5 + 200);
    goto LABEL_18;
  }
LABEL_27:
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock(v6, v7);
LABEL_14:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(80LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1);
  return v4;
}
