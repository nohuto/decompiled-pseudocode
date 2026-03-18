/*
 * XREFs of ViGenericVerifyIrpStackUpward @ 0x140738120
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfMajorIsValidIrpStatus @ 0x140743D6C (VfMajorIsValidIrpStatus.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViGenericVerifyIrpStackUpward(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  const void *v7; // rdi
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char pszDest[96]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = *(_QWORD **)a1;
  v7 = *(const void **)(a4 + 40);
  v8 = *(int *)(*(_QWORD *)a1 + 48LL);
  if ( (a1[14] & 0x20) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 4);
    if ( (v9 & 0x1000000) == 0 )
    {
      if ( (_DWORD)v8 != *(_DWORD *)(a3 + 96) )
      {
        *(_DWORD *)(a3 + 4) = v9 | 0x1000000;
        if ( *(_BYTE *)(a2 + 1) == 0xFF )
        {
          ViErrorDisplayDescription(571LL, a2, a3);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v7, v4) >= 0 )
            VfUtilDbgPrint(pszDest);
          v10 = 571LL;
        }
        else
        {
          ViErrorDisplayDescription(531LL, a2, a3);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v7, v4) >= 0 )
            VfUtilDbgPrint(pszDest);
          v10 = 531LL;
        }
        ViErrorFinishReport(v10, v7, v4, 0LL);
      }
      if ( v4[7] != *(_QWORD *)(a3 + 104) )
      {
        *(_DWORD *)(a3 + 4) |= 0x1000000u;
        ViErrorDisplayDescription(532LL, a2, a3);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v7, v4) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(532LL, v7, v4, 0LL);
      }
    }
  }
  result = VfMajorIsValidIrpStatus(a2, (unsigned int)v8, a3);
  if ( !(_DWORD)result )
  {
    ViErrorDisplayDescription(768LL, v12, v13);
    if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", v7, v4, v8) >= 0 )
      VfUtilDbgPrint(pszDest);
    return ViErrorFinishReport(768LL, v7, v4, v8);
  }
  return result;
}
