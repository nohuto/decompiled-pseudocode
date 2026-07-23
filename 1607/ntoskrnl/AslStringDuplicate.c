/*
 * XREFs of AslStringDuplicate @ 0x1406C54B0
 * Callers:
 *     AslPathToSystemPath @ 0x1406C62C4 (AslPathToSystemPath.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  wchar_t *v2; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // r8d
  unsigned __int64 v9; // rbx
  wchar_t *v10; // rax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v5 < 0 )
  {
    v7 = "RtlStringCchLengthW failed [%x]";
    v8 = 564;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v8, (_DWORD)v7);
    goto LABEL_16;
  }
  v9 = pcchLength + 1;
  if ( pcchLength + 1 < pcchLength )
  {
    v8 = 575;
    goto LABEL_14;
  }
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v8 = 581;
LABEL_14:
    v7 = "SIZE_T arithmetic failed [%x]";
    v5 = -1073741675;
    goto LABEL_15;
  }
  v10 = (wchar_t *)AslAlloc(v6, 2 * v9);
  v2 = v10;
  if ( !v10 )
  {
    v5 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 588, (unsigned int)"Out of memory");
    goto LABEL_16;
  }
  v5 = RtlStringCchCopyW(v10, v9, a2);
  if ( v5 < 0 )
  {
    v7 = "RtlStringCchCopyW failed [%x]";
    v8 = 598;
    goto LABEL_15;
  }
  *a1 = v2;
  v2 = 0LL;
LABEL_2:
  v5 = 0;
LABEL_16:
  AslFree((__int64)a1, v2);
  return (unsigned int)v5;
}
