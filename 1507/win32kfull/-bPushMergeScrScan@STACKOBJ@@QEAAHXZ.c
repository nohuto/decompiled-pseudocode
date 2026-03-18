/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C0103E2C
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C0102DE0 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C0103D8C (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C0104264 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02B3510 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // edx
  unsigned int v5; // ebp
  _DWORD *v7; // rdx

  v1 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v1 + 4) )
    return 1LL;
  v3 = 8 * *(_DWORD *)(v1 + 4) + 24;
  v4 = v3 + *((_DWORD *)this + 1);
  v5 = v3;
  if ( v4 > *(_DWORD *)this && !(unsigned int)STACKOBJ::bExpand(this, v4) )
    return 0LL;
  *(_QWORD *)(v1 + 16) = *((_QWORD *)this + 1);
  if ( !*((_DWORD *)this + 1) )
  {
LABEL_4:
    *((_DWORD *)this + 1) += v5;
    *(_DWORD *)(v1 + 8) = v3;
    memmove(*((void **)this + 1), (const void *)v1, v3);
    return 1LL;
  }
  v7 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v7 != **((_DWORD **)this + 2) )
  {
    *((_QWORD *)this + 1) = (char *)v7 + (unsigned int)v7[2];
    goto LABEL_4;
  }
  v5 = v3 - 24;
  v3 += v7[2] - 24;
  if ( v3 <= *(_DWORD *)(*((_QWORD *)this + 3) + 8LL) || (unsigned int)STACKOBJ::bExpandScanline(this, v3, 1) )
  {
    **((_DWORD **)this + 3) = **((_DWORD **)this + 2);
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL)
                                             + *(_DWORD *)(*((_QWORD *)this + 1) + 4LL);
    vMergeSpans(
      (struct _SPAN *)(*((_QWORD *)this + 1) + 24LL),
      (struct _SPAN *)(*((_QWORD *)this + 1) + 8 * (*(unsigned int *)(*((_QWORD *)this + 1) + 4LL) + 3LL)),
      (struct _SPAN *)(*((_QWORD *)this + 2) + 24LL),
      (struct _SPAN *)(*((_QWORD *)this + 2) + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 4LL) + 3LL)),
      (struct _SPAN *)(*((_QWORD *)this + 3) + 24LL));
    v1 = *((_QWORD *)this + 3);
    goto LABEL_4;
  }
  return 0LL;
}
