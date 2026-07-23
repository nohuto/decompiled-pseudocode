/*
 * XREFs of ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1407188EC (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140718A78 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401E677C (MmIsNonPagedSystemAddressValid.c)
 *     IovUtilMarkDeviceObject @ 0x140223358 (IovUtilMarkDeviceObject.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     IovUtilGetBottomDeviceObject @ 0x14070DFEC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 */

char __fastcall ViPnpVerifyMinorWasProcessedProperly(__int64 a1, __int64 a2, int a3, int a4, const void *a5, int a6)
{
  unsigned int IsDeviceObjectMarked; // eax
  const void *v9; // r8
  unsigned int v10; // ecx
  _DWORD *v11; // rdi
  __int64 i; // rsi
  _QWORD *v13; // rbp
  _QWORD *BottomDeviceObject; // r15
  const void *v15; // r8
  unsigned int v16; // ecx

  IsDeviceObjectMarked = *(unsigned __int8 *)(a2 + 1);
  if ( IsDeviceObjectMarked > 0xC )
  {
    if ( *(unsigned __int8 *)(a2 + 1) < 0xFu )
      return IsDeviceObjectMarked;
    if ( *(unsigned __int8 *)(a2 + 1) > 0x12u )
    {
      if ( IsDeviceObjectMarked == 19 )
      {
        if ( *(_DWORD *)(a2 + 8) > 3u )
          return IsDeviceObjectMarked;
      }
      else if ( IsDeviceObjectMarked != 21 )
      {
        return IsDeviceObjectMarked;
      }
    }
    goto LABEL_41;
  }
  if ( *(unsigned __int8 *)(a2 + 1) >= 0xAu )
  {
LABEL_41:
    if ( !a3 || a4 != 2 )
      return IsDeviceObjectMarked;
    v15 = (const void *)a1;
    v16 = 536;
LABEL_44:
    LOBYTE(IsDeviceObjectMarked) = ViErrorReport1(v16, a5, v15);
    return IsDeviceObjectMarked;
  }
  if ( *(unsigned __int8 *)(a2 + 1) <= 1u )
    goto LABEL_32;
  if ( IsDeviceObjectMarked == 2 )
  {
    if ( a6 || a4 == 2 )
      return IsDeviceObjectMarked;
    v15 = (const void *)a1;
    v16 = 774;
    goto LABEL_44;
  }
  if ( *(unsigned __int8 *)(a2 + 1) <= 6u )
  {
LABEL_32:
    if ( a6 || a4 )
      return IsDeviceObjectMarked;
    v15 = (const void *)a1;
    v16 = 535;
    goto LABEL_44;
  }
  if ( IsDeviceObjectMarked != 7 )
    return IsDeviceObjectMarked;
  if ( *(_DWORD *)(a2 + 8) != 4 )
    goto LABEL_17;
  if ( a3 )
  {
    if ( a4 == 2 )
    {
      v9 = (const void *)a1;
      v10 = 536;
LABEL_16:
      ViErrorReport1(v10, a5, v9);
    }
  }
  else
  {
    if ( !a4 )
    {
      v9 = (const void *)a1;
      v10 = 554;
      goto LABEL_16;
    }
    if ( *(int *)(a1 + 48) >= 0 && !*(_QWORD *)(a1 + 56) )
    {
      v9 = (const void *)a1;
      v10 = 555;
      goto LABEL_16;
    }
  }
LABEL_17:
  LOBYTE(IsDeviceObjectMarked) = VfIoDisabled;
  if ( !VfIoDisabled && *(int *)(a1 + 48) >= 0 )
  {
    v11 = *(_DWORD **)(a1 + 56);
    if ( v11 )
    {
      if ( *(_DWORD *)(a2 + 8) <= 4u )
      {
        LOBYTE(IsDeviceObjectMarked) = MmIsNonPagedSystemAddressValid(*(PVOID *)(a1 + 56));
        if ( (_BYTE)IsDeviceObjectMarked )
        {
          for ( i = 0LL; (unsigned int)i < *v11; i = (unsigned int)(i + 1) )
          {
            v13 = *(_QWORD **)&v11[2 * i + 2];
            IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked((__int64)v13, 5);
            if ( !IsDeviceObjectMarked )
            {
              BottomDeviceObject = IovUtilGetBottomDeviceObject(v13);
              if ( BottomDeviceObject != v13 )
                ViErrorReport10(0x248u, a5, (const void *)a1, v13);
              IovUtilMarkDeviceObject((__int64)v13, 5LL);
              LOBYTE(IsDeviceObjectMarked) = ObfDereferenceObject(BottomDeviceObject);
            }
          }
        }
      }
    }
  }
  return IsDeviceObjectMarked;
}
