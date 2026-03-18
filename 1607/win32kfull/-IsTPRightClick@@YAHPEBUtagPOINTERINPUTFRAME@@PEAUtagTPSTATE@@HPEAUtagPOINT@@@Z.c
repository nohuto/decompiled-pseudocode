/*
 * XREFs of ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z @ 0x1C01E7FD8
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 */

__int64 __fastcall IsTPRightClick(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        int a3,
        struct tagPOINT *a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // edi
  int v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // r14d
  unsigned __int64 *i; // r9
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r11d

  v4 = 0;
  if ( a3 || (qword_1C03281F0 & 0x200000000LL) == 0 )
    return 0LL;
  v7 = *((_DWORD *)a1 + 10);
  v8 = 0;
  v9 = *((_QWORD *)a1 + 11);
  if ( !v7 )
    return v4;
  v10 = *((_DWORD *)a2 + 411);
  for ( i = (unsigned __int64 *)(v9 + 96); ; i += 27 )
  {
    v12 = 272LL * (*(unsigned __int16 *)(v9 + 48) % v10);
    v13 = *(_DWORD *)(v9 + 68);
    if ( !v13 || (v13 & 0x40000) != 0 )
      goto LABEL_12;
    v14 = -__CFSHR__(*(_DWORD *)((char *)a2 + v12 + 264), 6);
    if ( __CFSHR__(*(_DWORD *)((char *)a2 + v12 + 264), 6) )
    {
LABEL_11:
      *a4 = (struct tagPOINT)*i;
      goto LABEL_12;
    }
    if ( *(_DWORD *)((char *)a2 + v12 + 268) == v4 && PtInRect((_DWORD *)a2 + 470, *i) )
      break;
    if ( v14 )
      goto LABEL_11;
LABEL_12:
    v9 += 216LL;
    if ( ++v8 >= v7 )
      return v4;
  }
  v4 = 1;
  *a4 = *(struct tagPOINT *)(v9 + 96);
  return v4;
}
