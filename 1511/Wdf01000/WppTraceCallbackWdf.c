/*
 * XREFs of WppTraceCallbackWdf @ 0x1C0032AD0
 * Callers:
 *     <none>
 * Callees:
 *     WppInitGlobalLoggerWdf @ 0x1C0032B94 (WppInitGlobalLoggerWdf.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 __fastcall WppTraceCallbackWdf(
        unsigned __int8 minorFunction,
        void *DataPath,
        unsigned int BufferLength,
        char *Buffer,
        _BYTE *Context,
        unsigned int *Size)
{
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  _BYTE *v9; // rdi
  __int128 v10; // xmm0
  _BYTE *v12; // rdi
  unsigned int Level; // [rsp+40h] [rbp+8h] BYREF

  v6 = Size;
  v7 = 0;
  *Size = 0;
  if ( minorFunction < 4u )
    return (unsigned int)-1073741808;
  if ( minorFunction > 5u )
  {
    if ( minorFunction <= 7u )
      return v7;
    if ( minorFunction == 8 )
    {
      v9 = Context;
      if ( BufferLength < 0x38 )
      {
        v7 = -1073741789;
        if ( BufferLength >= 4 )
        {
          *(_DWORD *)Buffer = 56;
          *v6 = 4;
        }
      }
      else
      {
        memset(Buffer, 0, BufferLength);
        *(_DWORD *)Buffer = 56;
        *((_DWORD *)Buffer + 2) = 0;
        *((_DWORD *)Buffer + 4) = 1;
        v10 = *(_OWORD *)*((_QWORD *)v9 + 1);
        *((_DWORD *)Buffer + 10) = 528384;
        *(_OWORD *)(Buffer + 24) = v10;
        *v6 = 56;
      }
      WppInitGlobalLoggerWdf(
        (wchar_t *)L"GlobalLogger",
        *((const _GUID **)v9 + 1),
        (unsigned __int64 *)v9 + 4,
        (unsigned int *)v9 + 13,
        v9 + 49);
      return v7;
    }
    return (unsigned int)-1073741808;
  }
  v12 = Context;
  if ( Context )
  {
    if ( BufferLength < 0x30 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( minorFunction == 5 )
    {
      Context[49] = 0;
      *((_DWORD *)v12 + 13) = 0;
      *((_QWORD *)v12 + 4) = 0LL;
    }
    else
    {
      *((_QWORD *)Context + 4) = *((_QWORD *)Buffer + 1);
      if ( WmiQueryTraceInformation(TraceEnableLevelClass, &Level, 4u, (PULONG)&Context, Buffer) >= 0 )
        v12[49] = Level;
      return (unsigned int)WmiQueryTraceInformation(TraceEnableFlagsClass, v12 + 52, 4u, (PULONG)&Context, Buffer);
    }
  }
  else
  {
    return (unsigned int)-1073741163;
  }
  return v7;
}
