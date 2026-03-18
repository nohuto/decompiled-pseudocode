/*
 * XREFs of MiGetImageBitMapInfo @ 0x140006EF4
 * Callers:
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  int v4; // ecx
  int v5; // ecx
  int *result; // rax

  a2[1] = 0LL;
  v4 = a1 - 1;
  if ( !v4 )
  {
LABEL_15:
    result = &dword_1402FE468;
    *a2 = &dword_1402FE468;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (int *)(unsigned int)dword_1402FE460;
      goto LABEL_7;
    }
    return result;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    result = &dword_1402FE478;
    *a2 = &dword_1402FE478;
    if ( a3 )
    {
      result = (int *)((char *)MmHighestUserAddress - 0xFFFF);
      *a3 = (char *)MmHighestUserAddress - 0xFFFF;
    }
    if ( a4 )
    {
      result = (int *)(unsigned int)dword_1402FE464;
LABEL_7:
      *a4 = (_DWORD)result;
      return result;
    }
    return result;
  }
  result = &dword_1402FE450;
  if ( v5 == 1 )
  {
    a2[1] = &dword_1402FE450;
    goto LABEL_15;
  }
  *a2 = &dword_1402FE450;
  if ( a3 )
    *a3 = 2013265920LL;
  if ( a4 )
  {
    result = (int *)(unsigned int)dword_1402FE440;
    goto LABEL_7;
  }
  return result;
}
