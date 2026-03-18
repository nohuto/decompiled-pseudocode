/*
 * XREFs of IsPointerInputHookCall @ 0x140155840
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx

  if ( a1 == 6 )
    goto LABEL_2;
  if ( a1 != 4 )
  {
    if ( a1 == 12 )
    {
      v2 = a2[6];
      goto LABEL_3;
    }
    if ( a1 != 3 && a1 != -1 )
    {
      v2 = 0;
      LOWORD(v3) = 0;
      return v2 == 528 && (_WORD)v3 == 582;
    }
LABEL_2:
    v2 = a2[2];
LABEL_3:
    v3 = *((_QWORD *)a2 + 2);
    goto LABEL_4;
  }
  v2 = a2[4];
  v3 = *((_QWORD *)a2 + 1);
LABEL_4:
  if ( v2 - 577 > 3 )
  {
    if ( v2 >= 0x245 && v2 <= 0x257 && v2 != 589 )
      return v2 != 595;
    return v2 == 528 && (_WORD)v3 == 582;
  }
  return 1LL;
}
