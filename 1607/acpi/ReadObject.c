/*
 * XREFs of ReadObject @ 0x1C001ECD0
 * Callers:
 *     ParseNameObj @ 0x1C001DEBC (ParseNameObj.c)
 *     DerefOf @ 0x1C001EF00 (DerefOf.c)
 *     IncDec @ 0x1C0020450 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005BEE0 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C005CBE0 (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 * Callees:
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     GetBaseData @ 0x1C001ED48 (GetBaseData.c)
 *     CopyObjData @ 0x1C001ED78 (CopyObjData.c)
 *     PushFrame @ 0x1C00204F4 (PushFrame.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 BaseData; // rdi
  __int64 v6; // r10
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  BaseData = GetBaseData(a2);
  v7 = *(unsigned __int16 *)(BaseData + 2);
  if ( v7 == 5 )
  {
    v4 = PushFrame(v6, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v10);
    if ( !v4 )
    {
      v9 = v10;
      *(_QWORD *)(v10 + 32) = BaseData;
      *(_DWORD *)(v9 + 16) = 0x10000;
      *(_QWORD *)(v9 + 40) = a3;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(v6, BaseData, (_DWORD *)(*(_QWORD *)(BaseData + 32) + 12LL), a3);
  }
  else
  {
    CopyObjData(a3, BaseData);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v4;
}
