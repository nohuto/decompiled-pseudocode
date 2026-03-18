/*
 * XREFs of WriteBuffField @ 0x1C00182BC
 * Callers:
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 * Callees:
 *     WriteSystemMem @ 0x1C0018348 (WriteSystemMem.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v3 = 0;
  v4 = a2[3] & 0xF;
  v6 = 1;
  if ( (unsigned int)(v4 - 1) <= 3 )
    v6 = 1 << (v4 - 1);
  v7 = *a2;
  if ( (unsigned int)v7 + v6 > *(_DWORD *)(a1 + 8) )
  {
    LogError(3222536196LL);
    PrintDebugMessage(211, *a2, *(_DWORD *)(a1 + 8), v6, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a1 + v7), v6);
  }
  return v3;
}
