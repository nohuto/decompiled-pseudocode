/*
 * XREFs of ResCDirectoryValidateHeader @ 0x1800FC1F4
 * Callers:
 *     ResCDirectoryValidate @ 0x1800F828C (ResCDirectoryValidate.c)
 *     ResCDirectoryGetSize @ 0x1800FBF98 (ResCDirectoryGetSize.c)
 *     ResCDirectoryPopulate @ 0x1800FBFE4 (ResCDirectoryPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetSize @ 0x1800FBF98 (ResCDirectoryGetSize.c)
 */

__int64 __fastcall ResCDirectoryValidateHeader(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // eax
  LONG v4; // ecx
  unsigned int v5; // eax
  int v6; // eax

  if ( a2 - 1 <= 0x66 || *(_QWORD *)a1 != 0x52494443534552LL || a1[2] != 3 )
    goto LABEL_17;
  v3 = a1[13];
  if ( !v3 || a1[17] > v3 || a1[20] > a1[14] || (v5 = a1[15]) == 0 || a1[18] > v5 )
  {
    v4 = 536936962;
LABEL_18:
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
  if ( a2 && a2 < (unsigned int)ResCDirectoryGetSize(a1) )
  {
    v4 = 24;
    goto LABEL_18;
  }
  v6 = a1[18];
  if ( v6 )
  {
    if ( a1[22] >= v6 || a1[23] >= v6 || a1[24] >= v6 )
    {
LABEL_17:
      v4 = 13;
      goto LABEL_18;
    }
  }
  else if ( (int)a1[22] >= 0 || (int)a1[23] >= 0 || (int)a1[24] >= 0 )
  {
    goto LABEL_17;
  }
  return 1LL;
}
