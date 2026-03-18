/*
 * XREFs of ValidateTarget @ 0x1C001476C
 * Callers:
 *     Load @ 0x1C0006050 (Load.c)
 *     Index @ 0x1C0013FA0 (Index.c)
 *     ExprOp1_64 @ 0x1C00250B8 (ExprOp1_64.c)
 *     CondRefOf @ 0x1C0025180 (CondRefOf.c)
 *     ToInteger @ 0x1C0027A70 (ToInteger.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005EC30 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005EE20 (CopyObject.c)
 *     Divide @ 0x1C005EF40 (Divide.c)
 *     ExprOp1_32 @ 0x1C005EFD0 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C005F108 (ExprOp2_32.c)
 *     MidString @ 0x1C005FA00 (MidString.c)
 *     ToBuffer @ 0x1C0060340 (ToBuffer.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 *     ToString @ 0x1C0060A70 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     MatchObjType @ 0x1C0014D98 (MatchObjType.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edi
  int v10; // ecx
  _QWORD *v11; // r10
  __int64 v13; // rax
  __int16 v14; // r10
  __int16 v15; // r11
  int ObjectTypeName; // eax
  int v17; // r11d
  int v18; // r8d
  int v19; // ecx

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
  if ( (_WORD)v4 == 128 )
  {
    v13 = *(_QWORD *)(a2 + 16) + 64LL;
LABEL_11:
    *(_QWORD *)a4 = v13;
    goto LABEL_6;
  }
  if ( (_WORD)v4 == 129 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    goto LABEL_11;
  }
  if ( (unsigned __int16)v4 > 0x10u || (v10 = 81921, !_bittest(&v10, v4)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
    v18 = 0;
    v19 = 208;
    goto LABEL_18;
  }
  *(_QWORD *)a4 = a2;
LABEL_6:
  if ( (_WORD)v4 == 128 )
  {
    if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL), a3) )
    {
      if ( v14 == v15 )
        return v5;
      goto LABEL_7;
    }
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v18 = v17;
    v19 = 207;
LABEL_18:
    PrintDebugMessage(v19, ObjectTypeName, v18, 0, 0LL);
    return (unsigned int)-1072431094;
  }
LABEL_7:
  if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL), 133LL) )
    FreeData(v11);
  return v5;
}
