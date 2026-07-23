/*
 * XREFs of KdCopyDataBlock @ 0x1401D108C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     KdDecodeDataBlock @ 0x1401D1184 (KdDecodeDataBlock.c)
 * Callees:
 *     <none>
 */

char *__fastcall KdCopyDataBlock(_OWORD *a1)
{
  char *v1; // r8
  _OWORD *v2; // r9
  int v3; // r10d
  char *result; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1

  v1 = (char *)&KdDebuggerDataBlock;
  v2 = a1;
  if ( KdpDataBlockEncoded )
  {
    v3 = 109;
    do
    {
      result = &KdpDataBlockEncoded;
      *(_QWORD *)&v1[(char *)a1 - (char *)&KdDebuggerDataBlock] = KiWaitAlways ^ _byteswap_uint64((unsigned __int64)&KdpDataBlockEncoded ^ __ROL8__(KiWaitNever ^ *(_QWORD *)v1, KiWaitNever));
      v1 += 8;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v5 = 6LL;
    do
    {
      *v2 = *(_OWORD *)v1;
      v2[1] = *((_OWORD *)v1 + 1);
      v2[2] = *((_OWORD *)v1 + 2);
      v2[3] = *((_OWORD *)v1 + 3);
      v2[4] = *((_OWORD *)v1 + 4);
      v2[5] = *((_OWORD *)v1 + 5);
      v2[6] = *((_OWORD *)v1 + 6);
      v2 += 8;
      v6 = *((_OWORD *)v1 + 7);
      v1 += 128;
      *(v2 - 1) = v6;
      --v5;
    }
    while ( v5 );
    *v2 = *(_OWORD *)v1;
    v2[1] = *((_OWORD *)v1 + 1);
    v2[2] = *((_OWORD *)v1 + 2);
    v2[3] = *((_OWORD *)v1 + 3);
    v2[4] = *((_OWORD *)v1 + 4);
    v2[5] = *((_OWORD *)v1 + 5);
    result = (char *)*((_QWORD *)v1 + 12);
    *((_QWORD *)v2 + 12) = result;
  }
  return result;
}
