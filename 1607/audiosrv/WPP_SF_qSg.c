/*
 * XREFs of WPP_SF_qSg @ 0x18005FEEC
 * Callers:
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x18005BF8C (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qSg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v9; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, const wchar_t *);
  if ( v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
  }
  v5 = L"NULL";
  if ( v9 )
    v5 = v9;
  return EtwTraceMessage(a1, 43LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 160LL, (__int64 *)va, 8LL, v5);
}
