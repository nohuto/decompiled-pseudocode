/*
 * XREFs of sub_18001FEC4 @ 0x18001FEC4
 * Callers:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 * Callees:
 *     sub_18001FF2C @ 0x18001FF2C (sub_18001FF2C.c)
 *     sub_180020420 @ 0x180020420 (sub_180020420.c)
 */

__int64 __fastcall sub_18001FEC4(_QWORD *a1)
{
  int v1; // ebx
  char *v2; // rcx
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  hObject = 0LL;
  v1 = sub_180020420(a1, 0LL, &hObject);
  if ( v1 >= 0 )
    v1 = sub_18001FF2C(hObject);
  v2 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return (unsigned int)v1;
}
