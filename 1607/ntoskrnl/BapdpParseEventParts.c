/*
 * XREFs of BapdpParseEventParts @ 0x1401327BC
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401324AC (BapdWriteEtwEvents.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BapdpParseEventParts(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *result; // rax
  __int64 v6; // rcx
  char *v7; // r11
  __int64 v8; // r10

  if ( *(_BYTE *)(a1 + 3) == 11
    && a3 >= 7
    && (v6 = *a2, (unsigned int)v6 >= 3)
    && (unsigned int)v6 <= a3 - 4
    && (v7 = (char *)a2 + v6, v8 = *(unsigned __int16 *)((char *)a2 + v6), (unsigned int)v8 >= 4)
    && (unsigned int)v8 <= a3 - (unsigned int)v6 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = v6;
    *(_BYTE *)(a4 + 12) = 2;
    *(_DWORD *)(a4 + 28) = 0;
    *(_QWORD *)(a4 + 16) = v7;
    *(_DWORD *)(a4 + 24) = v8;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 44) = 0;
    *(_QWORD *)(a4 + 32) = &v7[v8];
    result = a5;
    *(_DWORD *)(a4 + 40) = a3 - v8 - v6;
    *a5 = 3;
  }
  else
  {
    result = a5;
    *(_DWORD *)(a4 + 12) = 0;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = a3;
    *a5 = 1;
  }
  return result;
}
