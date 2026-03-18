/*
 * XREFs of ExprOp2_64 @ 0x1C000E9D0
 * Callers:
 *     ExprOp2 @ 0x1C000E970 (ExprOp2.c)
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     MatchObjType @ 0x1C000E75C (MatchObjType.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // esi
  unsigned int v8; // r10d
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int16 v15; // r10
  __int16 v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // eax
  int v20; // r11d
  int ObjectTypeName; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+58h] [rbp+10h]

  result = ValidateArgTypes(a2[10], 0LL, "II");
  if ( (int)result < 0 )
    return result;
  v5 = a2[10] + 80LL;
  v6 = 0LL;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v8 == 128 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL) + 56LL;
  }
  else if ( (_WORD)v8 == 129 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL);
  }
  else if ( (unsigned __int16)v8 > 0x10u || (v9 = 81921, !_bittest(&v9, v8)) )
  {
    v7 = -1072431094;
    LogError(3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    v5 = v24;
    goto LABEL_11;
  }
  if ( (_WORD)v8 == 128 )
  {
    if ( !MatchObjType(*(unsigned __int16 *)(v5 + 2), 135) )
    {
      v7 = -1072431094;
      LogError(3222536202LL);
      GetObjectTypeName(135LL);
      v19 = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
      PrintDebugMessage(207, v19, v20, 0, 0LL);
      goto LABEL_11;
    }
    if ( v15 == v16 )
      goto LABEL_11;
  }
  v10 = *(unsigned __int16 *)(v5 + 2);
  if ( v10 == 133 )
    goto LABEL_10;
  if ( !*(_WORD *)(v5 + 2) )
    goto LABEL_9;
  if ( v10 <= 4 )
  {
LABEL_10:
    FreeData((_QWORD *)v5);
    goto LABEL_11;
  }
  if ( v10 != 5 && v10 != 14 )
  {
LABEL_9:
    if ( *(_WORD *)(v5 + 2) )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_11:
  if ( v7 < 0 )
    return (unsigned int)v7;
  *(_WORD *)(a2[11] + 2LL) = 1;
  v11 = *(_DWORD *)(a2[7] + 8LL);
  if ( v11 == 123 )
  {
    v12 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_14:
    *(_QWORD *)(a2[11] + 16LL) = v12;
  }
  else
  {
    switch ( v11 )
    {
      case 114:
        v12 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_14;
      case 116:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v5, a2[11]);
      case 119:
        v12 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_14;
      case 121:
        v13 = a2[10];
        v14 = *(_QWORD *)(v13 + 56);
        if ( v14 < 0x40 )
          v6 = *(_QWORD *)(v13 + 16) << v14;
        goto LABEL_20;
      case 122:
        v17 = a2[10];
        v18 = *(_QWORD *)(v17 + 56);
        if ( v18 < 0x40 )
          v6 = *(_QWORD *)(v17 + 16) >> v18;
        *(_QWORD *)(a2[11] + 16LL) = v6;
        return WriteObject(a1, v5, a2[11]);
      case 124:
        v12 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
        goto LABEL_14;
      case 125:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v5, a2[11]);
      case 126:
        *(_QWORD *)(a2[11] + 16LL) = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
        return WriteObject(a1, v5, a2[11]);
      case 127:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v5, a2[11]);
      case 133:
        v22 = a2[10];
        v23 = *(_QWORD *)(v22 + 56);
        if ( v23 )
          *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(v22 + 16) % v23;
        else
LABEL_20:
          *(_QWORD *)(a2[11] + 16LL) = v6;
        break;
      default:
        return WriteObject(a1, v5, a2[11]);
    }
  }
  return WriteObject(a1, v5, a2[11]);
}
