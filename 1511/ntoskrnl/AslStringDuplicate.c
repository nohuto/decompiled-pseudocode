/*
 * XREFs of AslStringDuplicate @ 0x1406802AC
 * Callers:
 *     AslPathToSystemPath @ 0x140680DB0 (AslPathToSystemPath.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x140090A3C (RtlStringCchLengthW.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  wchar_t *v2; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  wchar_t *v8; // rax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v5 < 0 )
    goto LABEL_11;
  v7 = pcchLength + 1;
  if ( pcchLength + 1 < pcchLength || !is_mul_ok(v7, 2uLL) )
  {
    v5 = -1073741675;
    goto LABEL_11;
  }
  v8 = (wchar_t *)AslAlloc(v6, 2 * v7);
  v2 = v8;
  if ( !v8 )
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  v5 = RtlStringCchCopyW(v8, v7, a2);
  if ( v5 < 0 )
  {
LABEL_11:
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  *a1 = v2;
  v2 = 0LL;
LABEL_2:
  v5 = 0;
LABEL_12:
  AslFree((__int64)a1, v2);
  return (unsigned int)v5;
}
