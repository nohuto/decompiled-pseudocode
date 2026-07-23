/*
 * XREFs of ExpQueryChannelInformation @ 0x1406AB888
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 */

__int64 __fastcall ExpQueryChannelInformation(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rsi
  int ChannelInformation; // ebx
  size_t v7; // r8
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Src = 0LL;
  if ( a2 >= 4 )
  {
    ChannelInformation = MmGetChannelInformation(0, *a1, &Src, Size);
    if ( ChannelInformation >= 0 )
    {
      v7 = Size[0];
      *a3 = Size[0];
      if ( v7 <= 0xFFFFFFFF )
      {
        if ( v4 >= v7 )
        {
          memmove(a1, Src, v7);
          ChannelInformation = 0;
        }
        else
        {
          ChannelInformation = -1073741789;
        }
      }
      else
      {
        ChannelInformation = -1073741670;
      }
    }
  }
  else
  {
    ChannelInformation = -1073741306;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)ChannelInformation;
}
