/*
 * XREFs of AslStringDuplicate @ 0x1406C5378
 * Callers:
 *     AslPathToSystemPath @ 0x1406C618C (AslPathToSystemPath.c)
 *     AslpFileVerQueryBlock @ 0x1406C90B4 (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  wchar_t *v2; // rdi
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  const char *v8; // r9
  int v9; // r8d
  unsigned __int64 v10; // rbx
  wchar_t *v11; // rax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v6 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = "RtlStringCchLengthW failed [%x]";
    v9 = 564;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v9, (_DWORD)v8, v6);
    goto LABEL_16;
  }
  v10 = pcchLength + 1;
  if ( pcchLength + 1 < pcchLength )
  {
    v9 = 575;
    goto LABEL_14;
  }
  if ( !is_mul_ok(v10, 2uLL) )
  {
    v9 = 581;
LABEL_14:
    v6 = -1073741675;
    v8 = "SIZE_T arithmetic failed [%x]";
    v5 = -1073741675;
    goto LABEL_15;
  }
  v11 = (wchar_t *)AslAlloc(v7, 2 * v10);
  v2 = v11;
  if ( !v11 )
  {
    v5 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 588, (unsigned int)"Out of memory");
    goto LABEL_16;
  }
  v6 = RtlStringCchCopyW(v11, v10, a2);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = "RtlStringCchCopyW failed [%x]";
    v9 = 598;
    goto LABEL_15;
  }
  *a1 = v2;
  v2 = 0LL;
LABEL_2:
  v5 = 0;
LABEL_16:
  AslFree((__int64)a1, v2);
  return v5;
}
