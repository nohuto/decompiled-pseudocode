/*
 * XREFs of CmpStepThroughExit @ 0x14052D48C
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpStepThroughExit(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v10 = -1;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v2 + 8))(v2, v3, &v10);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 36);
    v3 = *(_DWORD *)(v6 + 28);
    if ( (*(_DWORD *)(v8 + 144) & 0x20) != 0 )
    {
      v7 = -1073741772;
      goto LABEL_5;
    }
  }
  else
  {
    v8 = v2;
  }
  *a1 = v8;
  *a2 = v3;
LABEL_5:
  (*(void (__fastcall **)(__int64, int *))(v2 + 16))(v2, &v10);
  return v7;
}
