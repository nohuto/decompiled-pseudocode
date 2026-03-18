/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x1C00077E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  unsigned __int16 v7; // cx
  __int64 v8; // r8

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  result = *(_QWORD *)(v4 + 4192);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v2 == 40 )
      v6 = *(_QWORD *)(a2 + 64);
    else
      v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_WORD *)(result + 1);
    result = *(_QWORD *)(v4 + 4224);
    if ( result == 13 )
    {
      if ( v7 == 0xFFFF )
      {
        result = 255LL;
      }
      else if ( v7 <= 0x20Fu )
      {
        if ( v7 <= 0x111u )
          result = 0LL;
        else
          result = (unsigned __int16)(v7 - 273);
      }
      else
      {
        result = 254LL;
      }
      *(_BYTE *)(v6 + 9) = result;
    }
    else if ( result == 47 )
    {
      if ( v7 == 0xFFFF )
      {
        result = 255LL;
      }
      else if ( v7 <= 0x20Fu )
      {
        if ( v7 <= 0x111u )
          result = 0LL;
        else
          result = (unsigned __int16)(v7 - 273);
      }
      else
      {
        result = 254LL;
      }
      *(_BYTE *)(v6 + 10) = result;
    }
  }
  v8 = *(_QWORD *)(v4 + 4192);
  if ( v8 )
    result = StorPortExtendedFunction(25LL, a1, v8, *(unsigned int *)(v4 + 4200));
  *(_QWORD *)(v4 + 4192) = 0LL;
  *(_DWORD *)(v4 + 4200) = 0;
  *(_QWORD *)(v4 + 4224) = 0LL;
  *(_BYTE *)(v4 + 4186) = 1;
  return result;
}
