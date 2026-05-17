/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800C10D0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(__int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int16 v4; // r11
  char *v6; // rdx
  char *v7; // r13
  char *v8; // r10
  char *i; // rcx
  unsigned __int16 *Buffer; // rdi
  int v11; // ebp
  int v12; // esi
  unsigned __int64 Length; // r14
  unsigned __int16 *v14; // rdx
  unsigned __int16 *j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v18; // rbx
  char *StringRoutine; // rax
  char *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  __int16 v23; // bp
  char *v24; // rax
  char *v25; // r15
  unsigned __int64 v26; // rbx
  char *v27; // rdi
  unsigned __int64 v28; // rbx
  int v29; // [rsp+20h] [rbp-48h]
  char *Src; // [rsp+28h] [rbp-40h]
  unsigned int v31; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  v6 = v3;
  v7 = 0LL;
  Src = v3;
  v8 = 0LL;
  if ( *a1 )
  {
    for ( i = &v3[2 * ((unsigned __int64)v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        if ( !v8 )
          v8 = i;
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v6 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = LdrpAppPackagesPath.Buffer;
  Size = 0;
  v11 = 0;
  if ( !v8 )
    v11 = 8;
  v12 = 0;
  v29 = v11;
  v31 = v4 + 2 * (1 - ((v6 - v3) >> 1));
  if ( LdrpAppPackagesPath.Buffer )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( LdrpAppPackagesPath.Length )
    {
      do
      {
        if ( LdrpAppPackagesPath.Buffer[(unsigned __int64)(unsigned int)Length >> 1] == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < LdrpAppPackagesPath.Length );
    }
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (unsigned __int16 *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - Buffer;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return 3221225734LL;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return 3221225734LL;
    v18 = (unsigned __int16)(2 * v16);
    if ( v4 > 0xFFFCu || v11 + (unsigned int)v18 + v31 > 0xFFFE )
      return 3221225734LL;
    v12 = (unsigned __int16)(v11 + v18 + v31);
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned __int16)(v11 + v18 + v31));
    v7 = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    memmove(StringRoutine, Buffer, (unsigned int)v18);
    v20 = &v7[2 * (v18 >> 1)];
    memmove(v20, Src, v31 - 2LL);
    v21 = ((unsigned __int64)v31 - 2) >> 1;
    if ( v11 )
    {
      *(_QWORD *)&v20[2 * v21] = *(_QWORD *)L".DLL";
      *(_WORD *)&v20[2 * v21 + 8] = aDll[4];
    }
    else
    {
      *(_WORD *)&v20[2 * v21] = 0;
    }
  }
  v22 = v31 + Length + Size + v11 + 14;
  if ( v22 > 0xFFFE )
    return 3221225734LL;
  v23 = v31 + Length + Size + v11 + 14;
  v24 = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return 3221225495LL;
  memmove(v24, Buffer, (unsigned int)Length);
  v26 = (unsigned __int64)(unsigned int)Length >> 1;
  v27 = &v25[2 * v26];
  if ( Size )
  {
    memmove(&v25[2 * v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v27 = *(_QWORD *)L".Local";
  *((_DWORD *)v27 + 2) = *(_DWORD *)L"al";
  *((_WORD *)v27 + 6) = 92;
  memmove(v27 + 14, Src, v31 - 2LL);
  v28 = ((unsigned __int64)v31 - 2) >> 1;
  if ( v29 )
  {
    *(_QWORD *)&v27[2 * v28 + 14] = *(_QWORD *)L".DLL";
    *(_WORD *)&v27[2 * v28 + 22] = aDll[4];
  }
  else
  {
    *(_WORD *)&v27[2 * v28 + 14] = 0;
  }
  *(_QWORD *)(a2 + 8) = v7;
  *(_WORD *)(a2 + 2) = v12;
  *(_WORD *)a2 = v12;
  if ( v12 )
    *(_WORD *)a2 = v12 - 2;
  *(_WORD *)(a3 + 2) = v23;
  *(_WORD *)a3 = v23 - 2;
  *(_QWORD *)(a3 + 8) = v25;
  return 0LL;
}
