/*
 * XREFs of CmpStepThroughExit @ 0x1404A2960
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpStepThroughExit(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v10 = -1;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v2 + 8))(v2, v3, &v10);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 36);
      v3 = *(_DWORD *)(v6 + 28);
      if ( (*(_DWORD *)(v7 + 144) & 0x20) != 0 )
      {
        v8 = -1073741772;
        goto LABEL_5;
      }
    }
    else
    {
      v7 = v2;
    }
    *a2 = v3;
    v8 = 0;
    *a1 = v7;
LABEL_5:
    (*(void (__fastcall **)(__int64, int *))(v2 + 16))(v2, &v10);
    return v8;
  }
  return 3221225626LL;
}
