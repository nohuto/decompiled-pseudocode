/*
 * XREFs of FopReadNamingTable @ 0x1407D4B64
 * Callers:
 *     FopValidateFontNameTable @ 0x1407D49E4 (FopValidateFontNameTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     FopReadNameRecord @ 0x1407D4C7C (FopReadNameRecord.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int NameRecord; // ebx
  unsigned int v7; // edx
  unsigned __int16 v8; // si
  __int16 v9; // bp
  __int64 Memory; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  int v14; // [rsp+20h] [rbp-58h] BYREF
  __int16 v15; // [rsp+24h] [rbp-54h]

  NameRecord = FioFwReadBytesAtOffset(a1, a2, 6u, &v14);
  if ( NameRecord >= 0 )
  {
    v7 = 18;
    LOWORD(v14) = __ROR2__(v14, 8);
    v8 = __ROR2__(HIWORD(v14), 8);
    v9 = __ROR2__(v15, 8);
    HIWORD(v14) = v8;
    if ( v8 )
    {
      if ( 12 * (unsigned int)v8 + 18 < 0x12 )
        return (unsigned int)-1073741675;
      v7 = 12 * v8 + 18;
      NameRecord = 0;
    }
    Memory = BgpFwAllocateMemory(v7);
    if ( Memory )
    {
      v11 = a2 + 6;
      *(_DWORD *)Memory = v14;
      *(_WORD *)(Memory + 4) = v9;
      v12 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          NameRecord = FopReadNameRecord(a1, v11, Memory + 12LL * v12 + 6);
          if ( NameRecord < 0 )
            break;
          ++v12;
          v11 += 12;
          if ( v12 >= v8 )
            goto LABEL_9;
        }
        BgpFwFreeMemory(Memory);
      }
      else
      {
LABEL_9:
        *a3 = Memory;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)NameRecord;
}
