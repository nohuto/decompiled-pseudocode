/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140405110
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpIsKeyDeleted @ 0x140405030 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140402E2C (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 < 2 ? *(_QWORD *)(a1 + 8LL * v2 + 8) : *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (v2 - 2));
    if ( *(_WORD *)(v4 + 58) && *(_BYTE *)(v4 + 57) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 32) != -1 )
    {
      if ( a2 && (NextElement = CmListGetNextElement((_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL), &i, 32)) != 0LL )
      {
        while ( 1 )
        {
          v8 = *((_DWORD *)NextElement + 17);
          if ( v8 == 2 || v8 == 11 )
            break;
          NextElement = CmListGetNextElement((_QWORD *)(v6 + 200), &i, 32);
          if ( !NextElement )
            return (char)NextElement;
        }
        LOBYTE(NextElement) = CmEqualTrans(*((_QWORD *)NextElement + 7), v7) != 0;
      }
      else
      {
        LOBYTE(NextElement) = 0;
      }
      return (char)NextElement;
    }
  }
  LOBYTE(NextElement) = 1;
  return (char)NextElement;
}
