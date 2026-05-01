/*
 * XREFs of RmpObjectHeaderInitialize @ 0x180005194
 * Callers:
 *     RmpActivityHostAllocateAndInitialize @ 0x180005064 (RmpActivityHostAllocateAndInitialize.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpObjectHeaderInitialize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x28uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 16) = 1;
  result = HIBYTE(a2);
  *(_QWORD *)(a1 + 8) = HIBYTE(a2)
                      + 37
                      * (BYTE6(a2)
                       + 37
                       * (BYTE5(a2)
                        + 37
                        * (BYTE4(a2)
                         + 37
                         * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL)))))));
  return result;
}
