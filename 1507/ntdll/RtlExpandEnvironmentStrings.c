/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x1800385A0
 * Callers:
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800353E0 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  SIZE_T ValueLength; // rbx
  SIZE_T v7; // rbp
  NTSTATUS v10; // edi
  __int64 v11; // rsi
  SIZE_T v13; // rax
  SIZE_T v14; // r15
  PCWSTR v15; // r13
  NTSTATUS v16; // ecx
  PVOID v17; // [rsp+70h] [rbp+8h]
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = Environment;
  ValueLength = DestinationLength;
  v7 = SourceLength;
  v10 = 0;
  v11 = 0LL;
  if ( !SourceLength )
    goto LABEL_9;
  do
  {
    if ( *Source != 37 )
      goto LABEL_3;
    v13 = v7 - 1;
    v14 = 0LL;
    v15 = Source + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v15 == 37 )
        break;
      ++v15;
      ++v14;
    }
    while ( v14 < v13 );
    if ( v14
      && v14 < v13
      && ((v16 = RtlQueryEnvironmentVariable(Environment, Source + 1, v14, Destination, ValueLength, &v18),
           (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      Source = v15 + 1;
      v7 += -2LL - v14;
      if ( v16 < 0 )
      {
        v10 = v16;
      }
      else
      {
        ValueLength -= v18;
        Destination += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v10 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --ValueLength;
          *Destination++ = *Source;
        }
      }
      ++v11;
      --v7;
      ++Source;
    }
    Environment = v17;
  }
  while ( v7 );
  if ( v10 >= 0 )
  {
LABEL_9:
    if ( ValueLength )
      *Destination = 0;
    else
      v10 = -1073741789;
  }
  if ( ReturnLength )
    *ReturnLength = v11 + 1;
  return v10;
}
