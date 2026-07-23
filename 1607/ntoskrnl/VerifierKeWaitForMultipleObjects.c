/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x140712874
 * Callers:
 *     <none>
 * Callees:
 *     ViKeObjectAcquired @ 0x140713078 (ViKeObjectAcquired.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x140713278 (ViKeWaitForMultipleObjectsCommon.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        signed int a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // eax
  unsigned int v11; // r14d
  signed int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = ViKeWaitForMultipleObjectsCommon(a1, a2, a3, a4, a5, a6, a7, a8);
  v11 = v10;
  v12 = v10 & 0xFFFFFF7F;
  if ( a5 )
  {
    if ( v10 >= 0 && v12 < a1 )
    {
      v15 = v12;
      v14 = 1LL;
      v13 = a2 + 8 * v15;
      goto LABEL_7;
    }
  }
  else if ( !v12 )
  {
    v13 = a2;
    v14 = (unsigned int)a1;
LABEL_7:
    ViKeObjectAcquired(v14, v13, a7, retaddr);
  }
  return v11;
}
