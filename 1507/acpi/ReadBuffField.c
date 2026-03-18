/*
 * XREFs of ReadBuffField @ 0x1C0016DA0
 * Callers:
 *     AccessFieldData @ 0x1C0011EA0 (AccessFieldData.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 * Callees:
 *     ReadSystemMem @ 0x1C0016E34 (ReadSystemMem.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ReadBuffField(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v4 = 0;
  v5 = a2[3] & 0xF;
  v7 = 1;
  if ( (unsigned int)(v5 - 1) <= 3 )
    v7 = 1 << (v5 - 1);
  v8 = *a2;
  if ( (unsigned int)v8 + v7 > *(_DWORD *)(a1 + 8) )
  {
    LogError(3222536196LL);
    PrintDebugMessage(160, *a2, *(_DWORD *)(a1 + 8), v7, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    *a3 = ReadSystemMem((void *)(*(_QWORD *)a1 + v8), v7);
  }
  return v4;
}
