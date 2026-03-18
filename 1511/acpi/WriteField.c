/*
 * XREFs of WriteField @ 0x1C00147DC
 * Callers:
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     SupportsOnlyRawAccess @ 0x1C00148E4 (SupportsOnlyRawAccess.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 */

__int64 __fastcall WriteField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  __int64 v8; // r13
  unsigned int v9; // esi
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rax
  int ObjectTypeName; // edx
  int v15; // ecx
  __int64 v16; // r8

  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  v8 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v11 = -1072431087;
      LogError(3222536209LL);
      ObjectTypeName = *(_DWORD *)(a3 + 12);
      v15 = 213;
      goto LABEL_21;
    }
    v16 = a2;
    return (unsigned int)RawFieldAccess(a1, 1LL, v16);
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v9 = 8;
    v10 = a4 + 16;
    if ( v5 < 8 )
      v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  }
  else
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v9 = *(_DWORD *)(a4 + 24) - 1;
    }
    else
    {
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        v11 = -1072431095;
        LogError(3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
        v15 = 214;
LABEL_21:
        PrintDebugMessage(v15, ObjectTypeName, 0, 0, 0LL);
        return v11;
      }
      v9 = *(_DWORD *)(a4 + 24);
    }
    v10 = *(_QWORD *)(a4 + 32);
  }
  if ( (unsigned __int8)SupportsOnlyRawAccess(a2) )
  {
    v16 = a2;
    a1 = v8;
    return (unsigned int)RawFieldAccess(a1, 1LL, v16);
  }
  v11 = 0;
  v12 = HeapAlloc(v8 + 432, 1297237576, 0x40u);
  if ( !v12 )
  {
    v11 = -1072431102;
    LogError(3222536194LL);
    ObjectTypeName = 0;
    v15 = 153;
    goto LABEL_21;
  }
  *(_QWORD *)(v12 + 8) = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = v12;
  *(_QWORD *)(v12 + 24) = WriteFieldLoop;
  *(_DWORD *)v12 = 1279677015;
  *(_QWORD *)(v12 + 32) = a2;
  *(_QWORD *)(v12 + 40) = a3;
  *(_QWORD *)(v12 + 48) = v10;
  *(_DWORD *)(v12 + 56) = v9;
  *(_DWORD *)(v12 + 60) = v5;
  return v11;
}
