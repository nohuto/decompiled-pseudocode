/*
 * XREFs of ViGenericVerifyIrpStackDownward @ 0x140703980
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport6 @ 0x140223630 (ViErrorReport6.c)
 *     VfMajorIsNewRequest @ 0x14070E514 (VfMajorIsNewRequest.c)
 *     VfMajorIsValidIrpStatus @ 0x14070E58C (VfMajorIsValidIrpStatus.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
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
  unsigned int v10; // r12d
  __int64 v11; // rbp
  int v12; // r13d
  __int64 result; // rax
  unsigned __int8 v14; // cl
  __int64 v15; // r8
  unsigned __int8 v16; // bp
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+30h] [rbp-C8h]
  BOOL v20; // [rsp+34h] [rbp-C4h]
  BOOL v21; // [rsp+38h] [rbp-C0h]
  char pszDest[96]; // [rsp+50h] [rbp-A8h] BYREF

  v7 = *(const void **)a1;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  v11 = *(_QWORD *)(a1 + 240);
  v20 = v10 != *(_DWORD *)(a5 + 96);
  v21 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) != *(_QWORD *)(a5 + 104);
  v12 = (*(_DWORD *)(a5 + 4) >> 27) & 1;
  result = VfMajorIsNewRequest(a3, a4);
  v14 = *a4;
  v15 = (unsigned int)result;
  v19 = result;
  if ( (*a4 < 3u || v14 > 4u && (v14 <= 0xDu || v14 > 0xFu && v14 != 22)) && *(_DWORD *)(v11 + 56) == 2 )
  {
    v16 = *(_BYTE *)(a1 + 60);
    if ( v16 >= 2u && (*(_DWORD *)(a1 + 56) & 0x2000000) == 0 )
    {
      ViErrorDisplayDescription(769LL);
      if ( RtlStringCbPrintfA(pszDest, 0x5BuLL, "CulpritAddress = %p, Irp = %p, IRQL = %u.\n", a7, v7, v16) >= 0 )
        VfUtilDbgPrint(pszDest);
      result = ViErrorFinishReport(769LL, a7, v7, v16);
      *(_DWORD *)(a1 + 56) |= 0x2000000u;
      v15 = v19;
    }
  }
  if ( a3 )
  {
    v17 = *(_DWORD *)(a5 + 4);
    if ( (*(_BYTE *)(a1 + 56) & 0x20) != 0 && (v17 & 0x1000000) == 0 )
    {
      if ( (_DWORD)v15 && !v12 )
      {
        *(_DWORD *)(a5 + 4) = v17 | 0x1000000;
        ViErrorReport1(0x212u, a7, v7);
      }
      if ( v20 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        v18 = 571;
        if ( a4[1] != 0xFF )
          v18 = 531;
        ViErrorReport1(v18, a7, v7);
      }
      if ( v21 )
      {
        *(_DWORD *)(a5 + 4) |= 0x1000000u;
        ViErrorReport1(0x214u, a7, v7);
      }
    }
    result = VfMajorIsValidIrpStatus(a4, v10, v15);
    if ( !(_DWORD)result )
      return ViErrorReport6(768LL, a7, v7, v10);
  }
  return result;
}
