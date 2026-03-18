/*
 * XREFs of IopSymlinkInitializeSymlinkInfo @ 0x1404C0E68
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1404C0CD4 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

void *__fastcall IopSymlinkInitializeSymlinkInfo(
        __int64 a1,
        __int16 a2,
        const void *a3,
        unsigned __int16 a4,
        __int16 a5,
        void *Src,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10)
{
  void *v13; // rcx
  void *result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi

  *(_WORD *)(a1 + 4) = a8;
  *(_WORD *)(a1 + 18) = a2 - 32;
  *(_WORD *)a1 = a5;
  *(_WORD *)(a1 + 6) = 0;
  *(_WORD *)(a1 + 16) = 0;
  v13 = (void *)(a1 + 32);
  *(_WORD *)(a1 + 2) = a9;
  *(_QWORD *)(a1 + 8) = a10;
  *(_QWORD *)(a1 + 24) = v13;
  if ( Src )
  {
    memmove(v13, Src, a7);
    v15 = *(_QWORD *)(a1 + 24);
    v16 = (unsigned __int64)a7 >> 1;
    *(_WORD *)(a1 + 16) = a7;
    if ( *(_WORD *)(v15 + 2 * v16 - 2) != 92 )
    {
      *(_WORD *)(v15 + 2 * v16) = 92;
      *(_WORD *)(a1 + 16) += 2;
    }
  }
  result = memmove((void *)(*(_QWORD *)(a1 + 24) + *(unsigned __int16 *)(a1 + 16)), a3, a4);
  *(_WORD *)(a1 + 16) += a4;
  return result;
}
