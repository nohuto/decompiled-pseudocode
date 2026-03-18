/*
 * XREFs of RtlpMuiRegCreateStringPool @ 0x140591708
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1405917F8 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpMuiRegResizeStringPool @ 0x1407201A4 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     sub_14015E180 @ 0x14015E180 (sub_14015E180.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateStringPool(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _QWORD *result; // rax
  _WORD *v5; // rdx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  v3 = a2;
  if ( a1 < 1 )
    v2 = 4;
  if ( a2 < 1 )
    v3 = 40;
  result = sub_14015E180(0x20u, v2, 2u, v3, 2u, &v6);
  if ( result )
  {
    *(_DWORD *)result = v6;
    result[2] = result + 4;
    *((_WORD *)result + 2) = v2;
    *((_WORD *)result + 4) = v3;
    v5 = (_WORD *)result + (unsigned __int16)v2 + 16;
    result[3] = v5;
    *v5 = 0;
    *((_WORD *)result + 5) = 1;
    *(_WORD *)result[2] = 0;
    *((_WORD *)result + 3) = 1;
  }
  return result;
}
