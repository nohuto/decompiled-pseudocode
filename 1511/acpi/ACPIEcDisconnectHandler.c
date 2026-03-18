/*
 * XREFs of ACPIEcDisconnectHandler @ 0x1C007A570
 * Callers:
 *     ACPIEcInternalControl @ 0x1C0079DD4 (ACPIEcInternalControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcDisconnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rbp
  __int64 v6; // rbx
  int v7; // r14d
  PVOID v8; // r12
  KIRQL v9; // al
  int v10; // r9d
  unsigned int v11; // esi
  KIRQL v12; // r11
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r8
  int v17; // eax

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_BYTE **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = (unsigned __int8)*v4 >> 5;
  v7 = 1 << (*v4 & 0x1F);
  v8 = MmLockPagableDataSection(ACPIEcDisconnectHandler);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_DWORD *)(a1 + 4 * v6 + 156);
  v11 = -1073741823;
  v12 = v9;
  if ( (v10 & v7) != 0 )
  {
    v11 = 0;
    *(_DWORD *)(a1 + 4 * v6 + 156) = v10 & ~v7;
    v13 = *(unsigned __int8 *)((unsigned __int8)*v4 + a1 + 188);
    v14 = *(_DWORD *)(a1 + 4 * v6 + 124);
    if ( (v14 & v7) != 0 )
    {
      *(_DWORD *)(a1 + 4 * v6 + 124) = ~v7 & v14;
      v15 = *(unsigned __int8 *)(a1 + 445);
      if ( *(_BYTE *)(a1 + 445) )
      {
        v16 = *(_QWORD *)(a1 + 448);
        while ( 1 )
        {
          v17 = *(unsigned __int8 *)(v16 + 24LL * v15);
          if ( v17 == (_DWORD)v13 )
            break;
          v15 = *(unsigned __int8 *)(v16 + 24LL * v15);
          if ( !v17 )
            goto LABEL_11;
        }
        *(_BYTE *)(v16 + 24LL * v15) = *(_BYTE *)(v16 + 24 * v13);
      }
    }
LABEL_11:
    *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v13) = *(_BYTE *)(a1 + 446);
    *(_BYTE *)(a1 + 446) = v13;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v12);
  MmUnlockPagableImageSection(v8);
  return v11;
}
