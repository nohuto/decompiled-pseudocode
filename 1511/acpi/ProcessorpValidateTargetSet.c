/*
 * XREFs of ProcessorpValidateTargetSet @ 0x1C006B2F4
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0068F60 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

char __fastcall ProcessorpValidateTargetSet(__int64 a1)
{
  USHORT v1; // di
  __int64 v3; // r8
  char v4; // cl
  _QWORD *v5; // r8
  _QWORD *v6; // rdx

  v1 = *(_WORD *)(a1 + 8);
  if ( v1 >= KeQueryMaximumGroupCount() )
    return 0;
  v3 = *(_QWORD *)(ProcessorGroupByNumber + 8LL * v1);
  v4 = 0;
  if ( !v3
    || *(_DWORD *)(v3 + 36) == 1
    && (!*(_QWORD *)a1 || (*(_QWORD *)a1 & (*(_QWORD *)a1 ^ (*(_QWORD *)a1 - 1LL))) != *(_QWORD *)a1) )
  {
    return 0;
  }
  v5 = (_QWORD *)(v3 + 16);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    while ( (*(_QWORD *)a1 & v6[3]) != *(_QWORD *)a1 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        return v4;
    }
    return 1;
  }
  return v4;
}
