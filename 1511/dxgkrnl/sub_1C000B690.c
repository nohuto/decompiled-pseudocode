/*
 * XREFs of sub_1C000B690 @ 0x1C000B690
 * Callers:
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00030D8 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     RtlStringCchCopyNExW @ 0x1C00207D4 (RtlStringCchCopyNExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000B690(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  v8 = a4 - (_QWORD)a1;
  while ( a5 )
  {
    v9 = *(_WORD *)((char *)a1 + v8);
    if ( !v9 )
      break;
    *a1 = v9;
    --a5;
    ++a1;
    ++v7;
    if ( !--a2 )
      goto LABEL_10;
  }
  if ( a2 )
    goto LABEL_7;
LABEL_10:
  --a1;
  v6 = -2147483643;
  --v7;
LABEL_7:
  *a1 = 0;
  result = v6;
  if ( a3 )
    *a3 = v7;
  return result;
}
