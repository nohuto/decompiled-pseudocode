/*
 * XREFs of ValidateTarget @ 0x1C000E694
 * Callers:
 *     Load @ 0x1C0006210 (Load.c)
 *     Index @ 0x1C000DC80 (Index.c)
 *     Store @ 0x1C000E7D0 (Store.c)
 *     ToInteger @ 0x1C0020DA0 (ToInteger.c)
 *     CondRefOf @ 0x1C0021100 (CondRefOf.c)
 *     ExprOp1_64 @ 0x1C00227A8 (ExprOp1_64.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047370 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047550 (CopyObject.c)
 *     Divide @ 0x1C0047650 (Divide.c)
 *     ExprOp1_32 @ 0x1C00476D8 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C004780C (ExprOp2_32.c)
 *     MidString @ 0x1C0048060 (MidString.c)
 *     ToBuffer @ 0x1C0048920 (ToBuffer.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     ToString @ 0x1C0049000 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     MatchObjType @ 0x1C000E75C (MatchObjType.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // edi
  int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // r10
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
    v9 = *(_QWORD *)(a1 + 16) + 56LL;
LABEL_7:
    *(_QWORD *)a3 = v9;
    goto LABEL_8;
  }
  if ( (_WORD)v3 == 129 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    goto LABEL_7;
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
LABEL_8:
  if ( (_WORD)v3 == 128 )
  {
    if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a3 + 2LL)) )
    {
      if ( v12 == v13 )
        return v4;
      goto LABEL_9;
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
LABEL_9:
  if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)a3 + 2LL)) )
    FreeData(v10);
  return v4;
}
