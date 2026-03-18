/*
 * XREFs of WriteObject @ 0x1C000EC20
 * Callers:
 *     Index @ 0x1C000DC80 (Index.c)
 *     Store @ 0x1C000E7D0 (Store.c)
 *     ExprOp2_64 @ 0x1C000E9D0 (ExprOp2_64.c)
 *     ProcessIncDec @ 0x1C0020AA0 (ProcessIncDec.c)
 *     ToInteger @ 0x1C0020DA0 (ToInteger.c)
 *     CondRefOf @ 0x1C0021100 (CondRefOf.c)
 *     ExprOp1_64 @ 0x1C00227A8 (ExprOp1_64.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047370 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047550 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C00476D8 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C004780C (ExprOp2_32.c)
 *     MidString @ 0x1C0048060 (MidString.c)
 *     ProcessDivide @ 0x1C0048280 (ProcessDivide.c)
 *     ToBuffer @ 0x1C0048920 (ToBuffer.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     IsCompatableDSDTRevision @ 0x1C000D340 (IsCompatableDSDTRevision.c)
 *     CopyObjBuffer @ 0x1C000D384 (CopyObjBuffer.c)
 *     WriteField @ 0x1C00147DC (WriteField.c)
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0045C44 (DumpObject.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // rcx
  bool v11; // al
  void *v12; // rcx
  void *v13; // rax
  int v14; // ecx
  _DWORD *v15; // r12
  _DWORD *v16; // r15
  int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int ObjectTypeName; // eax
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_WORD *)(a2 + 2);
      if ( v5 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 56LL;
    }
    if ( v5 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !v5 )
  {
    v6 = 0;
    v7 = gpheapGlobal;
    if ( a2 == a3 )
      return v6;
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( !*(_QWORD *)(a3 + 32) )
      return v6;
    v13 = (void *)NewObjData(v7, a3);
    *(_QWORD *)(a2 + 32) = v13;
    if ( !v13 )
    {
      v6 = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v6;
    }
    memmove(v13, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v14 = *(unsigned __int16 *)(a2 + 2);
    if ( v14 == 4 )
    {
      v15 = *(_DWORD **)(a2 + 32);
      v16 = *(_DWORD **)(a3 + 32);
      v17 = 0;
      for ( *v15 = *v16; v17 < *v16; ++v17 )
      {
        v6 = DupObjData(v7, &v15[10 * v17 + 2], &v16[10 * v17 + 2]);
        if ( v6 )
          break;
      }
      goto LABEL_20;
    }
    v18 = v14 - 5;
    if ( v18 )
    {
      v19 = v18 - 125;
      if ( !v19 )
      {
        ReferenceObjectEx(**(_QWORD **)(a2 + 32));
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
        goto LABEL_20;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
        {
LABEL_20:
          *(_WORD *)a2 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
          return v6;
        }
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
      }
    }
    ReferenceObjectEx(**(_QWORD **)(a2 + 32));
    goto LABEL_20;
  }
  switch ( v5 )
  {
    case 1:
      v11 = IsCompatableDSDTRevision();
      v12 = (void *)(a2 + 16);
      if ( v11 )
        return CopyObjBuffer(v12, 8uLL, a3);
      v8 = CopyObjBuffer(v12, 4uLL, a3);
      break;
    case 2:
      v21 = *(_DWORD *)(a2 + 24);
      if ( v21 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v21 - 1), a3);
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24), a3);
    case 5:
      result = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v23);
      v8 = result;
      if ( (_DWORD)result )
        return v8;
      v10 = v23;
      *(_QWORD *)(v23 + 32) = a2;
      *(_QWORD *)(v10 + 40) = a3;
      return result;
    case 14:
      return WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
    case 16:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 0x1C0000000uLL, 0LL);
      return 0;
    default:
      LogError(3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, ObjectTypeName, 0, 0, 0LL);
      return (unsigned int)-1072431095;
  }
  return v8;
}
