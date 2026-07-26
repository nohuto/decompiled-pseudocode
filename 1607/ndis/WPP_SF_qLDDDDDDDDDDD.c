/*
 * XREFs of WPP_SF_qLDDDDDDDDDDD @ 0x1C00638DC
 * Callers:
 *     ndisQueryGuidDataSize @ 0x1C00A95E4 (ndisQueryGuidDataSize.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qLDDDDDDDDDDD(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+118h] [rbp+27h] BYREF
  int v5; // [rsp+120h] [rbp+2Fh] BYREF
  __int64 v6; // [rsp+128h] [rbp+37h] BYREF
  va_list va; // [rsp+128h] [rbp+37h]
  __int64 v8; // [rsp+130h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+3Fh]
  __int64 v10; // [rsp+138h] [rbp+47h] BYREF
  va_list va2; // [rsp+138h] [rbp+47h]
  __int64 v12; // [rsp+140h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+140h] [rbp+4Fh]
  __int64 v14; // [rsp+148h] [rbp+57h] BYREF
  va_list va4; // [rsp+148h] [rbp+57h]
  __int64 v16; // [rsp+150h] [rbp+5Fh] BYREF
  va_list va5; // [rsp+150h] [rbp+5Fh]
  __int64 v18; // [rsp+158h] [rbp+67h] BYREF
  va_list va6; // [rsp+158h] [rbp+67h]
  __int64 v20; // [rsp+160h] [rbp+6Fh] BYREF
  va_list va7; // [rsp+160h] [rbp+6Fh]
  __int64 v22; // [rsp+168h] [rbp+77h] BYREF
  va_list va8; // [rsp+168h] [rbp+77h]
  __int64 v24; // [rsp+170h] [rbp+7Fh] BYREF
  va_list va9; // [rsp+170h] [rbp+7Fh]
  va_list va10; // [rsp+178h] [rbp+87h] BYREF

  va_start(va10, a4);
  va_start(va9, a4);
  va_start(va8, a4);
  va_start(va7, a4);
  va_start(va6, a4);
  va_start(va5, a4);
  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v10 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v12 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v14 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v16 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v18 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v20 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v22 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v24 = va_arg(va10, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids,
    0x1Cu,
    &v4,
    8LL,
    &v5,
    4LL,
    va,
    4LL,
    va1,
    4LL,
    va2,
    4LL,
    va3,
    4LL,
    va4,
    4LL,
    va5,
    4LL,
    va6,
    4LL,
    va7,
    4LL,
    va8,
    4LL,
    va9,
    4LL,
    va10,
    4LL,
    0LL);
}
