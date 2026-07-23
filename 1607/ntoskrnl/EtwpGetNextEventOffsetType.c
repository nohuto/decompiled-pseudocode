/*
 * XREFs of EtwpGetNextEventOffsetType @ 0x14022A940
 * Callers:
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpCompressBuffer @ 0x140229F34 (EtwpCompressBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1406A5478 (EtwpSendBufferToDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetNextEventOffsetType(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r8d
  unsigned int v7; // edx
  unsigned int v9; // eax
  bool v10; // cf
  unsigned int v11; // eax

  *a3 = 0;
  v4 = *a1;
  v5 = a2;
  if ( !(_DWORD)v4 || a2 < 0x48 || a2 >= (unsigned __int64)(v4 - 4) )
    return 0LL;
  v6 = *(unsigned int *)((char *)a1 + a2);
  if ( (v6 & 0xFF000000) == 0x90000000 )
  {
    v9 = (unsigned __int16)v6;
    v7 = 15;
    if ( (unsigned __int16)v6 >= 8u )
      goto LABEL_29;
    return 0LL;
  }
  if ( (v6 & 0xFF000000) != 0xC0000000 )
    return 0LL;
  v7 = BYTE2(v6);
  if ( BYTE2(v6) <= 0xDu )
  {
    if ( BYTE2(v6) != 13 )
    {
      if ( BYTE2(v6) )
      {
        if ( BYTE2(v6) <= 2u )
        {
          if ( v5 < v4 - 8 )
          {
            v9 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
            v10 = v9 < 0x20;
            goto LABEL_16;
          }
        }
        else
        {
          if ( BYTE2(v6) > 4u )
          {
            if ( BYTE2(v6) <= 9u || BYTE2(v6) > 0xBu )
              return 0LL;
            goto LABEL_24;
          }
          if ( v5 < v4 - 8 )
          {
            v9 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
            v10 = v9 < 0x18;
            goto LABEL_16;
          }
        }
      }
      return 0LL;
    }
LABEL_25:
    v9 = (unsigned __int16)v6;
    v10 = (unsigned __int16)v6 < 0x50u;
    goto LABEL_16;
  }
  if ( BYTE2(v6) < 0x10u )
    return 0LL;
  if ( BYTE2(v6) > 0x11u )
  {
    if ( BYTE2(v6) > 0x13u )
    {
      if ( BYTE2(v6) <= 0x15u )
      {
LABEL_24:
        v9 = (unsigned __int16)v6;
        v10 = (unsigned __int16)v6 < 0x30u;
        goto LABEL_16;
      }
      return 0LL;
    }
    goto LABEL_25;
  }
  if ( v5 >= v4 - 8 )
    return 0LL;
  v9 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
  v10 = v9 < 0x10;
LABEL_16:
  if ( v10 )
    return 0LL;
LABEL_29:
  v11 = (v9 + 7) & 0xFFFFFFF8;
  if ( v11 >= (unsigned int)v4 || v11 + (unsigned int)v5 > (unsigned int)v4 )
    return 0LL;
  *a3 = v11;
  return v7;
}
