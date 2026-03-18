/*
 * XREFs of KdpGetContext @ 0x14072B158
 * Callers:
 *     KdpGetContextEx @ 0x1401FDF40 (KdpGetContextEx.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KdpCopyContext @ 0x14072D5E8 (KdpCopyContext.c)
 *     KdpInitializeExtendedContext @ 0x14072D72C (KdpInitializeExtendedContext.c)
 */

__int64 __fastcall KdpGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v7; // si
  unsigned int v8; // r15d
  int v9; // eax
  unsigned int v10; // ebp

  result = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)result >= 0x280u )
    goto LABEL_12;
  result = (unsigned __int16)result;
  if ( !KiProcessorBlock[(unsigned __int16)result] )
    goto LABEL_12;
  v7 = *(_WORD *)(a1 + 6);
  if ( v7 != (unsigned __int16)KeGetCurrentProcessorNumberEx(0LL) )
    a3 = *(_QWORD *)(KiProcessorBlock[v7] + 25216);
  v8 = *(_DWORD *)(a3 + 48);
  v9 = 1256;
  if ( (v8 & 0x100040) == 0x100040 )
    v9 = MEMORY[0xFFFFF780000003E8] + 800;
  v10 = v9 + 15;
  result = *(unsigned __int16 *)(a2 + 2);
  if ( v10 <= (unsigned int)result )
  {
    KdpInitializeExtendedContext(*(_QWORD *)(a2 + 8), v8);
    result = KdpCopyContext(*(_QWORD *)(a2 + 8), v8, a3);
    if ( (v8 & 0x100040) == 0x100040 )
    {
      *(_WORD *)a2 = v10;
    }
    else
    {
      result = 1232LL;
      *(_WORD *)a2 = 1232;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
LABEL_12:
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return result;
}
