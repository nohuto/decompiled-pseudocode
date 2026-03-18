/*
 * XREFs of SrbAssignCommandId @ 0x1C00027D0
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C000E6E8 (ProcessCommandInSpecificQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall SrbAssignCommandId(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // r11
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r10d
  __int16 v8; // bx
  __int16 v9; // r8
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  __int16 v12; // dx
  char result; // al
  unsigned __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // cx

  if ( a3 )
  {
    v4 = *(_WORD *)(a1 + 230);
    v5 = *(_QWORD *)(a1 + 544) + 136LL * (a3 - 1);
  }
  else
  {
    v4 = *(_WORD *)(a1 + 228);
    v5 = a1 + 240;
  }
  v6 = *(unsigned __int16 *)(v5 + 44);
  v7 = *(unsigned __int16 *)(v5 + 46);
  v8 = v6;
  if ( v7 == v6 + 1 || !(_WORD)v7 && v6 == v4 - 1 )
    return 0;
  v9 = v6 + 1;
  *(_WORD *)(v5 + 44) = v9;
  if ( v9 == v4 )
    *(_WORD *)(v5 + 44) = 0;
  v10 = *(_WORD *)(v5 + 48);
  if ( v10 < v4 )
  {
    while ( *(_QWORD *)(16LL * v10 + *(_QWORD *)(v5 + 32)) )
    {
      if ( ++v10 >= v4 )
        goto LABEL_16;
    }
    v11 = v10;
    v12 = v10 + 1;
    *(_WORD *)(v5 + 48) = v12;
    if ( v12 == v4 )
      *(_WORD *)(v5 + 48) = 0;
    goto LABEL_11;
  }
LABEL_16:
  v14 = 0;
  if ( *(_WORD *)(v5 + 48) )
  {
    while ( *(_QWORD *)(16LL * v14 + *(_QWORD *)(v5 + 32)) )
    {
      if ( ++v14 >= *(_WORD *)(v5 + 48) )
        goto LABEL_23;
    }
    v11 = v14;
    v15 = v14 + 1;
    *(_WORD *)(v5 + 48) = v15;
    if ( v15 == v4 )
      *(_WORD *)(v5 + 48) = 0;
LABEL_11:
    *(_WORD *)(a2 + 4240) = v8;
    result = 1;
    *(_WORD *)(a2 + 4238) = v11;
    return result;
  }
LABEL_23:
  v16 = *(_WORD *)(v5 + 44);
  if ( v16 )
    *(_WORD *)(v5 + 44) = v16 - 1;
  else
    *(_WORD *)(v5 + 44) = v4 - 1;
  return 0;
}
