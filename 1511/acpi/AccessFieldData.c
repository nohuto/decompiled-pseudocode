/*
 * XREFs of AccessFieldData @ 0x1C0013530
 * Callers:
 *     WriteFieldObj @ 0x1C00132F0 (WriteFieldObj.c)
 * Callees:
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0018188 (ReadBuffField.c)
 *     WriteBuffField @ 0x1C00182BC (WriteBuffField.c)
 *     PushPreserveWriteObj @ 0x1C00462FC (PushPreserveWriteObj.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // r10d
  int v16; // edx
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  unsigned int FieldUnitRegionObj; // edi
  __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return (unsigned int)ReadBuffField(v9, a3, a4);
    else
      return (unsigned int)WriteBuffField(v9, a3, *a4);
  }
  v11 = *(_QWORD *)(a2 + 32);
  v24[0] = 0LL;
  if ( *(_WORD *)(*(_QWORD *)v11 + 58LL) == 132 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 88LL);
    if ( a5 )
    {
      return (unsigned int)PushAccFieldObj(
                             a1,
                             (__int64)ReadFieldObj,
                             *(_QWORD *)(v12 + 8) + 56LL,
                             (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 88LL) + 8LL),
                             (__int64)a4,
                             4u);
    }
    else
    {
      v13 = a3[2];
      if ( v13 < 0x40 )
        v14 = 1LL << v13;
      else
        v14 = 0LL;
      v15 = a3[3];
      v16 = v15 & 0xF;
      v17 = ~((v14 - 1) << a3[1]);
      v18 = 1;
      if ( (unsigned int)(v16 - 1) <= 3 )
        v18 = 1 << (v16 - 1);
      if ( 8 * v18 < 64 )
      {
        LOBYTE(v19) = 1;
        if ( (unsigned int)(v16 - 1) <= 3 )
          v19 = 1 << (v16 - 1);
        v5 = 1LL << (8 * (unsigned __int8)v19);
      }
      if ( ((v5 - 1) & v17) != 0 && (v15 & 0x60) == 0 )
        return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v12 + 8) + 56LL, *a4);
      else
        return (unsigned int)PushAccFieldObj(
                               a1,
                               (__int64)WriteFieldObj,
                               *(_QWORD *)(v12 + 8) + 56LL,
                               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 88LL) + 8LL),
                               (__int64)a4,
                               4u);
    }
  }
  FieldUnitRegionObj = GetFieldUnitRegionObj(v11, v24);
  if ( !FieldUnitRegionObj )
  {
    v21 = v24[0];
    if ( v24[0] )
    {
      FieldUnitRegionObj = AccessBaseField(a1, v24[0], (_DWORD)a3, (_DWORD)a4, a5);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 104), 0xFFFFFFFF) == 1 )
      {
        v22 = v24[0];
        *(_WORD *)(v24[0] + 56LL) |= 4u;
        if ( (*(_WORD *)(v22 + 56) & 0x40) == 0 )
          FreeNameSpaceObjects();
      }
    }
  }
  return FieldUnitRegionObj;
}
