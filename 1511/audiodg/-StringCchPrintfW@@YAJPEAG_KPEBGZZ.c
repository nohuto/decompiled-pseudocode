/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400165CC
 * Callers:
 *     ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x1400162A0 (-AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14003978C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
