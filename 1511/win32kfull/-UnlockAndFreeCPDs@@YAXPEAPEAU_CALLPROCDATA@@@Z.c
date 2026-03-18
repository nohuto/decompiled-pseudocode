/*
 * XREFs of ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C010A670
 * Callers:
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockAndFreeCPDs(struct _CALLPROCDATA **a1)
{
  __int64 i; // rdx
  _DWORD *v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (__int64)*a1; ; i = (__int64)*a1 )
  {
    v3 = (_DWORD *)i;
    if ( !i )
      break;
    *a1 = *(struct _CALLPROCDATA **)(i + 40);
    *(_QWORD *)(i + 40) = 0LL;
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v3 + gSharedInfo[1] + 17LL) & 1) == 0 )
      HMMarkObjectDestroy(v3);
    HMAssignmentUnlock(&v3);
  }
}
