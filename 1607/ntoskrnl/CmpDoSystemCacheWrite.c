/*
 * XREFs of CmpDoSystemCacheWrite @ 0x140604110
 * Callers:
 *     CmpFileWrite @ 0x1403F4FCC (CmpFileWrite.c)
 * Callees:
 *     CmpSetIoPriorityThread @ 0x1400B2B18 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1400B2B20 (CmpSetPriorityThread.c)
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 *     HvViewMapFlush @ 0x14060FBD8 (HvViewMapFlush.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FF34 (HvViewMapUnpinForFileOffset.c)
 */

bool __fastcall CmpDoSystemCacheWrite(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  __int64 v7; // rdx
  KPRIORITY v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // r15d
  char *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // edi
  unsigned int v17; // [rsp+20h] [rbp-48h]
  KPRIORITY Priority; // [rsp+24h] [rbp-44h]
  unsigned int v19; // [rsp+28h] [rbp-40h]
  unsigned int v20; // [rsp+2Ch] [rbp-3Ch]
  char v22; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+90h] [rbp+28h]

  v7 = a1;
  v22 = 0;
  Priority = 0;
  v17 = 0;
  if ( (a5 & 1) != 0 )
  {
    v17 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
    v8 = CmpSetPriorityThread(KeGetCurrentThread(), 4);
    v7 = a1;
    Priority = v8;
    v22 = 1;
  }
  v9 = 0;
  if ( a3 )
  {
    v10 = a2 + 8;
    do
    {
      v11 = *(_DWORD *)(v10 - 8) & 0xFFFFF000;
      v12 = *(char **)v10;
      v19 = *(_DWORD *)(v10 - 8);
      v13 = *(_DWORD *)(v10 + 8) + v19;
      v24 = *(_DWORD *)(v10 + 8);
      v20 = v13;
      v14 = ((v13 + 4095) & 0xFFFFF000) - v11;
      if ( *(_QWORD *)v10 )
      {
        v15 = HvViewMapPinForFileOffset(v7 + 200, v11, v14);
        if ( v15 < 0 )
          goto LABEL_14;
        v15 = HvViewMapCopyToFileOffset(a1 + 200, v19, v12, v24);
        if ( v15 < 0 )
          goto LABEL_14;
        v13 = v20;
      }
      *a4 = v13;
      v15 = HvViewMapFlush(a1 + 200, v11, v14);
      if ( v15 < 0 )
        goto LABEL_14;
      if ( v12 )
        HvViewMapUnpinForFileOffset(a1 + 200, v11, v14);
      v7 = a1;
      ++v9;
      v10 += 24LL;
    }
    while ( v9 < a3 );
  }
  v15 = 0;
LABEL_14:
  if ( v22 )
  {
    CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v17);
    CmpSetPriorityThread(KeGetCurrentThread(), Priority);
  }
  return v15 >= 0;
}
