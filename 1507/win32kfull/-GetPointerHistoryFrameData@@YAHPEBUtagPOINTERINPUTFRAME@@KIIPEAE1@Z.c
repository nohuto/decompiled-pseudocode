/*
 * XREFs of ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01F84C4
 * Callers:
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F8300 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?FindPointerInFrame@@YAHPEBUtagPOINTERINPUTFRAME@@IPEAK@Z @ 0x1C01F7628 (-FindPointerInFrame@@YAHPEBUtagPOINTERINPUTFRAME@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F8F08 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 */

__int64 __fastcall GetPointerHistoryFrameData(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        struct tagPOINTER_INFO *a6)
{
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int i; // r15d
  int *v14; // rdx
  int v15; // edx
  __int64 v16; // r14
  __int64 v17; // rcx
  struct tagPOINTER_INFO *v18; // r14
  unsigned int v22; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  v8 = a2;
  switch ( a2 )
  {
    case 1u:
      v10 = 96;
      goto LABEL_9;
    case 2u:
      goto LABEL_7;
    case 3u:
      v10 = 120;
      goto LABEL_9;
    case 5u:
LABEL_7:
      v10 = 144;
      goto LABEL_9;
  }
  v10 = 0;
LABEL_9:
  v11 = 1;
  v12 = 0;
  for ( i = 0; v11 && i < v7; ++i )
  {
    v22 = v12 < *((_DWORD *)a1 + 6) ? v12 : 0;
    v14 = (int *)(a5 + 4);
    if ( (unsigned __int64)(a5 + 4) >= W32UserProbeAddress )
      v14 = (int *)W32UserProbeAddress;
    v15 = *v14;
    v16 = *((_QWORD *)a1 + 9);
    v12 = v22;
    v17 = v16 + 216LL * v22;
    if ( *(unsigned __int16 *)(v17 + 60) != v15 )
    {
      if ( !(unsigned int)FindPointerInFrame(a1, v15, &v22) )
        return 0;
      v12 = v22;
      v17 = v16 + 216LL * v22;
      v8 = a2;
    }
    if ( a4 >= v10 )
    {
      v18 = a6;
      v11 = PointerInfoCopyOutHelper(
              (struct tagPOINTERINFONODE *)v17,
              *((struct tagHID_POINTER_DEVICE_INFO **)a1 + 11),
              v8,
              v10,
              a6);
      if ( v11 )
      {
        a5 += v10;
        a6 = (struct tagPOINTER_INFO *)((char *)v18 + v10);
        a4 -= v10;
        ++v12;
      }
    }
    v8 = a2;
    v7 = a3;
  }
  return v11;
}
