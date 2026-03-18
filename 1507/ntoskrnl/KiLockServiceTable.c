/*
 * XREFs of KiLockServiceTable @ 0x140153460
 * Callers:
 *     KeCompactServiceTable @ 0x1401533D8 (KeCompactServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1401533B4 (RtlCaptureImageExceptionValues.c)
 *     RtlpSearchFunctionTable @ 0x140153C40 (RtlpSearchFunctionTable.c)
 *     RtlLookupExceptionHandler @ 0x14016F5F0 (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x1407B5CF4 (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x1407E5F28 (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  __int64 result; // rax
  __int64 CallersAddress; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r9d
  ULONG64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  ULONG64 v16; // [rsp+38h] [rbp-20h]
  _DWORD *v17; // [rsp+40h] [rbp-18h] BYREF
  ULONG v18; // [rsp+78h] [rbp+20h] BYREF

  result = KiLockExtendedServiceTable(a1, a2, a3);
  if ( !a4 )
  {
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v15, &v18);
    if ( !v15 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v8 = RtlpSearchFunctionTable(v7, v18 / 0xCuLL, CallersAddress, 0x140000000uLL);
    LODWORD(v11) = v8;
    if ( !v8 )
      KeBugCheck(0x31u);
    v16 = v8;
    v12 = *(unsigned int *)(v8 + 8);
    if ( (v12 & 1) != 0 )
    {
      v11 = v12 + 0x140000000LL - 1;
      v16 = v11;
      if ( 0x140000000LL <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v12 + 0x140000000LL - 1;
        if ( v11 >= MmUserProbeAddress )
          LODWORD(v9) = MmUserProbeAddress;
      }
    }
    v13 = RtlLookupExceptionHandler(v11, v9, 1, v10, 0LL, (__int64)&v17);
    if ( v13 < 0 )
      KeBugCheckEx(0x31u, v13, 0LL, 0LL, 0LL);
    if ( *v17 != 1 || (v14 = (unsigned int)v17[3], (_DWORD)v14 == 1) )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))(0x140000000LL + v14))(0LL, 0LL);
  }
  return result;
}
