/*
 * XREFs of ExprOp2_64 @ 0x1C0018F80
 * Callers:
 *     ExprOp2 @ 0x1C0018F20 (ExprOp2.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     MatchObjType @ 0x1C0014D98 (MatchObjType.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD *v5; // rbx
  __int64 v6; // r14
  int v7; // ebp
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
  __int64 v21; // rcx
  int ObjectTypeName; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _WORD *v25; // [rsp+58h] [rbp+10h]

  result = ValidateArgTypes(a1, a2[10], 0, (__int64)"II");
  if ( (int)result < 0 )
    return result;
  v5 = (_WORD *)(a2[10] + 80LL);
  v6 = 0LL;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v8 == 128 )
  {
    v5 = (_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 64LL);
  }
  else if ( (_WORD)v8 == 129 )
  {
    v5 = *(_WORD **)(a2[10] + 96LL);
  }
  else if ( (unsigned __int16)v8 > 0x10u || (v9 = 81921, !_bittest(&v9, v8)) )
  {
    v7 = -1072431094;
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName((unsigned __int16)v5[1]);
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    v5 = v25;
    goto LABEL_13;
  }
  if ( (_WORD)v8 == 128 )
  {
    if ( !MatchObjType((unsigned __int16)v5[1], 135) )
    {
      v7 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      GetObjectTypeName(135LL);
      v19 = GetObjectTypeName((unsigned __int16)v5[1]);
      PrintDebugMessage(207, v19, v20, 0, 0LL);
      goto LABEL_13;
    }
    if ( v15 == v16 )
      goto LABEL_13;
  }
  v10 = (unsigned __int16)v5[1];
  if ( v10 == 133 )
    goto LABEL_10;
  if ( !v5[1] )
    goto LABEL_7;
  if ( v10 <= 4 )
    goto LABEL_10;
  if ( v10 != 5 && v10 != 14 )
  {
LABEL_7:
    if ( !v5[1] )
    {
LABEL_10:
      if ( (*(_BYTE *)v5 & 1) != 0 )
      {
        v21 = *((_QWORD *)v5 + 1);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v21 & 8) != 0 )
          FreeData((_QWORD *)v21);
      }
      else if ( *((_QWORD *)v5 + 4) )
      {
        if ( *((int *)v5 + 2) <= 0 )
        {
          if ( v5[1] == 4 )
            FreeDataBuffs(*((_QWORD *)v5 + 4) + 8LL, **((unsigned int **)v5 + 4));
          FreeObjData(v5);
        }
        else
        {
          *v5 |= 8u;
        }
      }
      memset(v5, 0, 0x28uLL);
    }
  }
LABEL_13:
  if ( v7 < 0 )
    return (unsigned int)v7;
  *(_WORD *)(a2[11] + 2LL) = 1;
  v11 = *(_DWORD *)(a2[7] + 8LL);
  if ( v11 == 123 )
  {
    v12 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_16:
    *(_QWORD *)(a2[11] + 16LL) = v12;
  }
  else
  {
    switch ( v11 )
    {
      case 114:
        v12 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_16;
      case 116:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v5, a2[11]);
      case 119:
        v12 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_16;
      case 121:
        v13 = a2[10];
        v14 = *(_QWORD *)(v13 + 56);
        if ( v14 < 0x40 )
          v6 = *(_QWORD *)(v13 + 16) << v14;
        goto LABEL_22;
      case 122:
        v17 = a2[10];
        v18 = *(_QWORD *)(v17 + 56);
        if ( v18 < 0x40 )
          v6 = *(_QWORD *)(v17 + 16) >> v18;
        *(_QWORD *)(a2[11] + 16LL) = v6;
        return WriteObject(a1, v5, a2[11]);
      case 124:
        v12 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
        goto LABEL_16;
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
        v23 = a2[10];
        v24 = *(_QWORD *)(v23 + 56);
        if ( v24 )
          *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(v23 + 16) % v24;
        else
LABEL_22:
          *(_QWORD *)(a2[11] + 16LL) = v6;
        break;
      default:
        return WriteObject(a1, v5, a2[11]);
    }
  }
  return WriteObject(a1, v5, a2[11]);
}
