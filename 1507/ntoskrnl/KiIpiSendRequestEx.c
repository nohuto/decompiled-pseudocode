/*
 * XREFs of KiIpiSendRequestEx @ 0x1400425D0
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeInvalidateAllCaches @ 0x140139E60 (KeInvalidateAllCaches.c)
 *     KeInvalidateRangeAllCaches @ 0x14015A4C0 (KeInvalidateRangeAllCaches.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400427F0 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        __int64 i,
        _WORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, __int64),
        __int64 a8)
{
  int v8; // r10d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 result; // rax

  v8 = i;
  if ( !(_DWORD)i )
  {
    v10 = 0;
    for ( i = 0LL; (unsigned __int16)i < *a3; LOWORD(i) = i + 1 )
    {
      v11 = *(_QWORD *)&a3[4 * (unsigned __int16)i + 4];
      v12 = (0x101010101010101LL
           * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( (unsigned __int8)v12 > 1u
        || (_BYTE)v12 == 1 && (*(unsigned __int8 *)(a1 + 1616) != (_WORD)i || (v11 & *(_QWORD *)(a1 + 1608)) == 0) )
      {
        goto LABEL_11;
      }
    }
LABEL_6:
    result = (__int64)a7;
    if ( a7 )
      return a7(a8, i);
    return result;
  }
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    goto LABEL_6;
  v10 = 0;
LABEL_11:
  KiIpiSendRequest(a1, v8, (_DWORD)a3, a4, a5, a6);
  if ( a7 )
    ((void (__fastcall *)(__int64))a7)(a8);
  for ( result = *(unsigned int *)(a1 + 11520); (_DWORD)result; result = *(unsigned int *)(a1 + 11520) )
  {
    if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v10);
  }
  return result;
}
