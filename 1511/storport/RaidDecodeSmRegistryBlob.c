/*
 * XREFs of RaidDecodeSmRegistryBlob @ 0x1C003C95C
 * Callers:
 *     DllInitialize @ 0x1C0013D00 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidDecodeSmRegistryBlob(PUCHAR Buffer)
{
  unsigned __int16 v2; // bp
  PUCHAR v3; // rcx
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rsi
  ULONG v7; // eax

  v2 = -1;
  v3 = Buffer + 4;
  v4 = 20LL;
  do
  {
    *v3++ ^= *Buffer;
    --v4;
  }
  while ( v4 );
  if ( *((_DWORD *)Buffer + 1) == 3 && Buffer[12] <= 1u )
  {
    v5 = *(_DWORD *)Buffer;
    v6 = 0LL;
    *(_DWORD *)Buffer = 0;
    v7 = RtlComputeCrc32(0, Buffer, 0x18u);
    *(_DWORD *)Buffer = v7;
    if ( v7 == v5 )
    {
      if ( Buffer[12] )
      {
        while ( (unsigned int)(unsigned __int16)*(_DWORD *)&Buffer[8 * v6 + 20] - 1 <= 0xFD )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= Buffer[12] )
            return *((unsigned __int16 *)Buffer + 10);
        }
      }
      else
      {
        return *((unsigned __int16 *)Buffer + 10);
      }
    }
  }
  return v2;
}
