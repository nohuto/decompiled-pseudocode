/*
 * XREFs of ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01F81FC
 * Callers:
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F8300 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F8F08 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 */

__int64 __fastcall GetPointerFrameData(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  unsigned int v11; // ebx
  struct tagPOINTER_INFO *v12; // rax
  unsigned int v13; // esi
  int v14; // ecx
  unsigned int v15; // ebp
  __int64 v16; // rdi
  unsigned int v17; // edx
  int v19; // [rsp+70h] [rbp+18h]
  struct tagPOINTER_INFO *v20; // [rsp+88h] [rbp+30h]

  switch ( a3 )
  {
    case 1u:
      v11 = 96;
      goto LABEL_9;
    case 2u:
      goto LABEL_7;
    case 3u:
      v11 = 120;
      goto LABEL_9;
    case 5u:
LABEL_7:
      v11 = 144;
      goto LABEL_9;
  }
  v11 = 0;
LABEL_9:
  v12 = (struct tagPOINTER_INFO *)*((_QWORD *)a2 + 10);
  v13 = 0;
  v14 = *((_DWORD *)a2 + 2);
  v15 = 0;
  v16 = *((_QWORD *)a1 + 9);
  v17 = 1;
  v20 = (struct tagPOINTER_INFO *)*((_QWORD *)a2 + 10);
  v19 = v14;
  do
  {
    if ( v15 >= *((_DWORD *)a1 + 6) )
      break;
    if ( *(struct tagPOINTER_INFO **)(v16 + 80) == v12 && *(_DWORD *)(v16 + 8) == v14 )
    {
      ++v13;
      if ( a4 >= v11 )
      {
        v17 = PointerInfoCopyOutHelper(
                (struct tagPOINTERINFONODE *)v16,
                *((struct tagHID_POINTER_DEVICE_INFO **)a1 + 11),
                a3,
                v11,
                a6);
        v12 = v20;
        if ( v17 )
        {
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + v11);
          a4 -= v11;
        }
        v14 = v19;
      }
    }
    ++v15;
    v16 += 216LL;
  }
  while ( v17 );
  if ( v17 )
    *a5 = v13;
  return v17;
}
