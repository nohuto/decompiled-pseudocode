/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800566AC
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x18005484C (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18008B458 )
    abort();
  --qword_18008B458;
  qword_18008B6C0[qword_18008B458] = EncodePointer(a1);
}
