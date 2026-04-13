/*
 * XREFs of sub_180020504 @ 0x180020504
 * Callers:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 * Callees:
 *     sub_180020420 @ 0x180020420 (sub_180020420.c)
 *     sub_180020568 @ 0x180020568 (sub_180020568.c)
 */

__int64 __fastcall sub_180020504(__int64 a1)
{
  int v1; // ebx
  char *v2; // rcx
  HANDLE hObject; // [rsp+40h] [rbp+18h] BYREF

  hObject = 0LL;
  v1 = sub_180020420(a1, a1, &hObject);
  if ( v1 >= 0 )
    v1 = sub_180020568(hObject);
  v2 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return (unsigned int)v1;
}
