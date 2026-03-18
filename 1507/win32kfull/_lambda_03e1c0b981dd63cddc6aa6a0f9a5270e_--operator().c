/*
 * XREFs of _lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator() @ 0x1C02D5F34
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C02D7BF0 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator()(unsigned int ***a1, unsigned int a2)
{
  unsigned int *v2; // r8
  __int64 v3; // r10
  _WORD *v4; // rax

  if ( (unsigned __int64)(int)a2 < 0xC0 )
    return 0;
  if ( (a2 & 1) != 0 )
    return 0;
  v2 = **a1;
  v3 = *v2;
  if ( a2 > (unsigned __int64)(v3 - 2) )
    return 0;
  v4 = (_WORD *)((char *)v2 + (int)a2);
  while ( *v4 )
  {
    if ( ++v4 > (_WORD *)((char *)v2 + v3 - 2) )
      return 0;
  }
  return 1;
}
