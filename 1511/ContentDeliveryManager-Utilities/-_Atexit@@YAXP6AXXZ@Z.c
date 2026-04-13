/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x180024644
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18002335C (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18003D008 )
    abort();
  --qword_18003D008;
  qword_18003D4F0[qword_18003D008] = EncodePointer(a1);
}
