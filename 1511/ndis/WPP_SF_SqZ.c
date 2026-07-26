/*
 * XREFs of WPP_SF_SqZ @ 0x1C0045534
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0045EBC (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_SqZ(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, unsigned __int16 *);
  v3 = (__int64 *)v11;
  v4 = 10LL;
  if ( v11 && *((_QWORD *)v11 + 1) )
    v5 = *v11;
  else
    v5 = 10LL;
  v6 = L"NULL";
  if ( !v11 || (v7 = (const wchar_t *)*((_QWORD *)v11 + 1)) == 0LL )
    v7 = L"NULL";
  if ( !v11 || !*v11 )
    v3 = qword_1C00276B0;
  if ( a3 )
  {
    if ( *a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      v4 = 2 * v8 + 2;
    }
    else
    {
      v4 = 14LL;
    }
    v6 = L"<NULL>";
    if ( *a3 )
      v6 = a3;
  }
  ndisWppFastTraceMessage(
    &WPP_6e2fc96078008429fd92c28490874609_Traceguids,
    0x7Eu,
    v6,
    v4,
    va,
    8LL,
    v3,
    2LL,
    v7,
    v5,
    0LL);
}
