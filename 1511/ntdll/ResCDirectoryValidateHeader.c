/*
 * XREFs of ResCDirectoryValidateHeader @ 0x18004B444
 * Callers:
 *     ResCDirectoryValidate @ 0x1800F7DA8 (ResCDirectoryValidate.c)
 *     ResCDirectoryGetSize @ 0x1800FB3B0 (ResCDirectoryGetSize.c)
 *     ResCDirectoryPopulate @ 0x1800FB3FC (ResCDirectoryPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetSize @ 0x1800FB3B0 (ResCDirectoryGetSize.c)
 */

__int64 __fastcall ResCDirectoryValidateHeader(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  LONG v4; // ecx
  unsigned int v5; // eax
  int v6; // eax

  if ( a2 - 1 <= 0x66 || *(_QWORD *)a1 != 0x52494443534552LL || *(_DWORD *)(a1 + 8) != 3 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 52);
  if ( !v3
    || *(_DWORD *)(a1 + 68) > v3
    || *(_DWORD *)(a1 + 80) > *(_DWORD *)(a1 + 56)
    || (v5 = *(_DWORD *)(a1 + 60)) == 0
    || *(_DWORD *)(a1 + 72) > v5 )
  {
    v4 = 536936962;
LABEL_18:
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
  if ( a2 && a2 < (unsigned int)ResCDirectoryGetSize() )
  {
    v4 = 24;
    goto LABEL_18;
  }
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 )
  {
    if ( *(_DWORD *)(a1 + 88) >= v6 || *(_DWORD *)(a1 + 92) >= v6 || *(_DWORD *)(a1 + 96) >= v6 )
    {
LABEL_17:
      v4 = 13;
      goto LABEL_18;
    }
  }
  else if ( *(int *)(a1 + 88) >= 0 || *(int *)(a1 + 92) >= 0 || *(int *)(a1 + 96) >= 0 )
  {
    goto LABEL_17;
  }
  return 1LL;
}
