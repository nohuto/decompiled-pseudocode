/*
 * XREFs of VfPnpVerifyIrpStackUpward @ 0x140718A78
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     PpvUtilIsPdo @ 0x140701894 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x14070DFEC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x14070E044 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x14070E250 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackUpward(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbp
  __int64 v11; // r12
  const void *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  int v15; // r14d
  unsigned int v16; // ecx
  void *LowerDeviceObject; // rax
  _QWORD *v18; // rbx
  _QWORD *BottomDeviceObject; // rcx
  BOOL IsPdo; // ebx
  PVOID v21; // rdx
  const void *v22; // r9

  result = IovUtilIsWdmStack(*(_QWORD **)(a2 + 40));
  if ( (_DWORD)result )
  {
    v10 = *(const void **)a1;
    v11 = *(_QWORD *)(a1 + 240);
    v12 = *(const void **)(a4 + 40);
    v13 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
    if ( a5 )
    {
      v14 = *(_DWORD *)(a1 + 56) & 0x20;
      v15 = (*(_DWORD *)(a4 + 4) >> 28) & 1;
      if ( *(int *)(a4 + 4) < 0 )
      {
LABEL_17:
        if ( !v15 )
          goto LABEL_19;
LABEL_18:
        result = ViPnpVerifyMinorWasProcessedProperly(
                   (_DWORD)v10,
                   a2,
                   0,
                   (unsigned int)(v13 != -1073741637) + 1,
                   (__int64)v12,
                   0);
        goto LABEL_19;
      }
      if ( v15 )
        goto LABEL_18;
      if ( *(_BYTE *)(a2 + 1) != 8 )
      {
        if ( !v14 )
        {
          result = v13 + 0x80000000;
          if ( (result & 0x80000000) == 0 && v13 != -1073741637 )
            goto LABEL_23;
        }
        if ( v14 )
        {
          v16 = 557;
LABEL_11:
          result = ViErrorReport1(v16, *(const void **)(a4 + 40), v10);
          goto LABEL_19;
        }
        result = (unsigned int)VfIoSwitchedOffNoReboot;
        if ( VfIoSwitchedOffNoReboot )
          goto LABEL_19;
        if ( v13 >= 0 )
        {
          v16 = 558;
          goto LABEL_11;
        }
        if ( v13 != -1073741637 )
          goto LABEL_23;
        result = ViErrorReport1(0x22Fu, *(const void **)(a4 + 40), v10);
        goto LABEL_17;
      }
    }
LABEL_19:
    if ( v13 == -1073741637 && (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
    {
      result = ViErrorReport1(0x216u, v12, v10);
      *(_DWORD *)(a3 + 4) |= 0x2000000u;
    }
LABEL_23:
    if ( *(_BYTE *)(a2 + 1) != 23 )
      return result;
    LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(*(_QWORD *)(a2 + 40));
    if ( LowerDeviceObject )
    {
      ObfDereferenceObject(LowerDeviceObject);
      goto LABEL_30;
    }
    v18 = *(_QWORD **)(a2 + 40);
    BottomDeviceObject = IovUtilGetBottomDeviceObject(v18);
    if ( BottomDeviceObject == v18 )
    {
      IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObject);
      ObfDereferenceObject(v21);
      if ( IsPdo )
        goto LABEL_30;
    }
    else
    {
      ObfDereferenceObject(BottomDeviceObject);
    }
    ViErrorReport10(0x241u, v12, *(const void **)(v11 + 64), *(const void **)(a2 + 40));
LABEL_30:
    result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(a2 + 40), 0);
    if ( (_DWORD)result )
      return ViErrorReport10(0x242u, v12, *(const void **)(v11 + 64), v22);
  }
  return result;
}
