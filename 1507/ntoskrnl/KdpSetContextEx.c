/*
 * XREFs of KdpSetContextEx @ 0x1401FE0F4
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KdpCopyContext @ 0x14072D5E8 (KdpCopyContext.c)
 *     KdpQuickMoveMemory @ 0x14072D7A0 (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x14072D7B8 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // r9
  unsigned __int16 v10; // bp
  __int16 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v4 = *(unsigned int *)(a1 + 16);
  v12 = 56;
  v6 = *(_WORD *)(a1 + 6);
  v7 = *(unsigned int *)(a1 + 20);
  v8 = *(unsigned int *)(a1 + 24);
  if ( v6 < 0x280u && KiProcessorBlock[v6] && KdpContextSent )
  {
    if ( (unsigned int)v8 <= 0x1000 && (unsigned int)v4 < (unsigned int)v8 && (_DWORD)v7 && v4 + v7 <= v8 )
    {
      KdpQuickMoveMemory((char *)&unk_140383038 + v4, *(_QWORD *)(a2 + 8), (unsigned int)v7);
      if ( v9 == v8 )
      {
        v10 = *(_WORD *)(a1 + 6);
        if ( v10 != (unsigned __int16)KeGetCurrentProcessorNumberEx(0LL) )
          a3 = *(_QWORD *)(KiProcessorBlock[v10] + 25216);
        KdpSanitizeContextFlags(&unk_140383038, (unsigned int)v8, &v14);
        KdpCopyContext(a3, v14, &unk_140383038);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v7;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v12, 0LL, &KdpContext);
}
