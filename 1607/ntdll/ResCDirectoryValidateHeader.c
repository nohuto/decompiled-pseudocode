/*
 * XREFs of ResCDirectoryValidateHeader @ 0x18005D090
 * Callers:
 *     ResCDirectoryValidate @ 0x1800FFED4 (ResCDirectoryValidate.c)
 *     ResCDirectoryGetSize @ 0x180105CC0 (ResCDirectoryGetSize.c)
 *     ResCDirectoryPopulate @ 0x180105D0C (ResCDirectoryPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetSize @ 0x180105CC0 (ResCDirectoryGetSize.c)
 */

__int64 __fastcall ResCDirectoryValidateHeader(__int64 a1, unsigned int a2)
{
  LONG v3; // ecx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  if ( a2 - 1 <= 0x66 || *(_QWORD *)a1 != 0x52494443534552LL || *(_DWORD *)(a1 + 8) != 3 )
    goto LABEL_4;
  v6 = *(_DWORD *)(a1 + 52);
  if ( !v6
    || *(_DWORD *)(a1 + 68) > v6
    || *(_DWORD *)(a1 + 80) > *(_DWORD *)(a1 + 56)
    || (v7 = *(_DWORD *)(a1 + 60)) == 0
    || *(_DWORD *)(a1 + 72) > v7 )
  {
    v3 = 536936962;
    goto LABEL_5;
  }
  if ( a2 && a2 < (unsigned int)ResCDirectoryGetSize() )
  {
    v3 = 24;
    goto LABEL_5;
  }
  v5 = *(_DWORD *)(a1 + 72);
  if ( !v5 )
  {
    if ( *(int *)(a1 + 88) < 0 && *(int *)(a1 + 92) < 0 && *(int *)(a1 + 96) < 0 )
      return 1LL;
LABEL_4:
    v3 = 13;
LABEL_5:
    RtlSetLastWin32Error(v3);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 88) >= v5 || *(_DWORD *)(a1 + 92) >= v5 || *(_DWORD *)(a1 + 96) >= v5 )
    goto LABEL_4;
  return 1LL;
}
