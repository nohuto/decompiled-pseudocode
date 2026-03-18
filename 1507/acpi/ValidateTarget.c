/*
 * XREFs of ValidateTarget @ 0x1C0015618
 * Callers:
 *     Load @ 0x1C0005E10 (Load.c)
 *     Index @ 0x1C0016200 (Index.c)
 *     CondRefOf @ 0x1C0018BB0 (CondRefOf.c)
 *     ToInteger @ 0x1C00207E0 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C0022028 (ExprOp1_64.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047A60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047C40 (CopyObject.c)
 *     Divide @ 0x1C0047D40 (Divide.c)
 *     ExprOp1_32 @ 0x1C0047DC8 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0047EFC (ExprOp2_32.c)
 *     MidString @ 0x1C0048750 (MidString.c)
 *     ToBuffer @ 0x1C0049010 (ToBuffer.c)
 *     ToDecStr @ 0x1C0049080 (ToDecStr.c)
 *     ToHexStr @ 0x1C0049400 (ToHexStr.c)
 *     ToString @ 0x1C00496F0 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     MatchObjType @ 0x1C00123C0 (MatchObjType.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // edi
  int v8; // ecx
  _QWORD *v9; // r10
  __int64 v11; // rax
  __int16 v12; // r10
  __int16 v13; // r11
  int ObjectTypeName; // eax
  int v15; // r11d
  int v16; // r8d
  int v17; // ecx

  v3 = *(unsigned __int16 *)(a1 + 2);
  v4 = 0;
  if ( (_WORD)v3 == 128 )
  {
    v11 = *(_QWORD *)(a1 + 16) + 56LL;
LABEL_11:
    *(_QWORD *)a3 = v11;
    goto LABEL_6;
  }
  if ( (_WORD)v3 == 129 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
  if ( (unsigned __int16)v3 > 0x10u || (v8 = 81921, !_bittest(&v8, v3)) )
  {
    LogError(3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    v16 = 0;
    v17 = 208;
    goto LABEL_18;
  }
  *(_QWORD *)a3 = a1;
LABEL_6:
  if ( (_WORD)v3 == 128 )
  {
    if ( MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a3 + 2LL), a2) )
    {
      if ( v12 == v13 )
        return v4;
      goto LABEL_7;
    }
    LogError(3222536202LL);
    GetObjectTypeName(a2);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a3 + 2LL));
    v16 = v15;
    v17 = 207;
LABEL_18:
    PrintDebugMessage(v17, ObjectTypeName, v16, 0, 0LL);
    return (unsigned int)-1072431094;
  }
LABEL_7:
  if ( MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a3 + 2LL), 133) )
    FreeData(v9);
  return v4;
}
