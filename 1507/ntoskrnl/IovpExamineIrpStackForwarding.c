/*
 * XREFs of IovpExamineIrpStackForwarding @ 0x140740A9C
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140743A5C (IovUtilMultipleDevicesSameDriver.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

int *__fastcall IovpExamineIrpStackForwarding(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        unsigned __int16 *a6,
        _QWORD *a7,
        int *a8)
{
  unsigned __int16 *v9; // rdi
  int v10; // r14d
  __int64 v11; // rbp
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int *result; // rax
  char pszDest[64]; // [rsp+40h] [rbp-78h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v10 = 1;
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(a4 + 184);
  v10 = *(unsigned __int8 *)(a1 + 186) - *(char *)(a4 + 67);
  v9 = (unsigned __int16 *)(v11 + 72 * (v10 - 1LL));
  if ( v10 )
  {
    v12 = *a6 - *v9;
    if ( !v12 )
      v12 = *((unsigned __int8 *)a6 + 2) - *((unsigned __int8 *)v9 + 2);
    if ( ((*((_QWORD *)a6 + 6) == *((_QWORD *)v9 + 6)) & (memcmp(a6 + 4, v9 + 4, 0x20uLL) == 0 && v12 == 0)) != 0 )
    {
      v13 = *((_QWORD *)a6 + 7);
      if ( *(_OWORD *)(a6 + 28) == *(_OWORD *)(v9 + 28) && *((_BYTE *)a6 + 3) == *((_BYTE *)v9 + 3) )
      {
        if ( v13 )
        {
          if ( !(unsigned int)IovUtilMultipleDevicesSameDriver(*((_QWORD *)v9 + 5)) )
          {
            ViErrorDisplayDescription(519LL, v14, v15);
            if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a5, (const void *)a4) >= 0 )
              VfUtilDbgPrint(pszDest);
            ViErrorFinishReport(519LL, a5, a4, 0LL);
            *((_QWORD *)a6 + 7) = 0LL;
            *((_BYTE *)a6 + 3) = 0;
          }
          goto LABEL_16;
        }
      }
      else if ( v13 )
      {
        goto LABEL_16;
      }
      *(_QWORD *)(v11 - 8) = v11;
      *(_QWORD *)(v11 - 16) = IovpInternalCompletionTrap;
      *(_BYTE *)(v11 - 69) = -32;
    }
  }
LABEL_16:
  result = a8;
  *a7 = v9;
  *a8 = v10;
  return result;
}
