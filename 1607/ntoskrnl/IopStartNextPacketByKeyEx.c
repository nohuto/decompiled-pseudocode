/*
 * XREFs of IopStartNextPacketByKeyEx @ 0x1400AC96C
 * Callers:
 *     IoStartNextPacket @ 0x1400AC940 (IoStartNextPacket.c)
 *     IoStartNextPacketByKey @ 0x1401C9164 (IoStartNextPacketByKey.c)
 * Callees:
 *     IopStartNextPacket @ 0x1400ACAB8 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1401C955C (IopStartNextPacketByKey.c)
 */

__int64 __fastcall IopStartNextPacketByKeyEx(__int64 a1, unsigned int a2, int a3)
{
  bool v5; // cc
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax

  do
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL)) <= 1;
    v6 = *(_QWORD *)(a1 + 312);
    if ( v5 )
    {
      *(_DWORD *)(v6 + 64) &= 0xFFFFFF1F;
      v7 = (unsigned __int8)a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        IopStartNextPacketByKey(a1, v7, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        IopStartNextPacket(a1, v7);
      }
    }
    else
    {
      *(_DWORD *)(v6 + 64) |= a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    result = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(result + 60);
    a3 = *(_DWORD *)(result + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(result + 64) & 0x60) != 0 );
  return result;
}
