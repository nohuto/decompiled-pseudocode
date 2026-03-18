/*
 * XREFs of ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x180137580
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::SetBlendMode(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 > 17 )
  {
    if ( a2 >= 19 )
    {
      if ( a2 <= 20 )
      {
        *(_DWORD *)(a1 + 180) = 2;
      }
      else
      {
        switch ( a2 )
        {
          case 21:
            *(_DWORD *)(a1 + 180) = 8;
            break;
          case 22:
            *(_DWORD *)(a1 + 180) = 9;
            break;
          case 23:
            *(_DWORD *)(a1 + 180) = 10;
            break;
        }
      }
    }
  }
  else
  {
    if ( a2 == 17 )
      goto LABEL_8;
    if ( !a2 || a2 == 4 )
    {
      *(_DWORD *)(a1 + 180) = 1;
      goto LABEL_20;
    }
    if ( a2 > 4 )
    {
      if ( a2 <= 6 )
      {
        *(_DWORD *)(a1 + 180) = 0;
        goto LABEL_20;
      }
      if ( a2 == 15 )
LABEL_8:
        *(_DWORD *)(a1 + 180) = 4;
    }
  }
LABEL_20:
  *(_DWORD *)(a1 + 176) |= 0xF00u;
  result = *(unsigned int *)(a1 + 176);
  if ( (a2 == 4 || a2 == 6 || a2 == 17 || a2 == 20) && !*(_BYTE *)(a1 + 353) )
  {
    result = result & 0xFFFFF0FF | 0x700;
    *(_DWORD *)(a1 + 176) = result;
  }
  return result;
}
