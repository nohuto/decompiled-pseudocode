/*
 * XREFs of DebugExpr @ 0x1C0043998
 * Callers:
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     _strtoui64_0 @ 0x1C002362E (_strtoui64_0.c)
 *     _strupr_0 @ 0x1C0023634 (_strupr_0.c)
 *     FindObjSymbol @ 0x1C00441D8 (FindObjSymbol.c)
 *     IsNumber @ 0x1C0044270 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 DebugExpr(char *Src, unsigned __int64 *a2, _QWORD *a3, ...)
{
  unsigned int v3; // ebx
  bool v5; // zf
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char ObjSymbol; // al
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v3 = 0;
  v5 = *Src == 37;
  v14 = 0LL;
  LODWORD(v15) = 0;
  if ( v5 && Src[1] == 37 )
  {
    v8 = 0;
    v9 = 233;
LABEL_4:
    PrintDebugMessage(v9, v8, 0, 0, 0LL);
    return (unsigned int)-2;
  }
  if ( (unsigned __int8)IsNumber(Src, 16LL) )
  {
    v11 = strtoui64_0(Src, 0LL, 16);
    *a2 = v11;
    ObjSymbol = FindObjSymbol(v11, &v14, (__int64 *)va);
    v10 = v14;
    if ( ObjSymbol && (*(_WORD *)(v14 + 58) != 8 || (unsigned int)v15 >= *(_DWORD *)(v14 + 80) - 186) )
      v10 = 0LL;
  }
  else
  {
    strupr_0(Src);
    if ( (unsigned int)GetNameSpaceObject(Src) || (v10 = v14, *(_WORD *)(v14 + 58) != 8) )
    {
      v8 = (int)Src;
      v9 = 232;
      goto LABEL_4;
    }
    *a2 = *(_QWORD *)(v14 + 88) + 186LL;
  }
  if ( a3 )
    *a3 = v10;
  return v3;
}
