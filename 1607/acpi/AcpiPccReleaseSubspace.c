/*
 * XREFs of AcpiPccReleaseSubspace @ 0x1C0052790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccReleaseSubspace(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  __int64 *v4; // rbx
  KIRQL v5; // r8
  __int64 **v6; // rax
  __int64 v7; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 520);
  v3 = -1073741823;
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 520));
  if ( (*(_BYTE *)a1 & 0x3C) == 0x14 )
  {
    v6 = (__int64 **)(a1 + 112);
    if ( *v6 == (__int64 *)v6 )
    {
      *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0xC;
    }
    else
    {
      v4 = *v6;
      v7 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v7 + 8) != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v6;
      *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0x14;
    }
    v3 = 0;
  }
  KeReleaseSpinLock(v1, v5);
  if ( v4 )
  {
    *((_DWORD *)v4 + 10) = 0;
    KeSetEvent((PRKEVENT)(v4 + 2), 0, 0);
  }
  return v3;
}
