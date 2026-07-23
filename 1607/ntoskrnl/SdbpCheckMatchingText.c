/*
 * XREFs of SdbpCheckMatchingText @ 0x1406C2B08
 * Callers:
 *     <none>
 * Callees:
 *     AslFree @ 0x140514714 (AslFree.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingText(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // esi
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+54h] [rbp-1Ch] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+5Ch] [rbp-14h] BYREF
  void *v18; // [rsp+60h] [rbp-10h] BYREF
  __int64 v19; // [rsp+68h] [rbp-8h] BYREF
  int v20; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v20 = 0x2000;
  *a1 = 0;
  v17 = 0;
  v16 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v15 = 0;
  v14 = 0;
  if ( !(unsigned int)SdbpGetMatchingTextAttributes(
                        a3,
                        a5,
                        (unsigned int)&v19,
                        (unsigned int)&v18,
                        (__int64)&v15,
                        (__int64)&v14,
                        (__int64)&v20) )
  {
    v9 = "Failed to read MATCHING_TEXT entry";
    v10 = 1696;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingText", v10, (_DWORD)v9);
    goto LABEL_7;
  }
  v12 = a6;
  if ( !(unsigned int)SdbpCheckMatchingTextEntry(a2, a6, v19, (_DWORD)v18, v15, v14, v20, (__int64)&v17, (__int64)&v16) )
  {
    v9 = "Failed to check MATCHING_TEXT entry";
    v10 = 1713;
    goto LABEL_3;
  }
  v6 = 1;
  *(_DWORD *)(v12 + 80) |= v16;
  v11 = v17;
  *a1 = v17;
LABEL_7:
  if ( v18 )
    AslFree(v11, v18);
  return v6;
}
