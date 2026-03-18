/*
 * XREFs of WriteObject @ 0x1C00191F0
 * Callers:
 *     Index @ 0x1C0013FA0 (Index.c)
 *     Store @ 0x1C0014E00 (Store.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     ExprOp1_64 @ 0x1C00250B8 (ExprOp1_64.c)
 *     CondRefOf @ 0x1C0025180 (CondRefOf.c)
 *     ProcessIncDec @ 0x1C00279C0 (ProcessIncDec.c)
 *     ToInteger @ 0x1C0027A70 (ToInteger.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005EC30 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005EE20 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C005EFD0 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C005F108 (ExprOp2_32.c)
 *     MidString @ 0x1C005FA00 (MidString.c)
 *     ProcessDivide @ 0x1C005FC50 (ProcessDivide.c)
 *     ToBuffer @ 0x1C0060340 (ToBuffer.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     WriteField @ 0x1C001AFDC (WriteField.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     CopyObjBuffer @ 0x1C0026B8C (CopyObjBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  __int64 v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  _DWORD *v16; // r12
  _DWORD *v17; // r15
  int v18; // esi
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  int ObjectTypeName; // eax
  __int64 v24; // rdx
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_WORD *)(a2 + 2);
      if ( v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !v6 )
  {
    v7 = gpheapGlobal;
    v8 = 0;
    if ( a2 == a3 )
      return v8;
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( !*(_QWORD *)(a3 + 32) )
      return v8;
    v13 = (void *)NewObjData(v7, a3);
    *(_QWORD *)(a2 + 32) = v13;
    if ( !v13 )
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v8;
    }
    memmove(v13, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v15 = *(unsigned __int16 *)(a2 + 2);
    if ( v15 == 4 )
    {
      v16 = *(_DWORD **)(a2 + 32);
      v17 = *(_DWORD **)(a3 + 32);
      v18 = 0;
      for ( *v16 = *v17; v18 < *v17; ++v18 )
      {
        v8 = DupObjData(v7, (__int64)&v16[10 * v18 + 2], (__int64)&v17[10 * v18 + 2]);
        if ( v8 )
          break;
      }
      goto LABEL_21;
    }
    v19 = v15 - 5;
    if ( v19 )
    {
      v20 = v19 - 125;
      if ( !v20 )
      {
        ReferenceObjectEx(**(_QWORD **)(a2 + 32), v14);
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL), v24);
        goto LABEL_21;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
LABEL_21:
          *(_WORD *)a2 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
          return v8;
        }
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL), v14);
      }
    }
    ReferenceObjectEx(**(_QWORD **)(a2 + 32), v14);
    goto LABEL_21;
  }
  switch ( v6 )
  {
    case 1:
      v25 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v25);
        if ( v25 >= 2 )
          return CopyObjBuffer((void *)(a2 + 16), 8uLL);
      }
      return (unsigned int)CopyObjBuffer((void *)(a2 + 16), 4uLL);
    case 2:
      v22 = *(_DWORD *)(a2 + 24);
      if ( v22 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v22 - 1));
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    case 5:
      v11 = HeapAlloc(a1 + 440, 1297237576, 0x30u);
      v12 = v11;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v11;
        *(_QWORD *)(v11 + 24) = AccFieldUnit;
        result = 0LL;
        *(_DWORD *)v12 = 1430668097;
        *(_QWORD *)(v12 + 32) = a2;
        *(_QWORD *)(v12 + 40) = a3;
        return result;
      }
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      v9 = -1072431102;
      break;
    case 14:
      return WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
    case 16:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 0x1C0000000uLL, 0LL);
      return 0;
    default:
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, ObjectTypeName, 0, 0, 0LL);
      return (unsigned int)-1072431095;
  }
  return v9;
}
