/*
 * XREFs of ParseDLMObjectInternal @ 0x1C00453BC
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C0045554 (PerformDLMObjectBindings.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char v6; // r14
  __int64 v7; // rbx
  unsigned int NameSpaceObject; // edi
  __int16 v9; // ax
  _OWORD v11[2]; // [rsp+28h] [rbp-D8h] BYREF
  signed __int64 v12; // [rsp+48h] [rbp-B8h]

  v4 = gpheapGlobal;
  v6 = 0;
  v7 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32));
  if ( !NameSpaceObject )
  {
    v7 = MEMORY[0x58];
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(MEMORY[0x58] + 24LL), 0, 0) )
      return NameSpaceObject;
    if ( a4 )
    {
      v9 = *(_WORD *)(a4 + 2);
      if ( v9 != 3 )
      {
        if ( v9 != 2 || (unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32)) || (a4 = 56LL, MEMORY[0x3A] != 3) )
        {
          NameSpaceObject = -1072431089;
          goto LABEL_18;
        }
      }
      if ( !(unsigned int)DupObjData(v4, (__int64)v11, a4) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v12, 0LL) )
        {
          v6 = 1;
        }
        else
        {
          *(_OWORD *)(v7 + 32) = v11[0];
          *(_OWORD *)(v7 + 48) = v11[1];
          *(_QWORD *)(v7 + 64) = v12;
          _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 2, 0);
        }
      }
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 0);
    }
    NameSpaceObject = 0;
  }
  if ( NameSpaceObject == -1072431089 )
  {
LABEL_18:
    if ( v7 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 0);
      NameSpaceObject = 0;
    }
  }
  if ( v6 )
    FreeDataBuffs((__int64)v11, 1u);
  return NameSpaceObject;
}
