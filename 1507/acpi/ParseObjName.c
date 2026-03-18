/*
 * XREFs of ParseObjName @ 0x1C0020370
 * Callers:
 *     ParseArg @ 0x1C000D8A8 (ParseArg.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 * Callees:
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseObjName(char **a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  void *v8; // rax
  char *v10; // r8
  char *v11; // rdx
  int v12; // ecx
  char Src[256]; // [rsp+30h] [rbp-118h] BYREF

  v5 = (__int64)*(&OpcodeTable + (unsigned __int8)**a1);
  if ( !v5 || (*(_DWORD *)(v5 + 28) & 0x20) == 0 )
  {
    v6 = -1072431103;
    if ( a3 )
      return v6;
    LogError(3222536193LL);
    v10 = *a1;
    v12 = 132;
    LODWORD(v11) = (unsigned __int8)**a1;
    goto LABEL_12;
  }
  v6 = ParseName(a1, Src);
  if ( !v6 )
  {
    *(_WORD *)(a2 + 2) = 2;
    v7 = -1LL;
    do
      ++v7;
    while ( Src[v7] );
    *(_DWORD *)(a2 + 24) = v7 + 1;
    v8 = (void *)HeapAlloc(gpheapGlobal, 1381258056, (int)v7 + 1);
    *(_QWORD *)(a2 + 32) = v8;
    if ( v8 )
    {
      memmove(v8, Src, *(unsigned int *)(a2 + 24));
      return v6;
    }
    v6 = -1073741670;
    LogError(3221225626LL);
    LODWORD(v10) = 0;
    v11 = Src;
    v12 = 131;
LABEL_12:
    PrintDebugMessage(v12, (_DWORD)v11, (_DWORD)v10, 0, 0LL);
  }
  return v6;
}
