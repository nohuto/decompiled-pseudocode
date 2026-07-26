/*
 * XREFs of WPP_SF_dqZ @ 0x1C0045618
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0045EBC (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_dqZ(__int64 a1, __int64 a2, int a3, ...)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  int v6; // [rsp+80h] [rbp+18h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v9; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, unsigned __int16 *);
  v6 = a3;
  v3 = (__int64 *)v9;
  if ( v9 && *((_QWORD *)v9 + 1) )
    v4 = *v9;
  else
    v4 = 10LL;
  if ( !v9 || (v5 = (const wchar_t *)*((_QWORD *)v9 + 1)) == 0LL )
    v5 = L"NULL";
  if ( !v9 || !*v9 )
    v3 = qword_1C00276B0;
  ndisWppFastTraceMessage(
    &WPP_6e2fc96078008429fd92c28490874609_Traceguids,
    0x7Fu,
    &v6,
    4LL,
    va,
    8LL,
    v3,
    2LL,
    v5,
    v4,
    0LL);
}
