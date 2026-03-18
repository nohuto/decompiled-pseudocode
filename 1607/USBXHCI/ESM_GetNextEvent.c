/*
 * XREFs of ESM_GetNextEvent @ 0x1C003A0BC
 * Callers:
 *     ESM_RunStateMachine @ 0x1C003A2B8 (ESM_RunStateMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_GetNextEvent(__int64 a1)
{
  __int64 v1; // r9
  int v3; // r10d
  __int64 v4; // r11
  __int64 i; // rcx
  unsigned __int8 v6; // bl
  __int64 result; // rax
  unsigned __int8 v8; // r9
  char v9; // r11
  int v10; // edx
  __int64 v11; // rdx

  v1 = *(unsigned int *)(a1 + 880);
  v3 = *(_DWORD *)(a1 + 976);
  v4 = *(_QWORD *)(a1 + 968);
  for ( i = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3));
        (_DWORD)v1 && (*(_DWORD *)(i + 16) & 4) != 0;
        i = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3)) )
  {
    v1 = (unsigned int)(v1 - 1);
  }
  v6 = *(_BYTE *)(a1 + 948);
  result = 1000LL;
  v8 = v6;
  v9 = *(_BYTE *)(a1 + 949);
  if ( v6 != v9 )
  {
    do
    {
      v10 = *(_DWORD *)(a1 + 4LL * v8 + 884) & 3;
      if ( !v10 || v10 == 2 && (*(_BYTE *)(i + 16) & 1) == 0 )
        break;
      if ( v10 == 3 && (*(_BYTE *)(i + 16) & 2) != 0 )
        break;
      v8 = (v8 + 1) & 0xF;
    }
    while ( v8 != v9 );
  }
  if ( v8 != v9 )
  {
    result = *(unsigned int *)(a1 + 4LL * v8 + 884);
    if ( v8 != v6 )
    {
      do
      {
        v11 = v8;
        v8 = (v8 - 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v11 + 884) = *(_DWORD *)(a1 + 4LL * v8 + 884);
      }
      while ( v8 != *(_BYTE *)(a1 + 948) );
    }
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 948) + 884) = 1000;
    *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
  }
  return result;
}
