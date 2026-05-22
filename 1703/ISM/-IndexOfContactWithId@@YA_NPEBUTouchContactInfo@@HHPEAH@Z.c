/*
 * XREFs of ?IndexOfContactWithId@@YA_NPEBUTouchContactInfo@@HHPEAH@Z @ 0x18003A770
 * Callers:
 *     ?Add@CraneCarryRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800383B0 (-Add@CraneCarryRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?Add@CraneGrabRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180039920 (-Add@CraneGrabRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IndexOfContactWithId(const struct TouchContactInfo *a1, int a2, int a3, int *a4)
{
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx

  *a4 = -1;
  if ( a3 == 0xFFFF )
    return 0;
  v6 = 0;
  v7 = a2;
  v8 = 0LL;
  if ( v7 <= 0 )
    return 0;
  while ( *((unsigned __int16 *)a1 + 1) != a3 || (*(_BYTE *)a1 & 8) == 0 )
  {
    ++v6;
    ++v8;
    a1 = (const struct TouchContactInfo *)((char *)a1 + 40);
    if ( v8 >= v7 )
      return 0;
  }
  *a4 = v6;
  return 1;
}
