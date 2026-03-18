/*
 * XREFs of ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x14074CB70 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14074CE18 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402175B8 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x14025B0A8 (IovUtilMarkDeviceObject.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407437CC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

char __fastcall ViPnpVerifyMinorWasProcessedProperly(ULONG_PTR a1, __int64 a2, int a3, int a4, const void *a5, int a6)
{
  unsigned int IsDeviceObjectMarked; // eax
  int v9; // esi
  _DWORD *v10; // rsi
  __int64 i; // r14
  _QWORD *v12; // r15
  _QWORD *BottomDeviceObject; // r12
  int v14; // esi
  char v16[64]; // [rsp+30h] [rbp-D0h] BYREF
  char v17[64]; // [rsp+70h] [rbp-90h] BYREF
  char v18[64]; // [rsp+B0h] [rbp-50h] BYREF
  char v19[64]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[64]; // [rsp+130h] [rbp+30h] BYREF
  CHAR v21[64]; // [rsp+170h] [rbp+70h] BYREF
  CHAR Format[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  CHAR v23[112]; // [rsp+1F0h] [rbp+F0h] BYREF

  IsDeviceObjectMarked = *(unsigned __int8 *)(a2 + 1);
  if ( IsDeviceObjectMarked > 0xC )
  {
    if ( *(unsigned __int8 *)(a2 + 1) < 0xFu )
      return IsDeviceObjectMarked;
    if ( *(unsigned __int8 *)(a2 + 1) > 0x12u )
    {
      if ( IsDeviceObjectMarked == 19 )
      {
        if ( *(_DWORD *)(a2 + 8) > 3u || !a3 || a4 != 2 )
          return IsDeviceObjectMarked;
        v14 = 536;
        ViErrorDisplayDescription(536);
        if ( RtlStringCbPrintfA(v19, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
          VfUtilDbgPrint(v19);
LABEL_50:
        LOBYTE(IsDeviceObjectMarked) = ViErrorFinishReport(v14, (ULONG_PTR)a5, a1, 0LL);
        return IsDeviceObjectMarked;
      }
      if ( IsDeviceObjectMarked != 21 )
        return IsDeviceObjectMarked;
    }
LABEL_46:
    if ( !a3 || a4 != 2 )
      return IsDeviceObjectMarked;
    v14 = 536;
    ViErrorDisplayDescription(536);
    if ( RtlStringCbPrintfA(v21, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
      VfUtilDbgPrint(v21);
    goto LABEL_50;
  }
  if ( *(unsigned __int8 *)(a2 + 1) >= 0xAu )
    goto LABEL_46;
  if ( *(unsigned __int8 *)(a2 + 1) <= 1u )
    goto LABEL_38;
  if ( IsDeviceObjectMarked == 2 )
  {
    if ( a6 || a4 == 2 )
      return IsDeviceObjectMarked;
    v14 = 774;
    ViErrorDisplayDescription(774);
    if ( RtlStringCbPrintfA(v16, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
      VfUtilDbgPrint(v16);
    goto LABEL_50;
  }
  if ( *(unsigned __int8 *)(a2 + 1) <= 6u )
  {
LABEL_38:
    if ( a6 || a4 )
      return IsDeviceObjectMarked;
    v14 = 535;
    ViErrorDisplayDescription(535);
    if ( RtlStringCbPrintfA(v17, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
      VfUtilDbgPrint(v17);
    goto LABEL_50;
  }
  if ( IsDeviceObjectMarked != 7 )
    return IsDeviceObjectMarked;
  if ( *(_DWORD *)(a2 + 8) != 4 )
    goto LABEL_20;
  if ( a3 )
  {
    if ( a4 == 2 )
    {
      v9 = 536;
      ViErrorDisplayDescription(536);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
        VfUtilDbgPrint(pszDest);
LABEL_19:
      ViErrorFinishReport(v9, (ULONG_PTR)a5, a1, 0LL);
    }
  }
  else
  {
    if ( !a4 )
    {
      v9 = 554;
      ViErrorDisplayDescription(554);
      if ( RtlStringCbPrintfA(v18, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
        VfUtilDbgPrint(v18);
      goto LABEL_19;
    }
    if ( *(int *)(a1 + 48) >= 0 && !*(_QWORD *)(a1 + 56) )
    {
      v9 = 555;
      ViErrorDisplayDescription(555);
      if ( RtlStringCbPrintfA(Format, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a1) >= 0 )
        VfUtilDbgPrint(Format);
      goto LABEL_19;
    }
  }
LABEL_20:
  LOBYTE(IsDeviceObjectMarked) = VfIoDisabled;
  if ( !VfIoDisabled && *(int *)(a1 + 48) >= 0 )
  {
    v10 = *(_DWORD **)(a1 + 56);
    if ( v10 )
    {
      if ( *(_DWORD *)(a2 + 8) <= 4u )
      {
        LOBYTE(IsDeviceObjectMarked) = MmIsNonPagedSystemAddressValid(*(PVOID *)(a1 + 56));
        if ( (_BYTE)IsDeviceObjectMarked )
        {
          for ( i = 0LL; (unsigned int)i < *v10; i = (unsigned int)(i + 1) )
          {
            v12 = *(_QWORD **)&v10[2 * i + 2];
            IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked((__int64)v12, 5);
            if ( !IsDeviceObjectMarked )
            {
              BottomDeviceObject = IovUtilGetBottomDeviceObject(v12);
              if ( BottomDeviceObject != v12 )
              {
                ViErrorDisplayDescription(584);
                if ( RtlStringCbPrintfA(
                       v23,
                       0x63uLL,
                       "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n",
                       a5,
                       (const void *)a1,
                       v12) >= 0 )
                  VfUtilDbgPrint(v23);
                ViErrorFinishReport(584, (ULONG_PTR)a5, a1, (__int64)v12);
              }
              IovUtilMarkDeviceObject((__int64)v12, 5LL);
              LOBYTE(IsDeviceObjectMarked) = ObfDereferenceObject(BottomDeviceObject);
            }
          }
        }
      }
    }
  }
  return IsDeviceObjectMarked;
}
