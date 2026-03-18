/*
 * XREFs of AccessFieldData @ 0x1C0011EA0
 * Callers:
 *     WriteFieldObj @ 0x1C0011C60 (WriteFieldObj.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     PushAccFieldObj @ 0x1C0012040 (PushAccFieldObj.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001532C (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0016DA0 (ReadBuffField.c)
 *     WriteBuffField @ 0x1C0017F14 (WriteBuffField.c)
 *     PushPreserveWriteObj @ 0x1C00469DC (PushPreserveWriteObj.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  unsigned int FieldUnitRegionObj; // edi
  __int64 v11; // rsi
  __int64 v13; // rcx
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // r10d
  int v19; // edx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v13 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return (unsigned int)ReadBuffField(v13, a3, a4);
    else
      return (unsigned int)WriteBuffField(v13, a3, *a4);
  }
  v9 = *(_QWORD *)(a2 + 32);
  v24[0] = 0LL;
  if ( *(_WORD *)(*(_QWORD *)v9 + 58LL) == 132 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)v9 + 88LL);
    if ( a5 )
    {
      return (unsigned int)PushAccFieldObj(
                             a1,
                             ReadFieldObj,
                             *(_QWORD *)(v15 + 8) + 56LL,
                             *(_QWORD *)(*(_QWORD *)(v15 + 8) + 88LL) + 8LL,
                             a4,
                             4);
    }
    else
    {
      v16 = a3[2];
      if ( v16 >= 0x40 )
        v17 = 0LL;
      else
        v17 = 1LL << v16;
      v18 = a3[3];
      v19 = v18 & 0xF;
      v20 = ~((v17 - 1) << a3[1]);
      v21 = 1;
      if ( (unsigned int)(v19 - 1) <= 3 )
        v21 = 1 << (v19 - 1);
      if ( 8 * v21 < 64 )
      {
        LOBYTE(v22) = 1;
        if ( (unsigned int)(v19 - 1) <= 3 )
          v22 = 1 << (v19 - 1);
        v5 = 1LL << (8 * (unsigned __int8)v22);
      }
      if ( ((v5 - 1) & v20) != 0 && (v18 & 0x60) == 0 )
        return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v15 + 8) + 56LL, *a4);
      else
        return (unsigned int)PushAccFieldObj(
                               a1,
                               WriteFieldObj,
                               *(_QWORD *)(v15 + 8) + 56LL,
                               *(_QWORD *)(*(_QWORD *)(v15 + 8) + 88LL) + 8LL,
                               a4,
                               4);
    }
  }
  FieldUnitRegionObj = GetFieldUnitRegionObj(v9, v24);
  if ( !FieldUnitRegionObj )
  {
    v11 = v24[0];
    if ( v24[0] )
    {
      FieldUnitRegionObj = AccessBaseField(a1, v24[0], (_DWORD)a3, (_DWORD)a4, a5);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 104), 0xFFFFFFFF) == 1 )
      {
        v23 = v24[0];
        *(_WORD *)(v24[0] + 56) |= 4u;
        if ( (*(_WORD *)(v23 + 56) & 0x40) == 0 )
          FreeNameSpaceObjects(v23);
      }
    }
  }
  return FieldUnitRegionObj;
}
