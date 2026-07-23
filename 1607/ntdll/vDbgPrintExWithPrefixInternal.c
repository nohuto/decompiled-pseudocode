/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x18005C418
 * Callers:
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x1800DBA60 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x1800DBB10 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1800DBB40 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _vsnprintf @ 0x180098180 (_vsnprintf.c)
 *     ZwQueryDebugFilterState @ 0x1800A8A10 (ZwQueryDebugFilterState.c)
 *     DbgBreakPointWithStatus @ 0x1800A9CC0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1800A9CD0 (DebugPrint.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(_BYTE *a1, ULONG a2, ULONG a3, char *a4, va_list a5, char a6)
{
  _BYTE *v7; // rdx
  struct _TEB *v8; // rsi
  unsigned __int16 SameTebFlags; // ax
  _BYTE *v11; // r15
  int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // r14
  size_t v15; // rdi
  char *v16; // rcx
  size_t v17; // rdx
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned int v20; // ecx
  _BYTE v21[96]; // [rsp+0h] [rbp-80h] BYREF
  int v22; // [rsp+80h] [rbp+0h]
  int v23; // [rsp+84h] [rbp+4h]
  ULONG v24; // [rsp+88h] [rbp+8h]
  ULONG v25; // [rsp+8Ch] [rbp+Ch]
  _BYTE *v26; // [rsp+90h] [rbp+10h]
  void *Src; // [rsp+98h] [rbp+18h]
  struct _TEB *v28; // [rsp+A0h] [rbp+20h]
  int v29; // [rsp+A8h] [rbp+28h]
  va_list ArgList; // [rsp+B0h] [rbp+30h]
  char *Format; // [rsp+B8h] [rbp+38h]
  __int16 v32; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE *v33; // [rsp+C8h] [rbp+48h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+D0h] [rbp+50h] BYREF

  Format = a4;
  v24 = a3;
  v25 = a2;
  v7 = a1;
  Src = a1;
  ArgList = a5;
  v8 = NtCurrentTeb();
  v28 = v8;
  if ( a2 != -1 && (!NtCurrentPeb()->BeingDebugged || a2 != 101) )
  {
    if ( !ZwQueryDebugFilterState(a2, a3) )
      return 0LL;
    v7 = Src;
  }
  SameTebFlags = v8->SameTebFlags;
  if ( (SameTebFlags & 2) != 0 )
    return 0LL;
  v8->SameTebFlags = SameTebFlags | 2;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = -1LL;
  do
  {
    if ( v13 >= 0x200 )
      break;
    v11 = v21;
    v13 += 128;
    v15 = -1LL;
    do
      ++v15;
    while ( v7[v15] );
    if ( v15 > v13 - 1 )
      v15 = v13 - 1;
    memmove(v21, v7, v15);
    v16 = &v21[v15];
    v26 = &v21[v15];
    v17 = v13 - v15;
    v12 = 0;
    if ( v17 - 1 > 0x7FFFFFFE )
      v12 = -1073741811;
    v23 = v12;
    if ( v12 < 0 )
    {
      if ( v17 )
        *v16 = 0;
    }
    else
    {
      v12 = 0;
      v22 = 0;
      v18 = v17 - 1;
      v19 = vsnprintf(v16, v17 - 1, Format, ArgList);
      if ( v19 < 0 || v19 > v18 )
      {
        v26[v18] = 0;
        v12 = -2147483643;
        v22 = -2147483643;
      }
      else if ( v19 == v18 )
      {
        v26[v18] = 0;
      }
      v23 = v12;
    }
    v29 = v12;
    if ( v12 >= 0 )
      break;
    v7 = Src;
  }
  while ( v12 == -2147483643 );
  if ( v12 == -2147483643 )
  {
    v11[v13 - 2] = 10;
    LOWORD(v14) = v13 - 1;
    v11[v13 - 1] = 0;
  }
  else
  {
    do
      ++v14;
    while ( v11[v14] );
  }
  v33 = v11;
  v32 = v14;
  if ( NtCurrentPeb()->FastPebLock && (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) != 3) )
  {
    ExceptionRecord.ExceptionCode = 1073807366;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 2;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int16)v14 + 1;
    ExceptionRecord.ExceptionInformation[1] = (unsigned __int64)v11;
    RtlRaiseException(&ExceptionRecord);
    v8->SameTebFlags &= ~2u;
    return 0LL;
  }
  v20 = DebugPrint(&v32, v25, v24);
  if ( v20 == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    v20 = 0;
  }
  v8->SameTebFlags &= ~2u;
  return v20;
}
