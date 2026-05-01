/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180017EC0
 * Callers:
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ @ 0x18001F9D0 (-ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001FD34 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022A80 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  int v5; // ecx
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
      *Buffer = 0;
  }
  else
  {
    v6 = a2 - 1;
    v7 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
    return v3;
  }
  return result;
}
