/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800CB790
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  unsigned __int16 *Buffer; // r9
  unsigned __int16 Length; // r11
  unsigned __int16 *v6; // rdx
  unsigned __int16 *v7; // r13
  unsigned __int16 *v8; // r10
  unsigned __int16 *i; // rcx
  unsigned __int16 *v10; // rdi
  int v11; // ebp
  int v12; // esi
  unsigned __int64 v13; // r14
  unsigned __int16 *v14; // rdx
  unsigned __int16 *j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  unsigned __int16 v23; // bp
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int16 *v27; // rdi
  unsigned __int64 v28; // rbx
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int16 *Src; // [rsp+28h] [rbp-40h]
  unsigned int v31; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+88h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  v6 = Buffer;
  v7 = 0LL;
  Src = Buffer;
  v8 = 0LL;
  if ( DllName->Length )
  {
    for ( i = &Buffer[((unsigned __int64)Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        if ( !v8 )
          v8 = i;
      }
      else if ( *i == 92 || *i == 47 )
      {
        v6 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v10 = LdrpAppPackagesPath.Buffer;
  Size = 0;
  v11 = 0;
  if ( !v8 )
    v11 = 8;
  v12 = 0;
  v29 = v11;
  v31 = Length + 2 * (1 - (v6 - Buffer));
  if ( LdrpAppPackagesPath.Buffer )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( LdrpAppPackagesPath.Length )
    {
      do
      {
        if ( LdrpAppPackagesPath.Buffer[(unsigned __int64)(unsigned int)v13 >> 1] == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < LdrpAppPackagesPath.Length );
    }
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v10 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v10 = (unsigned __int16 *)((char *)v10 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v10;
    for ( j = &v10[(v13 >> 1) - 1]; j > v10; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v10;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return -1073741562;
    v18 = (unsigned __int16)(2 * v16);
    if ( Length > 0xFFFCu || v11 + (unsigned int)v18 + v31 > 0xFFFE )
      return -1073741562;
    v12 = (unsigned __int16)(v11 + v18 + v31);
    StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)(v11 + v18 + v31));
    v7 = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    memmove(StringRoutine, v10, (unsigned int)v18);
    v20 = &v7[v18 >> 1];
    memmove(v20, Src, v31 - 2LL);
    v21 = ((unsigned __int64)v31 - 2) >> 1;
    if ( v11 )
    {
      *(_QWORD *)&v20[v21] = *(_QWORD *)L".DLL";
      v20[v21 + 4] = aDll[4];
    }
    else
    {
      v20[v21] = 0;
    }
  }
  v22 = v31 + v13 + Size + v11 + 14;
  if ( v22 > 0xFFFE )
    return -1073741562;
  v23 = v31 + v13 + Size + v11 + 14;
  v24 = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return -1073741801;
  memmove(v24, v10, (unsigned int)v13);
  v26 = (unsigned __int64)(unsigned int)v13 >> 1;
  v27 = &v25[v26];
  if ( Size )
  {
    memmove(&v25[v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v27 = *(_QWORD *)L".Local";
  *((_DWORD *)v27 + 2) = *(_DWORD *)L"al";
  v27[6] = 92;
  memmove(v27 + 7, Src, v31 - 2LL);
  v28 = ((unsigned __int64)v31 - 2) >> 1;
  if ( v29 )
  {
    *(_QWORD *)&v27[v28 + 7] = *(_QWORD *)L".DLL";
    v27[v28 + 11] = aDll[4];
  }
  else
  {
    v27[v28 + 7] = 0;
  }
  RealName->Buffer = v7;
  RealName->MaximumLength = v12;
  RealName->Length = v12;
  if ( v12 )
    RealName->Length = v12 - 2;
  LocalName->MaximumLength = v23;
  LocalName->Length = v23 - 2;
  LocalName->Buffer = v25;
  return 0;
}
