/*
 * XREFs of NtGdiGetRasterizerCaps @ 0x14032AEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetRasterizerCaps(void *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]

  v2 = a2;
  v4 = 0;
  if ( a1 && (_DWORD)a2 )
  {
    if ( (unsigned int)a2 >= 6 )
      v2 = 6;
    v7 = 131078;
    v5 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
    LOBYTE(v4) = *(_DWORD *)(v5 + 20344) != 0;
    HIWORD(v7) |= v4;
    v8 = *(_WORD *)(v5 + 20336);
    GreProbeAndWriteToUntrustedVa(a1, v2, &v7, v2, 4uLL);
    return 1;
  }
  return v4;
}
