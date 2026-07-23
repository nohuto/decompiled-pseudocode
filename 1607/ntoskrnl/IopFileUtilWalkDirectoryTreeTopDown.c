/*
 * XREFs of IopFileUtilWalkDirectoryTreeTopDown @ 0x1407CF920
 * Callers:
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeTopDown(UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  UNICODE_STRING *v6; // rbx
  __int64 v7; // rax
  _QWORD **v8; // rax
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D8h]
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int FileInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  P[1] = P;
  P[0] = P;
  v5 = IopFileUtilWalkDirectoryTreeHelper(
         a1,
         13,
         (__int64 (__fastcall *)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64))PiLastGoodRevertCopyCallback,
         a4,
         FileInformation,
         v10,
         (__int64)P);
  while ( 1 )
  {
    v6 = (UNICODE_STRING *)P[0];
    if ( P[0] == P )
      break;
    if ( v5 < 0 )
      goto LABEL_9;
    v7 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v7 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v7 + 8) = P;
    v5 = IopFileUtilWalkDirectoryTreeHelper(
           v6 + 1,
           13,
           (__int64 (__fastcall *)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64))PiLastGoodRevertCopyCallback,
           a4,
           FileInformation,
           v11,
           (__int64)P);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v5 >= 0 )
    return (unsigned int)v5;
LABEL_9:
  while ( v6 != (UNICODE_STRING *)P )
  {
    v8 = *(_QWORD ***)&v6->Length;
    if ( (PVOID *)v6->Buffer != P || v8[1] != (_QWORD *)v6 )
      __fastfail(3u);
    P[0] = *(PVOID *)&v6->Length;
    v8[1] = P;
    ExFreePoolWithTag(v6, 0);
    v6 = (UNICODE_STRING *)P[0];
  }
  return (unsigned int)v5;
}
