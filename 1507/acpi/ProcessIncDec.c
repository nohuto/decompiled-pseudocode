/*
 * XREFs of ProcessIncDec @ 0x1C0020540
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int ObjectTypeName; // eax
  int v11; // r11d

  v4 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v4;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v7 + 2) != 1 )
  {
    FreeDataBuffs(v7, 1u);
    v4 = -1072431095;
    LogError(3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v11, ObjectTypeName, 0, 0LL);
LABEL_10:
    v8 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v8 + 8);
    HeapFree(v8);
    return v4;
  }
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    ++*(_QWORD *)(v7 + 16);
  else
    --*(_QWORD *)(v7 + 16);
  if ( a3 )
    goto LABEL_10;
  v4 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v4 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_10;
  return v4;
}
