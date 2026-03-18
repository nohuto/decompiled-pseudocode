/*
 * XREFs of ViGenericVerifyIrpStackDownward @ 0x140737E18
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfMajorIsNewRequest @ 0x140743CF4 (VfMajorIsNewRequest.c)
 *     VfMajorIsValidIrpStatus @ 0x140743D6C (VfMajorIsValidIrpStatus.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViGenericVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        const void *a7)
{
  const void *v7; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  int v11; // r13d
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  BOOL v21; // [rsp+30h] [rbp-81h]
  BOOL v23; // [rsp+40h] [rbp-71h]
  unsigned int v24; // [rsp+44h] [rbp-6Dh]
  char pszDest[96]; // [rsp+50h] [rbp-61h] BYREF

  v7 = *(const void **)a1;
  v9 = *(int *)(*(_QWORD *)a1 + 48LL);
  v10 = *(_QWORD *)(a1 + 240);
  v23 = v9 != *(_DWORD *)(a5 + 96);
  v21 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) != *(_QWORD *)(a5 + 104);
  v11 = (*(_DWORD *)(a5 + 4) >> 27) & 1;
  result = VfMajorIsNewRequest(a3, a4);
  v14 = (unsigned int)result;
  v24 = result;
  v15 = *a4;
  if ( (*a4 < 3u || v15 > 4u && (v15 <= 0xDu || v15 > 0xFu && v15 != 22)) && *(_DWORD *)(v10 + 56) == 2 )
  {
    v16 = *(_BYTE *)(a1 + 60);
    if ( v16 >= 2u && (*(_DWORD *)(a1 + 56) & 0x2000000) == 0 )
    {
      ViErrorDisplayDescription(769LL, v13, (unsigned int)result);
      if ( RtlStringCbPrintfA(pszDest, 0x5BuLL, "CulpritAddress = %p, Irp = %p, IRQL = %u.\n", a7, v7, v16) >= 0 )
        VfUtilDbgPrint(pszDest);
      result = ViErrorFinishReport(769LL, a7, v7, v16);
      *(_DWORD *)(a1 + 56) |= 0x2000000u;
      v14 = v24;
    }
  }
  if ( a3 )
  {
    v17 = *(unsigned int *)(a5 + 4);
    if ( (*(_BYTE *)(a1 + 56) & 0x20) != 0 && (v17 & 0x1000000) == 0 )
    {
      if ( (_DWORD)v14 && !v11 )
      {
        LODWORD(v17) = v17 | 0x1000000;
        *(_DWORD *)(a5 + 4) = v17;
        ViErrorDisplayDescription(530LL, v17, v14);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(530LL, a7, v7, 0LL);
      }
      if ( v23 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        if ( a4[1] == 0xFF )
        {
          ViErrorDisplayDescription(571LL, v17, v14);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
            VfUtilDbgPrint(pszDest);
          v18 = 571LL;
        }
        else
        {
          ViErrorDisplayDescription(531LL, v17, v14);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
            VfUtilDbgPrint(pszDest);
          v18 = 531LL;
        }
        ViErrorFinishReport(v18, a7, v7, 0LL);
      }
      if ( v21 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        ViErrorDisplayDescription(532LL, v17, v14);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(532LL, a7, v7, 0LL);
      }
    }
    result = VfMajorIsValidIrpStatus(a4, (unsigned int)v9, v14);
    if ( !(_DWORD)result )
    {
      ViErrorDisplayDescription(768LL, v19, v20);
      if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a7, v7, v9) >= 0 )
        VfUtilDbgPrint(pszDest);
      return ViErrorFinishReport(768LL, a7, v7, v9);
    }
  }
  return result;
}
