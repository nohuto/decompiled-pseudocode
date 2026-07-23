/*
 * XREFs of KiLockServiceTable @ 0x14012E004
 * Callers:
 *     KeCompactServiceTable @ 0x14012DF9C (KeCompactServiceTable.c)
 * Callees:
 *     RtlpSearchFunctionTable @ 0x140082B40 (RtlpSearchFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     RtlLookupExceptionHandler @ 0x14014B634 (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x140156E88 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x14078FC60 (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, int a4)
{
  __int64 result; // rax
  __int64 CallersAddress; // rax
  __int64 v7; // rcx
  unsigned int *v8; // rax
  int v9; // edx
  int v10; // r9d
  unsigned int *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned int *v16; // [rsp+38h] [rbp-20h]
  _DWORD *v17; // [rsp+40h] [rbp-18h] BYREF
  ULONG v18; // [rsp+78h] [rbp+20h] BYREF

  result = KiLockExtendedServiceTable(a1, a2, a3);
  if ( !a4 )
  {
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v15, &v18);
    if ( !v15 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v8 = RtlpSearchFunctionTable(v7, v18 / 0xC, CallersAddress, 0x140000000LL);
    LODWORD(v11) = (_DWORD)v8;
    if ( !v8 )
      KeBugCheck(0x31u);
    v16 = v8;
    v12 = v8[2];
    if ( (v12 & 1) != 0 )
    {
      v11 = (unsigned int *)(v12 + 0x140000000LL - 1);
      v16 = v11;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = -65536;
      }
    }
    v13 = RtlLookupExceptionHandler((_DWORD)v11, v9, 1, v10, 0LL, (__int64)&v17);
    if ( v13 < 0 )
      KeBugCheckEx(0x31u, v13, 0LL, 0LL, 0LL);
    if ( *v17 != 1 || (v14 = (unsigned int)v17[3], (_DWORD)v14 == 1) )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(0x140000000LL + v14))(0LL, 0LL);
  }
  return result;
}
