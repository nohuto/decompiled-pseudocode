/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140013D30
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140013C6C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x1400155E8 (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 *     ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x140024EDC (-AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  int v5; // r9d
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    result = (unsigned int)v5;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v6 = a2 - 1;
    v7 = _vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      a1[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      a1[v6] = 0;
    }
    return v3;
  }
  return result;
}
