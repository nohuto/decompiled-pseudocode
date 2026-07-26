/*
 * XREFs of ndisNDKWmiGetAdapterCapabilities @ 0x1C00D12D4
 * Callers:
 *     ndisQueryGuidData @ 0x1C009F550 (ndisQueryGuidData.c)
 *     ndisGetRdmaCapabilities @ 0x1C00D0D44 (ndisGetRdmaCapabilities.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011E40 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

void *__fastcall ndisNDKWmiGetAdapterCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, _DWORD *a2)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rdi
  void *result; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  result = memset(a2, 0, 0x88uLL);
  if ( NDKBlock )
  {
    *a2 = *((_DWORD *)NDKBlock + 10);
    a2[1] = *((_DWORD *)NDKBlock + 11);
    a2[2] = *((_DWORD *)NDKBlock + 12);
    a2[3] = *((_DWORD *)NDKBlock + 13);
    a2[4] = *((_DWORD *)NDKBlock + 14);
    a2[5] = *((_DWORD *)NDKBlock + 15);
    a2[6] = *((_DWORD *)NDKBlock + 16);
    a2[7] = *((_DWORD *)NDKBlock + 17);
    *((_QWORD *)a2 + 4) = *((_QWORD *)NDKBlock + 9);
    a2[10] = *((_DWORD *)NDKBlock + 22);
    a2[11] = *((_DWORD *)NDKBlock + 23);
    a2[12] = *((_DWORD *)NDKBlock + 24);
    *((_QWORD *)a2 + 7) = *((_QWORD *)NDKBlock + 13);
    *((_QWORD *)a2 + 8) = *((_QWORD *)NDKBlock + 14);
    a2[18] = *((_DWORD *)NDKBlock + 30);
    a2[19] = *((_DWORD *)NDKBlock + 31);
    a2[20] = *((_DWORD *)NDKBlock + 32);
    a2[21] = *((_DWORD *)NDKBlock + 33);
    a2[22] = *((_DWORD *)NDKBlock + 34);
    a2[23] = *((_DWORD *)NDKBlock + 35);
    a2[24] = *((_DWORD *)NDKBlock + 36);
    a2[25] = *((_DWORD *)NDKBlock + 37);
    a2[26] = *((_DWORD *)NDKBlock + 38);
    a2[27] = *((_DWORD *)NDKBlock + 39);
    a2[28] = *((_DWORD *)NDKBlock + 40);
    a2[29] = *((_DWORD *)NDKBlock + 41);
    a2[30] = *((_DWORD *)NDKBlock + 42);
    a2[31] = *((_DWORD *)NDKBlock + 43);
    a2[32] = *((_DWORD *)NDKBlock + 44);
    result = (void *)*((unsigned int *)NDKBlock + 45);
    a2[33] = (_DWORD)result;
  }
  return result;
}
