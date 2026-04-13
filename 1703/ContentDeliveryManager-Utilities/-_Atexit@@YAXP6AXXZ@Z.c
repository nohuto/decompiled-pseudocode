/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18006D168
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18006B3C0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_1800F3988 )
    abort();
  --qword_1800F3988;
  qword_1800F3C20[qword_1800F3988] = EncodePointer(a1);
}
