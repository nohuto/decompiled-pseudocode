/*
 * XREFs of CreateField @ 0x1C0023570
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall CreateField(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  __int64 v6; // rdx
  _DWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  if ( *(_WORD *)(v2 + 82) == 1 )
  {
    v4 = CreateXField(a1, a2, v2 + 120, &v8);
    if ( !v4 )
    {
      v5 = v8;
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) >> 3;
      v8[3] = v6;
      v5[4] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL) - 8 * v6;
      v5[5] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v5[6] = 65537;
    }
  }
  else
  {
    v4 = -1072431096;
    LogError(3222536200LL);
    PrintDebugMessage(34, 0, 0, 0, 0LL);
  }
  return v4;
}
