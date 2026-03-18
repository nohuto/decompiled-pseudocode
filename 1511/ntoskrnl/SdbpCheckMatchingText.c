/*
 * XREFs of SdbpCheckMatchingText @ 0x14067DE90
 * Callers:
 *     <none>
 * Callees:
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingText(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp-14h] BYREF
  void *v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h] BYREF
  int v18; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0x2000;
  *a1 = 0;
  v15 = 0;
  v14 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v13 = 0;
  v12 = 0;
  if ( (unsigned int)SdbpGetMatchingTextAttributes(
                       a3,
                       a5,
                       (unsigned int)&v17,
                       (unsigned int)&v16,
                       (__int64)&v13,
                       (__int64)&v12,
                       (__int64)&v18)
    && (v10 = a6,
        (unsigned int)SdbpCheckMatchingTextEntry(a2, a6, v17, (_DWORD)v16, v13, v12, v18, (__int64)&v15, (__int64)&v14)) )
  {
    v6 = 1;
    *(_DWORD *)(v10 + 80) |= v14;
    v9 = v15;
    *a1 = v15;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  if ( v16 )
    AslFree(v9, v16);
  return v6;
}
