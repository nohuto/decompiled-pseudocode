/*
 * XREFs of MxGetNextLargePage @ 0x140747728
 * Callers:
 *     MxMapVa @ 0x140747468 (MxMapVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxGetNextLargePage(unsigned int a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rdx

  v2 = 0;
  do
  {
    v3 = 4LL * a1;
    if ( MxFreeDescriptor[v3 + 1] && MxFreeDescriptor[v3 + 3] != -1 )
      break;
    if ( ++a1 == (unsigned __int16)KeNumberNodes )
      a1 = 0;
    ++v2;
  }
  while ( v2 < (unsigned __int16)KeNumberNodes );
  if ( v2 == (unsigned __int16)KeNumberNodes )
  {
    byte_1402FED75 = 16;
    return -1LL;
  }
  else
  {
    v4 = &MxFreeDescriptor[4 * a1];
    v5 = v4[3];
    if ( (unsigned __int64)(v5 - *v4) < 0x200 )
      v4[3] = -1LL;
    else
      v4[3] = v5 - 512;
    return v5;
  }
}
