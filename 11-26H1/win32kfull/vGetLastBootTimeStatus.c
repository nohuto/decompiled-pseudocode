/*
 * XREFs of vGetLastBootTimeStatus @ 0x1401C664C
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x140184E10 (bQueryFntCacheReg.c)
 */

__int64 __fastcall vGetLastBootTimeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  *(_DWORD *)(*(_QWORD *)(v3 + 19592) + 20LL) = 0;
  if ( (unsigned int)bQueryFntCacheReg(*(HANDLE *)(v3 + 19608), L"LastBootTimeFontCacheState", &v6) )
    *(_DWORD *)(*(_QWORD *)(v3 + 19592) + 20LL) = v6;
  v4 = *(_QWORD *)(v3 + 19592);
  result = *(unsigned int *)(v4 + 20);
  *(_DWORD *)(v4 + 24) = result;
  return result;
}
