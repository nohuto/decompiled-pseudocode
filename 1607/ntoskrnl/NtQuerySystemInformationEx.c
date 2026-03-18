/*
 * XREFs of NtQuerySystemInformationEx @ 0x1404CD6B4
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtQuerySystemInformationEx(
        signed int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  unsigned __int64 v16; // rcx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 <= 108 )
  {
    if ( a1 != 108 && a1 != 73 && a1 != 8 && a1 != 23 && a1 != 42 && a1 != 61 && a1 != 83 && a1 != 100 )
    {
      if ( a1 != 107 )
        return -1073741821;
LABEL_30:
      v15 = 4;
      goto LABEL_13;
    }
LABEL_31:
    v15 = 2;
    goto LABEL_13;
  }
  v8 = a1 - 121;
  if ( !v8 )
    goto LABEL_31;
  v9 = v8 - 20;
  if ( !v9 )
    goto LABEL_31;
  v10 = v9 - 19;
  if ( !v10 )
    goto LABEL_31;
  v11 = v10 - 5;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 - 10;
  if ( !v12 )
    goto LABEL_12;
  v13 = v12 - 3;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13 - 2;
  if ( !v14 )
    goto LABEL_30;
  if ( v14 != 1 )
    return -1073741821;
LABEL_12:
  v15 = 8;
LABEL_13:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v15 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (unsigned __int64)a2 + a3;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
