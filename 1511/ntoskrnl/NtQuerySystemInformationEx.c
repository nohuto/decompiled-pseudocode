/*
 * XREFs of NtQuerySystemInformationEx @ 0x1404AD8C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtQuerySystemInformationEx(
        signed int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        unsigned __int64 a4,
        UINT a5,
        unsigned int *a6)
{
  int v8; // edx
  ULONG64 v9; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 > 107 )
  {
    v11 = a1 - 108;
    if ( v11 )
    {
      v12 = v11 - 13;
      if ( v12 )
      {
        v13 = v12 - 20;
        if ( v13 )
        {
          v14 = v13 - 19;
          if ( v14 )
          {
            v15 = v14 - 5;
            if ( !v15 || (v16 = v15 - 10) == 0 || v16 == 3 )
            {
              v8 = 8;
              goto LABEL_6;
            }
            return -1073741821;
          }
        }
      }
    }
LABEL_15:
    v8 = 2;
    goto LABEL_6;
  }
  if ( a1 != 107 )
  {
    if ( a1 != 73 && a1 != 8 && a1 != 23 && a1 != 42 && a1 != 61 && a1 != 83 && a1 != 100 )
      return -1073741821;
    goto LABEL_15;
  }
  v8 = 4;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v8 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (ULONG64)a2 + a3;
    if ( v9 > MmUserProbeAddress || v9 < (unsigned __int64)a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
