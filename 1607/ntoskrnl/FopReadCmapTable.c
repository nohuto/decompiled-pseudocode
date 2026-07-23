/*
 * XREFs of FopReadCmapTable @ 0x1407D4894
 * Callers:
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadCmapTable(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BytesAtOffset; // ebx
  unsigned __int16 v6; // di
  SIZE_T v7; // rcx
  unsigned int v8; // eax
  _DWORD *Memory; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  unsigned int *v13; // rdi
  int v16; // [rsp+28h] [rbp-50h] BYREF

  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 4u, &v16);
  if ( BytesAtOffset >= 0 )
  {
    v6 = __ROR2__(HIWORD(v16), 8);
    LOWORD(v16) = __ROR2__(v16, 8);
    HIWORD(v16) = v6;
    if ( (_WORD)v16 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v7 = 12LL;
      if ( v6 )
      {
        v8 = 8 * v6 - 8 + 12;
        if ( v8 < 0xC )
          return (unsigned int)-1073741675;
        v7 = v8;
        BytesAtOffset = 0;
      }
      Memory = (_DWORD *)BgpFwAllocateMemory(v7);
      if ( Memory )
      {
        v10 = a2 + 4;
        v11 = v6;
        v12 = 0;
        *Memory = v16;
        if ( v6 )
        {
          v13 = Memory + 2;
          while ( 1 )
          {
            BytesAtOffset = FioFwReadBytesAtOffset(a1, v10, 8u, v13 - 1);
            if ( BytesAtOffset >= 0 )
            {
              *((_WORD *)v13 - 2) = __ROR2__(*((_WORD *)v13 - 2), 8);
              *((_WORD *)v13 - 1) = __ROR2__(*((_WORD *)v13 - 1), 8);
              BytesAtOffset = 0;
              *v13 = _byteswap_ulong(*v13);
            }
            if ( BytesAtOffset < 0 )
              break;
            ++v12;
            v13 += 2;
            v10 += 8;
            if ( v12 >= v11 )
              goto LABEL_13;
          }
          BgpFwFreeMemory((__int64)Memory);
        }
        else
        {
LABEL_13:
          *a3 = Memory;
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)BytesAtOffset;
}
