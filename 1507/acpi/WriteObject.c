/*
 * XREFs of WriteObject @ 0x1C0012B10
 * Callers:
 *     Store @ 0x1C00122A0 (Store.c)
 *     ExprOp2_64 @ 0x1C00128C0 (ExprOp2_64.c)
 *     Index @ 0x1C0016200 (Index.c)
 *     CondRefOf @ 0x1C0018BB0 (CondRefOf.c)
 *     ProcessIncDec @ 0x1C0020540 (ProcessIncDec.c)
 *     ToInteger @ 0x1C00207E0 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C0022028 (ExprOp1_64.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047A60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047C40 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0047DC8 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0047EFC (ExprOp2_32.c)
 *     MidString @ 0x1C0048750 (MidString.c)
 *     ProcessDivide @ 0x1C0048970 (ProcessDivide.c)
 *     ToBuffer @ 0x1C0049010 (ToBuffer.c)
 *     ToDecStr @ 0x1C0049080 (ToDecStr.c)
 *     ToHexStr @ 0x1C0049400 (ToHexStr.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     WriteField @ 0x1C00138DC (WriteField.c)
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     CopyObjBuffer @ 0x1C0016958 (CopyObjBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // rcx
  void *v11; // rax
  int v12; // ecx
  _DWORD *v13; // r12
  _DWORD *v14; // r15
  int v15; // esi
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int ObjectTypeName; // eax
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

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
    v11 = (void *)NewObjData(v7, a3);
    *(_QWORD *)(a2 + 32) = v11;
    if ( !v11 )
    {
      v6 = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v6;
    }
    memmove(v11, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v12 = *(unsigned __int16 *)(a2 + 2);
    if ( v12 == 4 )
    {
      v13 = *(_DWORD **)(a2 + 32);
      v14 = *(_DWORD **)(a3 + 32);
      v15 = 0;
      for ( *v13 = *v14; v15 < *v14; ++v15 )
      {
        v6 = DupObjData(v7, &v13[10 * v15 + 2], &v14[10 * v15 + 2]);
        if ( v6 )
          break;
      }
      goto LABEL_21;
    }
    v16 = v12 - 5;
    if ( v16 )
    {
      v17 = v16 - 125;
      if ( !v17 )
      {
        ReferenceObjectEx(**(_QWORD **)(a2 + 32));
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
        goto LABEL_21;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
        {
LABEL_21:
          *(_WORD *)a2 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
          return v6;
        }
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
      }
    }
    ReferenceObjectEx(**(_QWORD **)(a2 + 32));
    goto LABEL_21;
  }
  switch ( v5 )
  {
    case 1:
      v21 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v21);
        if ( v21 >= 2 )
          return CopyObjBuffer((void *)(a2 + 16), 8uLL);
      }
      v8 = CopyObjBuffer((void *)(a2 + 16), 4uLL);
      break;
    case 2:
      v19 = *(_DWORD *)(a2 + 24);
      if ( v19 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v19 - 1));
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    case 5:
      result = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v22);
      v8 = result;
      if ( (_DWORD)result )
        return v8;
      v10 = v22;
      *(_QWORD *)(v22 + 32) = a2;
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
